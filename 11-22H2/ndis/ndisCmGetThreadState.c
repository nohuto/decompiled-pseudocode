/*
 * XREFs of ndisCmGetThreadState @ 0x1C002F5D0
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0025720 (ndisCmSetThreadState.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C002F8B0 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0006930 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
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
