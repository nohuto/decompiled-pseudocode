/*
 * XREFs of ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800CF0C4
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CEE78 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800CE8AC (-ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Compositio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // rbx
  __int64 *v7; // r14
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[1])(v6);
  v7 = (__int64 *)(a1 + 88);
  v8 = **v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
  v9 = v8(v6, &GUID_a2e6330e_8a60_5a38_bb85_b44ea901677c, a1 + 88);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *v7;
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v7 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 96));
    v9 = v13(v12, a1 + 96);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 80LL))(*(_QWORD *)(a1 + 96), a2);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v9 = WindowsInternal::UI::ConfigureProjectedShadowScene(
               *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 96),
               a3);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v10 = 0;
          goto LABEL_13;
        }
        v11 = 220LL;
      }
      else
      {
        v11 = 219LL;
      }
    }
    else
    {
      v11 = 218LL;
    }
  }
  else
  {
    v11 = 215LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v9);
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v10;
}
