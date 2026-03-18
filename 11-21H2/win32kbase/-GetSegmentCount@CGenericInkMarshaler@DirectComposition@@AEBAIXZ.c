/*
 * XREFs of ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0219200
 * Callers:
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218F4C (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C02192E0 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0219410 (-SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DirectComposition::CGenericInkMarshaler::GetSegmentCount(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned __int64 v1; // r8

  v1 = *((_QWORD *)this + 18);
  if ( v1 )
    return *((_QWORD *)this + 16) / v1;
  else
    return 0LL;
}
