/*
 * XREFs of ?SstpHandleThermalLimitingStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180048D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandleThermalLimitingStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  result = 0LL;
  a4[5] = a4[5] & 0xFFFFFFEF | (*a5 != 0 ? 0x10 : 0);
  return result;
}
