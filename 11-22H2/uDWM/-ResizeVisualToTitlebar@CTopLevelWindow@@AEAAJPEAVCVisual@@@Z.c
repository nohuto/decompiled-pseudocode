/*
 * XREFs of ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180052010
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180023EB0 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800E5C58 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ResizeVisualToTitlebar(CTopLevelWindow *this, struct CVisual *a2)
{
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]
  int v14; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 34) )
  {
    *((_DWORD *)a2 + 34) = 0;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 2LL);
  }
  if ( *((_DWORD *)a2 + 36) )
  {
    *((_DWORD *)a2 + 36) = 0;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 2LL);
  }
  if ( *((_DWORD *)a2 + 35) )
  {
    *((_DWORD *)a2 + 35) = 0;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 2LL);
  }
  v4 = *((_DWORD *)this + 159);
  if ( (*((_BYTE *)this + 624) & 2) == 0 && *((_DWORD *)this + 163) > v4 )
  {
    CTopLevelWindow::GetButtonHeightAndOffset(this, &v14, &v12);
    v4 = v12 + v14;
  }
  v5 = *((_DWORD *)this + 163);
  if ( v4 <= v5 )
  {
    v5 = 0;
    if ( v4 >= 0 )
      v5 = v4;
  }
  v12 = *((_DWORD *)a2 + 32);
  v6 = *(_QWORD *)a2;
  v13 = v5;
  v7 = (*(__int64 (__fastcall **)(struct CVisual *, int *))(v6 + 104))(a2, &v12);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A26,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return v8;
}
