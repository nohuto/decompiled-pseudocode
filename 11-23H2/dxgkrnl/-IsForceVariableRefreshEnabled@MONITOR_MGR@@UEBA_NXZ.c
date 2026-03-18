/*
 * XREFs of ?IsForceVariableRefreshEnabled@MONITOR_MGR@@UEBA_NXZ @ 0x1C0229220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MONITOR_MGR::IsForceVariableRefreshEnabled(MONITOR_MGR *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 2888LL) != 0;
}
