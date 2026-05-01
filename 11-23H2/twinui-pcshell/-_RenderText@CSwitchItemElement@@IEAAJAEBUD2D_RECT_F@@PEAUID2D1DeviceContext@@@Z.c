/*
 * XREFs of ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802E3708
 * Callers:
 *     _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x180572A5C (_lambda_3f3d9ba04ec2c8622cba6a99ff36500b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180572D14 (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElement::_RenderText(
        CSwitchItemElement *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1DeviceContext *a3,
        float a4)
{
  unsigned int Color; // eax
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v14[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+60h] [rbp-58h] BYREF
  __int128 v16; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v14[0] = 0LL;
  Color = CImmersiveColor::GetColor(176LL);
  D2DUtil::ConvertColor((D2DUtil *)&v15, (struct _D3DCOLORVALUE *)Color, v8, a4);
  v16 = v15;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  v9 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, __int128 *, _QWORD, __int64 *))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v16,
         0LL,
         v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 73) + 24LL))(*((_QWORD *)this + 73));
    v12 = v11[1];
    if ( v12 == -1 )
    {
      if ( *v11 )
      {
        do
          ++v12;
        while ( *(_WORD *)(*v11 + 2 * v12) );
      }
      else
      {
        LODWORD(v12) = 0;
      }
    }
    (*(void (__fastcall **)(struct ID2D1DeviceContext *, _QWORD, _QWORD, _QWORD, const struct D2D_RECT_F *, __int64, _DWORD, _DWORD))(*(_QWORD *)a3 + 216LL))(
      a3,
      *v11,
      (unsigned int)v12,
      *((_QWORD *)this + 72),
      a2,
      v14[0],
      0,
      0);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  return v10;
}
