/*
 * XREFs of ?GetTaskbarSearchBoxWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@@Z @ 0x1803A067C
 * Callers:
 *     ?CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x180147DE0 (-CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskbarSearchAppPositioner::GetTaskbarSearchBoxWidth(
        TaskbarSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  __int64 v4; // rdx

  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1)) != 0
     ? 322
     : 320;
  if ( a2->right - a2->left >= 1196 )
    LODWORD(v4) = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 32LL))(
                    *((_QWORD *)this + 1),
                    v4) != 0
                ? 342
                : 344;
  return (unsigned int)v4;
}
