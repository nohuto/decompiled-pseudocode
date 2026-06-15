/*
 * XREFs of ??$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180103240
 * Callers:
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1801096EC (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001028C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<CSharedStreamGroupProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  const struct _GUID *v4; // rcx
  __int64 v5; // r8
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  __int64 v8; // r8
  int CanCastTo; // edi
  __int64 v10; // r8
  const struct _GUID *v11; // r10
  __int64 v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v3 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, &GUID_1120b11f_c7b3_4012_adbf_8ca8508df960) )
    {
      v3 = v8 + 8;
      CanCastTo = 0;
LABEL_11:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v7, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
    {
      v3 = v10 + 16;
      v16 = v10 + 16;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInspectable>::CanCastTo(
                    v10 + 320,
                    v11);
      v3 = v16;
    }
    if ( CanCastTo >= 0 )
      goto LABEL_11;
  }
LABEL_13:
  if ( CanCastTo < 0 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    return (unsigned int)CanCastTo;
  }
  v15 = 0LL;
  CanCastTo = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v15);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    return (unsigned int)CanCastTo;
  }
  v13 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v14 = 0LL;
  v16 = *a2;
  *a2 = v13;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
