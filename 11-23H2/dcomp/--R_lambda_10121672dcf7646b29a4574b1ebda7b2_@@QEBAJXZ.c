/*
 * XREFs of ??R_lambda_10121672dcf7646b29a4574b1ebda7b2_@@QEBAJXZ @ 0x180141568
 * Callers:
 *     ?First@?$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@@345@@Z @ 0x180142600 (-First@-$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSceneNode@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_10121672dcf7646b29a4574b1ebda7b2_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v1 + 40);
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v7);
  v5 = v4(v3, &GUID_db4730e4_f364_576b_878e_59a7c459a752, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v7);
  return (unsigned int)v5;
}
