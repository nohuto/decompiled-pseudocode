/*
 * XREFs of sub_1405CA0A0 @ 0x1405CA0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_1405CA0A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  char v13[4]; // [rsp+20h] [rbp-18h] BYREF
  int v14[5]; // [rsp+24h] [rbp-14h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v13[0] = 0;
  v14[0] = 1;
  v4 = ExQueryWnfStateData(a1, &v15, v13, v14);
  if ( v4 >= 0 )
  {
    if ( v14[0] )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
      byte_140C23325 = v13[0];
      v6 = v5;
      if ( byte_140C22480[0] && v13[0] && !byte_140C22483 )
        byte_140C22483 = 1;
      KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
