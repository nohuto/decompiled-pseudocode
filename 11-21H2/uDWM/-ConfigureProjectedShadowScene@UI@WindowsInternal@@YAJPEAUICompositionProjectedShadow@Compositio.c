/*
 * XREFs of ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800CA24C
 * Callers:
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800CAA0C (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::UI::ConfigureProjectedShadowScene(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2)
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+30h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v5 = v4(a1, &GUID_10906888_fb73_5eb4_a225_56b9268fae46, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 19LL;
LABEL_20:
    v8 = (unsigned int)v5;
    goto LABEL_21;
  }
  if ( !a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 24LL;
      goto LABEL_20;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 25LL;
      goto LABEL_20;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 26LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[14])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 27LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[12])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 28LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[7])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 29LL;
      goto LABEL_20;
    }
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 33LL;
      goto LABEL_20;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 34LL;
      goto LABEL_20;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 35LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[14])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 36LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[12])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 37LL;
      goto LABEL_20;
    }
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[7])(a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 38LL;
      goto LABEL_20;
    }
LABEL_32:
    v6 = 0;
    goto LABEL_33;
  }
  v6 = -2147024809;
  v8 = 2147942487LL;
  v7 = 42LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\restricted\\shell\\inc\\ProjectedShadowSceneHelpers.h",
    (const char *)v8);
LABEL_33:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return v6;
}
