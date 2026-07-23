/*
 * XREFs of sub_1405C7E9C @ 0x1405C7E9C
 * Callers:
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C7F88 @ 0x1405C7F88 (sub_1405C7F88.c)
 */

__int64 __fastcall sub_1405C7E9C(char a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  result = qword_140D068A8;
  if ( qword_140D068A8 && *(_DWORD *)(qword_140D068A8 + 4) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
    v4 = 0;
    for ( i = qword_140D068A8; v4 < *(_DWORD *)qword_140D068A8; ++v4 )
    {
      v6 = v4;
      v7 = 448LL * v4;
      LOBYTE(v6) = 2;
      v8 = v7 + i + 80;
      LOBYTE(v7) = a1;
      sub_1405C7F88(v8, v6, v7);
      i = qword_140D068A8;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= result;
          if ( v11 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
