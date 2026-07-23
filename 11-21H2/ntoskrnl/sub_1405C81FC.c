/*
 * XREFs of sub_1405C81FC @ 0x1405C81FC
 * Callers:
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C81FC(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf
  LARGE_INTEGER v19; // [rsp+48h] [rbp+10h] BYREF

  v19.QuadPart = 0LL;
  result = qword_140D068A8;
  *a2 = 0;
  *a3 = 0LL;
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v7 = (unsigned int)dword_140C542C0;
      result = (unsigned int)dword_140C542C0;
      if ( dword_140C542C0 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
        v9 = KeQueryInterruptTimePrecise(&v19);
        v10 = 0LL;
        v11 = qword_140D068A8 + 448 * v7;
        v12 = *(_DWORD *)(v11 + 108);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 112);
          while ( 1 )
          {
            v14 = (unsigned __int64)(unsigned int)v10 << 6;
            v15 = *(_QWORD *)(v14 + v13 + 32);
            if ( v15 )
            {
              if ( v9 - v15 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v12 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v14 + v13 + 16);
          *a3 = *((_QWORD *)qword_140D01518 + 3 * v10 + 3);
        }
LABEL_11:
        KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v17 = *((_QWORD *)CurrentPrcb + 4375);
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
              *(_DWORD *)(v17 + 20) &= result;
              if ( v18 )
                result = sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
      }
    }
  }
  return result;
}
