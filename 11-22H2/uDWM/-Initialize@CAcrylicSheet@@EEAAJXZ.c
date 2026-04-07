/*
 * XREFs of ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A35E0
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2F60 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAcrylicSheet::Initialize(struct tagPOINT *this)
{
  int v2; // edi
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = CVisual::Initialize((CVisual *)this);
  if ( v2 < 0 )
  {
    v3 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CAcrylicSheet::EnsureBackgroundEffects((CAcrylicSheet *)this);
  if ( v2 < 0 )
  {
    v3 = 58LL;
    goto LABEL_3;
  }
  v6 = this[36];
  CVisual::SetOffset(this, &v6);
  return 0LL;
}
