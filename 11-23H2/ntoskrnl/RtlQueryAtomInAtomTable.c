/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1407152D0
 * Callers:
 *     NtQueryInformationAtom @ 0x1407DBA40 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140297944 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403DEF00 (_snwprintf_s.c)
 *     Feature_2415126843__private_IsEnabledDeviceUsage @ 0x140411764 (Feature_2415126843__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlpLockAtomTable @ 0x1407182D0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073FA38 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // ebx
  ULONG v11; // r14d
  ULONG v12; // esi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edi
  ULONG v16; // eax
  NTSTATUS v17; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+60h] [rbp-68h] BYREF

  v8 = Atom;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v11 = *AtomNameLength & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( (_WORD)v8 )
    {
      v17 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( AtomName )
      {
        v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
        if ( v12 >= v11 )
        {
          if ( v11 < 2 )
            v12 = 0;
          else
            v12 = v11 - 2;
        }
        if ( v12 )
        {
          memmove(AtomName, DstBuf, v12);
          AtomName[(unsigned __int64)v12 >> 1] = 0;
          *AtomNameLength = v12;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
    else
    {
      v17 = -1073741811;
    }
    goto LABEL_37;
  }
  v17 = -1073741816;
  v13 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
  v14 = v13;
  if ( !v13 || *(_WORD *)(v13 + 10) != (_WORD)v8 || !RtlpLookupLowBox((__int64)AtomTableHandle, v13, 0) )
    goto LABEL_37;
  v17 = 0;
  if ( AtomUsage )
    *AtomUsage = *(unsigned __int16 *)(v14 + 36);
  if ( AtomFlags )
    *AtomFlags = *(unsigned __int16 *)(v14 + 38);
  if ( !AtomName )
    goto LABEL_37;
  v15 = 2 * *(unsigned __int8 *)(v14 + 40);
  if ( (unsigned int)Feature_2415126843__private_IsEnabledDeviceUsage() )
  {
    if ( v15 < v11 )
      goto LABEL_34;
    if ( v11 >= 2 )
    {
      v15 = v11 - 2;
      goto LABEL_34;
    }
  }
  else
  {
    v16 = *AtomNameLength;
    if ( v15 < *AtomNameLength )
      goto LABEL_34;
    if ( v16 >= 2 )
    {
      v15 = v16 - 2;
      goto LABEL_34;
    }
  }
  *AtomNameLength = v15;
  v15 = 0;
LABEL_34:
  if ( v15 )
  {
    memmove(AtomName, (const void *)(v14 + 42), v15);
    AtomName[(unsigned __int64)v15 >> 1] = 0;
    *AtomNameLength = v15;
  }
  else
  {
    v17 = -1073741789;
  }
LABEL_37:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v17;
}
