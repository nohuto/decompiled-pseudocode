/*
 * XREFs of ?HampHostIdStoreRetrieveDynamicIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180077390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreRetrieveDynamicIdCallback(struct _HAM_HOSTID_ENTRY *a1, _QWORD *a2)
{
  if ( *((_QWORD *)a1 + 11) != *a2 )
    return 1LL;
  if ( (int)PsmGetDynamicIdFromKey((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 48, a2[1]) < 0 )
    *(_OWORD *)a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 1;
  return 0LL;
}
