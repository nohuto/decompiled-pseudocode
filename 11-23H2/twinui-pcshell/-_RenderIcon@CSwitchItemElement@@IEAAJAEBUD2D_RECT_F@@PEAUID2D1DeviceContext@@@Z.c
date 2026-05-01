/*
 * XREFs of ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802E35DE
 * Callers:
 *     _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x180572A5C (_lambda_3f3d9ba04ec2c8622cba6a99ff36500b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElement::_RenderIcon(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3)
{
  __int64 v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 32LL))(*((_QWORD *)this + 73));
  v11 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v7 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 40LL))(
           a3,
           v5,
           0LL,
           &v10);
    v6 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(struct ID2D1DeviceContext *, __int64, const struct D2D_RECT_F *))(*(_QWORD *)a3 + 208LL))(
        a3,
        v10,
        a2);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  else
  {
    v6 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v11);
  return v6;
}
