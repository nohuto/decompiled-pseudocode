/*
 * XREFs of ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x18030A3BC
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAUtagRECT@@@Z @ 0x1801AE788 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Deta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x18031DDD0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUCRect@Geome.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x1804EEBF0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Micros.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013BFA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_18013BFA0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
