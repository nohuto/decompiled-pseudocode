/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1407150C0
 * Callers:
 *     NtQueryInformationAtom @ 0x1407DB770 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x1402976B4 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403DED20 (_snwprintf_s.c)
 *     Feature_997142843__private_IsEnabledDeviceUsage @ 0x140411524 (Feature_997142843__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlpLockAtomTable @ 0x1407180D0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073F848 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // r15d
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  bool v17; // zf
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // [rsp+34h] [rbp-84h]
  wchar_t DstBuf[16]; // [rsp+58h] [rbp-60h] BYREF

  v8 = a2;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v11 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v20 = -1073741816;
    v15 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v16 = v15;
    if ( v15 )
    {
      v17 = *(_WORD *)(v15 + 10) == (unsigned __int16)v8;
      v14 = a1;
      if ( v17 && RtlpLookupLowBox(a1, v15, 0) )
      {
        v20 = 0;
        if ( a3 )
          *a3 = *(unsigned __int16 *)(v16 + 36);
        if ( a4 )
          *a4 = *(unsigned __int16 *)(v16 + 38);
        if ( a5 )
        {
          v18 = 2 * *(unsigned __int8 *)(v16 + 40);
          v19 = *a6;
          if ( v18 >= *a6 )
          {
            if ( v19 < 2 )
            {
              *a6 = v18;
              v18 = 0;
            }
            else
            {
              v18 = v19 - 2;
            }
          }
          if ( v18 )
          {
            memmove(a5, (const void *)(v16 + 42), v18);
            *((_WORD *)a5 + ((unsigned __int64)v18 >> 1)) = 0;
            *a6 = v18;
          }
          else
          {
            v20 = -1073741789;
          }
        }
      }
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  if ( (_WORD)v8 )
  {
    v20 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( a5 )
    {
      v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      if ( (unsigned int)Feature_997142843__private_IsEnabledDeviceUsage() )
      {
        if ( v12 < v11 )
          goto LABEL_19;
        if ( v11 >= 2 )
        {
          v12 = v11 - 2;
          goto LABEL_19;
        }
      }
      else
      {
        v13 = *a6;
        if ( v12 < *a6 )
          goto LABEL_19;
        if ( v13 >= 2 )
        {
          v12 = v13 - 2;
          goto LABEL_19;
        }
      }
      v12 = 0;
LABEL_19:
      if ( v12 )
      {
        memmove(a5, DstBuf, v12);
        *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
        *a6 = v12;
      }
      else
      {
        v20 = -1073741789;
      }
      goto LABEL_22;
    }
LABEL_38:
    v14 = a1;
    goto LABEL_39;
  }
  v20 = -1073741811;
LABEL_22:
  v14 = a1;
LABEL_39:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 8));
  KeAbPostRelease(v14 + 8);
  KeLeaveCriticalRegion();
  return v20;
}
