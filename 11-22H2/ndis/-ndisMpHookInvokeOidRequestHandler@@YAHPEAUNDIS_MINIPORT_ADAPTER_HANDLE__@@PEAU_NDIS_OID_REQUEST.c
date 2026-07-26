/*
 * XREFs of ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DE7C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMpHookInvokeOidRequestHandler(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2)
{
  __int64 result; // rax

  *((_QWORD *)a1 + 278) = a2;
  result = ndisMRawInvokeOidRequest((struct _NDIS_MINIPORT_BLOCK *)a1, a2);
  if ( (_DWORD)result != 259 )
    *((_QWORD *)a1 + 278) = 0LL;
  return result;
}
