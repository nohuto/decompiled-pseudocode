/*
 * XREFs of ?GetTaskbarSearchBoxWidth@MiniSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z @ 0x1803AED1C
 * Callers:
 *     ?CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x1803AE13C (-CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@@UM.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MiniSearchAppPositioner::GetTaskbarSearchBoxWidth(
        MiniSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  __int64 v4; // rdx

  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1)) != 0
     ? 322
     : 320;
  if ( a2->right - a2->left >= 1196 )
    LODWORD(v4) = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 24LL))(
                    *((_QWORD *)this + 1),
                    v4) != 0
                ? 342
                : 344;
  return (unsigned int)v4;
}
