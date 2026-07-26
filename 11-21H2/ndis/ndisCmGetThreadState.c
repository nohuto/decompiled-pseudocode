/*
 * XREFs of ndisCmGetThreadState @ 0x1C002B9FC
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0008E80 (ndisCmSetThreadState.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002B984 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00089C0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

_DWORD *__fastcall ndisCmGetThreadState(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // rax
  unsigned int ThreadSessionId; // eax

  result = PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( result )
  {
    *a2 = *result;
    *a3 = result[1];
    result = (_DWORD *)ObfDereferenceObject(result);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( !*a2 )
  {
    ThreadSessionId = ndisCmGetThreadSessionId(Thread);
    result = (_DWORD *)NdisGetSessionCompartmentId(ThreadSessionId);
    *a2 = (_DWORD)result;
  }
  return result;
}
