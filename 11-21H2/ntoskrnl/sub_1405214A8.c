/*
 * XREFs of sub_1405214A8 @ 0x1405214A8
 * Callers:
 *     sub_1405213F0 @ 0x1405213F0 (sub_1405213F0.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405214A8(unsigned int a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // ecx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  v3 = a1;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( off_140C02520 == &off_1400032A0 )
    v4 = qword_140C4D0A8;
  else
    v4 = qword_140C4D0A8 + 8LL * a1 * dword_140C4D044;
  v5 = dword_140D0E5E0[a1];
  Affinity.Group = dword_140D0E5E0[v3] >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v5 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  __writemsr(0x390u, a2);
  while ( 1 )
  {
    v10 = !_BitScanForward64((unsigned __int64 *)&v9, a2);
    if ( v10 )
      break;
    v8 = v9;
    if ( (unsigned int)v9 >= 0x20 )
      v9 = (unsigned int)(v9 + dword_140C4A418 - 32);
    a2 ^= 1LL << v8;
    *(_DWORD *)(*(_QWORD *)(v4 + 8 * v9) + 24LL) = 3;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
