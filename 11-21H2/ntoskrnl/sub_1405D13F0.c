/*
 * XREFs of sub_1405D13F0 @ 0x1405D13F0
 * Callers:
 *     sub_140997C84 @ 0x140997C84 (sub_140997C84.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409897C4 @ 0x1409897C4 (sub_1409897C4.c)
 */

__int64 __fastcall sub_1405D13F0(__int64 a1, char a2, __int128 *a3)
{
  char v6; // bl
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  bool v12; // zf

  v6 = sub_1409897C4();
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  memset(byte_140C22480, 0, 0x150uLL);
  byte_140C22483 = byte_140C23325;
  byte_140C22481 = dword_140C232CC == 0;
  dword_140C224AC = dword_140C5AE1C;
  byte_140C224B1 = byte_140C1F9E0;
  dword_140C224A0 = dword_140D00BC4;
  dword_140C224A4 = dword_140D01430;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C22482 = byte_140C23324;
  dword_140C22484 = v8;
  qword_140C22508 = -1LL;
  byte_140C22480[0] = 1;
  byte_140C224B0 = v6;
  byte_140C22488 = a2;
  xmmword_140C22490 = *a3;
  KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
