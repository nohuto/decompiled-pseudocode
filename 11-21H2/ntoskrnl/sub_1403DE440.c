/*
 * XREFs of sub_1403DE440 @ 0x1403DE440
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_1403DE440(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  v13 = a4;
  v12 = 12;
  v14 = 0LL;
  v15 = 0;
  v4 = ExQueryWnfStateData(a1, &v13, &v14, &v12);
  if ( v4 >= 0 )
  {
    if ( v12 < 0xC )
    {
      return 0;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
      byte_140C23324 = (_DWORD)v14 == 0;
      KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
    }
  }
  return (unsigned int)v4;
}
