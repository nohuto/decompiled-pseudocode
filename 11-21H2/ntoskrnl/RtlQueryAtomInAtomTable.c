/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1407A0A30
 * Callers:
 *     NtQueryInformationAtom @ 0x1406C43F0 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F349C @ 0x1402F349C (sub_1402F349C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403E6640 (_snwprintf_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 *     sub_1407A1A30 @ 0x1407A1A30 (sub_1407A1A30.c)
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
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edi
  ULONG v13; // eax
  unsigned int v14; // esi
  ULONG v15; // eax
  NTSTATUS v17; // [rsp+30h] [rbp-88h]
  wchar_t DstBuf[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = Atom;
  if ( !(unsigned __int8)sub_1407A0EA0() )
    return -1073741811;
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
        v14 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
        v15 = *AtomNameLength;
        if ( v14 >= *AtomNameLength )
        {
          if ( v15 < 2 )
            v14 = 0;
          else
            v14 = v15 - 2;
        }
        if ( v14 )
        {
          memmove(AtomName, DstBuf, v14);
          AtomName[(unsigned __int64)v14 >> 1] = 0;
          *AtomNameLength = v14;
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
  }
  else
  {
    v17 = -1073741816;
    v10 = sub_1407A1A30(AtomTableHandle, v8 & 0x3FFF);
    v11 = v10;
    if ( v10 && *(_WORD *)(v10 + 10) == (_WORD)v8 && sub_1402F349C((__int64)AtomTableHandle, v10, 0) )
    {
      v17 = 0;
      if ( AtomUsage )
        *AtomUsage = *(unsigned __int16 *)(v11 + 36);
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(v11 + 38);
      if ( AtomName )
      {
        v12 = 2 * *(unsigned __int8 *)(v11 + 40);
        v13 = *AtomNameLength;
        if ( v12 >= *AtomNameLength )
        {
          if ( v13 < 2 )
          {
            *AtomNameLength = v12;
            v12 = 0;
          }
          else
          {
            v12 = v13 - 2;
          }
        }
        if ( v12 )
        {
          memmove(AtomName, (const void *)(v11 + 42), v12);
          AtomName[(unsigned __int64)v12 >> 1] = 0;
          *AtomNameLength = v12;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  sub_1402AFC00((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v17;
}
