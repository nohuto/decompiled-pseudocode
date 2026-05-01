/*
 * XREFs of ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8
 * Callers:
 *     _lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator() @ 0x18024F9DC (_lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_--operator().c)
 *     _lambda_49390bb1d2cae92a58be327124002af0_::operator() @ 0x18024FBE4 (_lambda_49390bb1d2cae92a58be327124002af0_--operator().c)
 *     ??R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ @ 0x18024FD60 (--R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ.c)
 *     ??R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ @ 0x18024FF24 (--R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ.c)
 *     ??R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ @ 0x180250058 (--R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ.c)
 *     ??R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ @ 0x1802502D8 (--R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1806A320C (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x1801041F0 (--0CTaskbandPin@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CTaskbandPin_CreateInstance(struct CPinnedList **a1)
{
  CTaskbandPin *v2; // rax

  v2 = (CTaskbandPin *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v2 = CTaskbandPin::CTaskbandPin(v2);
  *a1 = v2;
  return v2 == 0LL ? 0x8007000E : 0;
}
