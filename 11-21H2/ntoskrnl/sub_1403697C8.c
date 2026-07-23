/*
 * XREFs of sub_1403697C8 @ 0x1403697C8
 * Callers:
 *     sub_1407EC230 @ 0x1407EC230 (sub_1407EC230.c)
 *     sub_1407EC280 @ 0x1407EC280 (sub_1407EC280.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407FD9E0 @ 0x1407FD9E0 (sub_1407FD9E0.c)
 *     sub_1407FEA60 @ 0x1407FEA60 (sub_1407FEA60.c)
 *     sub_1407FFF0C @ 0x1407FFF0C (sub_1407FFF0C.c)
 *     sub_140800270 @ 0x140800270 (sub_140800270.c)
 *     sub_1408002F8 @ 0x1408002F8 (sub_1408002F8.c)
 *     sub_140808700 @ 0x140808700 (sub_140808700.c)
 *     sub_14080A09C @ 0x14080A09C (sub_14080A09C.c)
 *     sub_14080D294 @ 0x14080D294 (sub_14080D294.c)
 *     sub_1409899DC @ 0x1409899DC (sub_1409899DC.c)
 *     sub_140989A30 @ 0x140989A30 (sub_140989A30.c)
 *     sub_140989AB0 @ 0x140989AB0 (sub_140989AB0.c)
 *     sub_140989C20 @ 0x140989C20 (sub_140989C20.c)
 *     sub_140989C70 @ 0x140989C70 (sub_140989C70.c)
 *     sub_140996C10 @ 0x140996C10 (sub_140996C10.c)
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     sub_1407EDB78 @ 0x1407EDB78 (sub_1407EDB78.c)
 */

NTSTATUS __fastcall sub_1403697C8(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    sub_1407EDB78();
    return RtlSetSystemBootStatus(RtlBsdPowerTransition, &xmmword_140C54798, 0x20u, 0LL);
  }
  else
  {
    dword_140C245E8 |= a1;
    return sub_14036AAC4(&unk_140C24620, 1LL);
  }
}
