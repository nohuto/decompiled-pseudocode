/*
 * XREFs of sub_1403A7BF0 @ 0x1403A7BF0
 * Callers:
 *     sub_140398ECC @ 0x140398ECC (sub_140398ECC.c)
 *     sub_1403A7B10 @ 0x1403A7B10 (sub_1403A7B10.c)
 *     sub_1403AA7E0 @ 0x1403AA7E0 (sub_1403AA7E0.c)
 *     sub_140567390 @ 0x140567390 (sub_140567390.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_14064D474 @ 0x14064D474 (sub_14064D474.c)
 *     sub_140AAB038 @ 0x140AAB038 (sub_140AAB038.c)
 *     sub_140AAB248 @ 0x140AAB248 (sub_140AAB248.c)
 *     sub_140AAB2D4 @ 0x140AAB2D4 (sub_140AAB2D4.c)
 *     sub_140AAB76C @ 0x140AAB76C (sub_140AAB76C.c)
 *     sub_140AAB7D4 @ 0x140AAB7D4 (sub_140AAB7D4.c)
 *     sub_140AABC94 @ 0x140AABC94 (sub_140AABC94.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AACB80 @ 0x140AACB80 (sub_140AACB80.c)
 *     sub_140AACEA0 @ 0x140AACEA0 (sub_140AACEA0.c)
 *     sub_140AAD188 @ 0x140AAD188 (sub_140AAD188.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 *     sub_140AADC00 @ 0x140AADC00 (sub_140AADC00.c)
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140AAE8DC @ 0x140AAE8DC (sub_140AAE8DC.c)
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 *     sub_140AAED40 @ 0x140AAED40 (sub_140AAED40.c)
 *     sub_140AAEDB0 @ 0x140AAEDB0 (sub_140AAEDB0.c)
 *     sub_140AB08A0 @ 0x140AB08A0 (sub_140AB08A0.c)
 *     sub_140AB0910 @ 0x140AB0910 (sub_140AB0910.c)
 *     sub_140AB097C @ 0x140AB097C (sub_140AB097C.c)
 *     sub_140AB09E0 @ 0x140AB09E0 (sub_140AB09E0.c)
 *     sub_140AB0AB0 @ 0x140AB0AB0 (sub_140AB0AB0.c)
 *     sub_140AB0E60 @ 0x140AB0E60 (sub_140AB0E60.c)
 *     sub_140AB0FE0 @ 0x140AB0FE0 (sub_140AB0FE0.c)
 *     sub_140AB1050 @ 0x140AB1050 (sub_140AB1050.c)
 *     sub_140AB12E0 @ 0x140AB12E0 (sub_140AB12E0.c)
 *     sub_140AB1390 @ 0x140AB1390 (sub_140AB1390.c)
 *     sub_140AB1400 @ 0x140AB1400 (sub_140AB1400.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void sub_1403A7BF0()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v2; // r9
  int v3; // eax
  bool v4; // zf

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    v0 = (unsigned __int8)byte_140C5ABE8;
    KeReleaseSpinLockFromDpcLevel(&qword_140CF5F50);
    if ( (unsigned __int8)v0 <= 2u )
    {
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v2 = *((_QWORD *)CurrentPrcb + 4375);
        v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v4 = (v3 & *(_DWORD *)(v2 + 20)) == 0;
        *(_DWORD *)(v2 + 20) &= v3;
        if ( v4 )
          sub_140418E4C(CurrentPrcb);
      }
      __writecr8(v0);
    }
  }
}
