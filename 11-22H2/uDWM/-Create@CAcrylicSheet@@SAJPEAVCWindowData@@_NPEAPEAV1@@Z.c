/*
 * XREFs of ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2F60
 * Callers:
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1801042B4 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18010A22C (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x1800A280C (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A3520 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A35E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A4254 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x1800E75CC (-GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA-AUtagRECT@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::Create(CTopLevelWindow3D **a1, __int64 a2, struct CAcrylicSheet **a3)
{
  struct tagRECT *SnapThumbnailLocation; // rax
  CBaseObject *v5; // rax
  const char *v6; // r9
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  struct tagRECT v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CBaseObject *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( (*((_BYTE *)a1 + 678) & 1) != 0 )
    SnapThumbnailLocation = CTopLevelWindow3D::GetSnapThumbnailLocation(a1[56], &v12);
  else
    SnapThumbnailLocation = CAcrylicSheet::GetMarginAdjustedWindowRect(&v13, (struct CWindowData *)a1);
  v11 = *SnapThumbnailLocation;
  v5 = (CBaseObject *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        576LL);
  v15 = v5;
  if ( v5 )
    v7 = CAcrylicSheet::CAcrylicSheet(v5, &v11);
  else
    v7 = 0LL;
  v15 = v7;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      v6);
  v8 = CAcrylicSheet::Initialize(v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
    return v9;
  }
}
