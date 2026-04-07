/*
 * XREFs of ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x1800CAEEC
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CB06C (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, char *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *((_QWORD *)this + 12);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 120LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6 = v5(v4, &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (_QWORD *)((char *)this + 104);
    if ( *((_QWORD *)this + 13) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 64LL))(v14);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 253LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    }
    if ( a2 )
    {
      v10 = *((_QWORD *)this + 11);
      v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 64LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
      v6 = v11(v10, (char *)this + 104);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 259LL;
        goto LABEL_14;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::IVisual *))(*(_QWORD *)*v9 + 56LL))(
             *v9,
             a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 260LL;
        goto LABEL_14;
      }
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, *v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 261LL;
        goto LABEL_14;
      }
    }
    v7 = 0;
    goto LABEL_16;
  }
  v8 = 249LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v6);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v7;
}
