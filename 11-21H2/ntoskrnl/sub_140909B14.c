/*
 * XREFs of sub_140909B14 @ 0x140909B14
 * Callers:
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_140510A40 @ 0x140510A40 (sub_140510A40.c)
 *     sub_1409099C0 @ 0x1409099C0 (sub_1409099C0.c)
 *     sub_140909EB0 @ 0x140909EB0 (sub_140909EB0.c)
 *     sub_14090A0D0 @ 0x14090A0D0 (sub_14090A0D0.c)
 */

__int64 __fastcall sub_140909B14(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int *StartingRunIndex)
{
  int *v7; // r13
  unsigned int v8; // ebp
  int v9; // ebx
  int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdx
  _RTL_BITMAP *v16; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG v18; // edx
  ULONG v19; // ebx
  ULONG NextForwardRunClear; // edx
  unsigned int v21; // ecx
  char v23; // [rsp+40h] [rbp-48h]
  unsigned int v24; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-40h]

  v7 = StartingRunIndex;
  v8 = 0;
  v9 = 0;
  v23 = 0;
  v24 = 0;
  if ( StartingRunIndex )
    v12 = *StartingRunIndex;
  else
    v12 = 0;
  if ( !dword_140C4B058 )
  {
    *a1 = 0;
    return (unsigned int)v9;
  }
  if ( (dword_140C4AFE0 & 4) != 0 )
  {
    v9 = sub_1409099C0(a3, a4, a2, v12, &v24);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v8 = v24;
    v23 = 1;
  }
  v13 = v8 / dword_140C4ADD0;
  v25 = v8 / dword_140C4ADD0;
  ExAcquireFastMutex(&stru_140C4B020);
  v14 = 2LL * v13;
  if ( !*((_QWORD *)&stru_140C4ADE0.Buffer + 2 * v13) )
  {
    KeReleaseGuardedMutex(&stru_140C4B020);
    v9 = sub_140909EB0(v13, v15);
    if ( v9 < 0 )
      goto LABEL_30;
    ExAcquireFastMutex(&stru_140C4B020);
  }
  v16 = (_RTL_BITMAP *)((char *)&stru_140C4ADE0 + 8 * v14);
  if ( (dword_140C4AFE0 & 1) != 0 )
  {
    v18 = v8 * dword_140C4B008 % dword_140C4B004;
    v24 = v18 + dword_140C4B008 - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      LODWORD(StartingRunIndex) = v18;
      NextForwardRunClear = RtlFindNextForwardRunClear(v16, v18, (PULONG)&StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v19 = -a2 & (a2 + (_DWORD)StartingRunIndex - 1);
        if ( v19 - (unsigned int)StartingRunIndex < NextForwardRunClear
          && NextForwardRunClear + (_DWORD)StartingRunIndex - v19 >= a2 )
        {
          if ( v19 + a2 - 1 <= v24 )
          {
            RtlSetBits(v16, v19, a2);
            ClearBitsAndSet = v19;
          }
          break;
        }
        v18 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
      else
      {
        v18 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v16, a2, 0);
  }
  KeReleaseGuardedMutex(&stru_140C4B020);
  if ( ClearBitsAndSet == -1 )
  {
    v9 = -1073741670;
  }
  else
  {
    v9 = 0;
    v21 = ClearBitsAndSet + v25 * dword_140C4B004;
    *a1 = v21;
    if ( v12 != 3 )
      return (unsigned int)v9;
    if ( (dword_140C4AFE0 & 2) == 0 )
      return (unsigned int)v9;
    v9 = sub_140510A40(v21, a2, a3, a4, v7[14], a5, a6);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    ExAcquireFastMutex(&stru_140C4B020);
    RtlClearBits(v16, ClearBitsAndSet, a2);
    KeReleaseGuardedMutex(&stru_140C4B020);
    *a1 = -1;
  }
LABEL_30:
  if ( v23 )
    sub_14090A0D0(v8, a2);
  return (unsigned int)v9;
}
