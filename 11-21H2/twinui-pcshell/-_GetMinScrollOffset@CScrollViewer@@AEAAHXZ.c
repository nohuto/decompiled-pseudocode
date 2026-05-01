/*
 * XREFs of ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804D5C44
 * Callers:
 *     ?GetScrollPercent@CScrollViewer@@UEAANXZ @ 0x1804D4CB0 (-GetScrollPercent@CScrollViewer@@UEAANXZ.c)
 *     ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x1804D5610 (-SetScrollPercent@CScrollViewer@@UEAAXN@Z.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D5878 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetTotalRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D5CF0 (-_GetTotalRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D5D74 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

__int64 __fastcall CScrollViewer::_GetMinScrollOffset(CScrollViewer *this)
{
  _DWORD *VisibleRect; // rax
  int v3; // ebx
  _DWORD *TotalRect; // rax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 96LL))((char *)this + 208) )
  {
    VisibleRect = (_DWORD *)CScrollViewer::_GetVisibleRect(this);
    v3 = VisibleRect[2] - *VisibleRect;
    TotalRect = (_DWORD *)CScrollViewer::_GetTotalRect(this, v10);
    v5 = *TotalRect - TotalRect[2];
  }
  else
  {
    v6 = CScrollViewer::_GetVisibleRect(this);
    v3 = *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 4);
    v7 = CScrollViewer::_GetTotalRect(this, v9);
    v5 = *(_DWORD *)(v7 + 4) - *(_DWORD *)(v7 + 12);
  }
  return (unsigned int)(v3 + v5);
}
