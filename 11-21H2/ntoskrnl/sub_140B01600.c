/*
 * XREFs of sub_140B01600 @ 0x140B01600
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     KseRegisterShim @ 0x140825A50 (KseRegisterShim.c)
 */

void sub_140B01600()
{
  __int64 v0; // rax

  if ( (int)KseRegisterShim((__int64)&unk_140C049A0, 0LL, 0LL) >= 0 )
  {
    v0 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v0]) = 0;
    LODWORD(qword_140C2A440[v0]) = 721040;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(11LL, "KSE-DS: driver scope shim registered.\n");
    sub_1403C09C8(11);
  }
}
