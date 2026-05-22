/*
 * XREFs of ?RemoveAt@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAPEAULampArrayClientListEntry@LampArrayRawInputProvider@@PEAU23@@Z @ 0x1800F86FC
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::RemoveAt(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v3 = (_QWORD *)a2[1], (_QWORD *)*v3 != a2) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  result = a2;
  --*(_QWORD *)(a1 + 16);
  return result;
}
