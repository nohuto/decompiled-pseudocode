/*
 * XREFs of ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x1800CADB0
 * Callers:
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CACBC (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct CVisual *a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 16);
  v12[1] = 0LL;
  v12[0] = a2;
  v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v12);
  if ( v4 )
  {
    v14 = 0LL;
    v5 = *((_QWORD *)this + 12);
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    v7 = v6(v5, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 237LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      return v8;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, v4[1]);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 238LL;
      goto LABEL_6;
    }
    v11 = v4[1];
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    RtlDeleteElementGenericTable(v3, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  return 0LL;
}
