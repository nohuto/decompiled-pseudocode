/*
 * XREFs of sub_140629D0C @ 0x140629D0C
 * Callers:
 *     sub_140629B70 @ 0x140629B70 (sub_140629B70.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_140629368 @ 0x140629368 (sub_140629368.c)
 *     sub_14062A198 @ 0x14062A198 (sub_14062A198.c)
 *     sub_14062B56C @ 0x14062B56C (sub_14062B56C.c)
 */

unsigned __int64 __fastcall sub_140629D0C(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r8
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]

  v6 = a3 - a2;
  v20 = a2;
  v19 = 0LL;
  result = v6 + 1;
  v21 = v6 + 1;
  if ( v6 != -1 )
  {
    do
    {
      result = sub_140629368((__int64)SpinLock, &v20, 0x40000LL - *a5, a4, &v19, 1);
      v10 = *((_QWORD *)&v19 + 1);
      v11 = result;
      if ( !*((_QWORD *)&v19 + 1) )
        break;
      sub_14062B56C(SpinLock, v19, result, *((_QWORD *)&v19 + 1));
      result = sub_14062A198(SpinLock, v11, v10);
      *a5 += v10;
      if ( *a5 >= 0x40000uLL )
      {
        v12 = *((_QWORD *)SpinLock + 5);
        v13 = *a6;
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = *((_QWORD *)CurrentPrcb + 4375);
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
              *(_DWORD *)(v16 + 20) &= v17;
              if ( v18 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8((unsigned __int8)v13);
        *a5 = 0LL;
        result = sub_14045F78C(SpinLock);
        *a6 = result;
        if ( v12 != *((_QWORD *)SpinLock + 5) )
        {
          result = 0LL;
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
        }
      }
    }
    while ( v21 );
  }
  return result;
}
