/*
 * XREFs of ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18009A014
 * Callers:
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800FF584 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x1801034A8 (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800997FC (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18009A5FC (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18009A6C0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009BBE4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAcrylicSheet::Create(struct CWindowData *a1, __int64 a2, struct CAcrylicSheet **a3)
{
  CAcrylicSheet *v5; // rbx
  const char *v6; // r9
  CAcrylicSheet *v7; // rdi
  CBaseObject *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (CAcrylicSheet *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          608LL);
  *(_QWORD *)&v12.left = v5;
  if ( v5 )
  {
    v12 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v13, a1);
    v7 = CAcrylicSheet::CAcrylicSheet(v5, &v12);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      v6);
  v9 = CAcrylicSheet::Initialize(v7);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = 0LL;
    *a3 = v7;
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v8 )
    CBaseObject::Release(v8);
  return v10;
}
