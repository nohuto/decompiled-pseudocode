/*
 * XREFs of ?_GetTotalRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18058D724
 * Callers:
 *     ?GetViewportPercent@CScrollViewer@@UEAANXZ @ 0x18058C780 (-GetViewportPercent@CScrollViewer@@UEAANXZ.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x18058D678 (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScrollViewer::_GetTotalRect(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // edi
  __int128 v5; // xmm0
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 248) + 40LL))(
                    *(_QWORD *)(a1 + 248),
                    v7);
  result = a2;
  *(_OWORD *)a2 = v5;
  *(_DWORD *)a2 += v2;
  *(_DWORD *)(a2 + 8) += v2;
  *(_DWORD *)(a2 + 12) += v4;
  *(_DWORD *)(a2 + 4) += v4;
  return result;
}
