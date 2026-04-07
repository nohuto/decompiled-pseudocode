/*
 * XREFs of ?SetBorderRect@CSystemBackdropVisual@@QEAAJAEBUtagRECT@@@Z @ 0x1800E18D0
 * Callers:
 *     ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14 (-UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800E0E9C (--8@YA_NAEBUtagRECT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemBackdropVisual::SetBorderRect(CSystemBackdropVisual *this, struct tagRECT *a2)
{
  struct tagRECT *v3; // rsi
  __int64 v4; // r8
  int v6; // eax
  int v7; // eax
  float left; // xmm6_4
  float top; // xmm7_4
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  v3 = (struct tagRECT *)((char *)this + 288);
  if ( operator==(a2, (_DWORD *)this + 72) )
    return 0LL;
  v6 = 0;
  if ( a2->right - a2->left >= 0 )
    v6 = a2->right - a2->left;
  *(float *)&v17 = (float)v6;
  v7 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v7 = a2->bottom - a2->top;
  *((float *)&v17 + 1) = (float)v7;
  left = (float)a2->left;
  top = (float)a2->top;
  v16 = 0LL;
  v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 264),
          (__int64 *)&v16);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v16 + 288))(v16, v17);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v13 = *v16;
      *(float *)v14 = left;
      *(float *)&v14[1] = top;
      v14[2] = 0;
      v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(v13 + 168))(v16, v14);
      v11 = v10;
      if ( v10 >= 0 )
      {
        *v3 = *a2;
        v11 = 0;
        goto LABEL_15;
      }
      v12 = 141LL;
    }
    else
    {
      v12 = 140LL;
    }
  }
  else
  {
    v12 = 138LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v10);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v11;
}
