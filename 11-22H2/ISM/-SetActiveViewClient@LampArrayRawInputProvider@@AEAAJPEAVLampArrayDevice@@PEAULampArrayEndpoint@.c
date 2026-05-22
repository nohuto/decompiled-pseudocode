/*
 * XREFs of ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800F875C
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180011020 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800F8410 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ?SetActiveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800FB96C (-SetActiveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::SetActiveViewClient(
        HANDLE *this,
        struct LampArrayDevice *a2,
        struct LampArrayEndpoint *a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !LampArrayDevice::SetActiveViewClient(a2, a3) || SetEvent(this[40]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x284,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v4);
}
