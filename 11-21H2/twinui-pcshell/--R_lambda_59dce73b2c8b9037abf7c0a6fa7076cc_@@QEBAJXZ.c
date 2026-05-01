/*
 * XREFs of ??R_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@QEBAJXZ @ 0x1803DF758
 * Callers:
 *     ??$Do@V_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@V_lambda_8b1d0033280602c03791bb8470462811_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@AEBV_lambda_8b1d0033280602c03791bb8470462811_@@@Z @ 0x1803DB79C (--$Do@V_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@V_lambda_8b1d0033280602c03791bb8470462811_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_59dce73b2c8b9037abf7c0a6fa7076cc_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_c6d1be9f_c3ef_5ac8_9005_e82eb498d9ea, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return (unsigned int)v4;
}
