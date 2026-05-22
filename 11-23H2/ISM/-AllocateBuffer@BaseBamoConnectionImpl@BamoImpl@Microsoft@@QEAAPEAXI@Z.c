/*
 * XREFs of ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x18009E7BC
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x18009F0C0 (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180132B5C (-StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPri.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180151E3C (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x1801539E8 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

LPVOID __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  LPVOID result; // rax
  SIZE_T v3; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v6; // rax
  void *v7; // rdx
  const char *v8; // r9
  wil::details *v9; // rcx
  HANDLE v10; // rax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = 0LL;
  v3 = a2;
  if ( a2 )
  {
    if ( a2 > 0x100 )
      goto LABEL_10;
    result = (LPVOID)*((_QWORD *)this + 16);
    if ( !result )
    {
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, 0x100uLL);
      v9 = (wil::details *)*((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = v6;
      if ( v9 )
        wil::details::FreeProcessHeap(v9, v7);
      result = (LPVOID)*((_QWORD *)this + 16);
      if ( !result )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x555,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v8);
    }
    if ( *((_BYTE *)this + 136) )
    {
LABEL_10:
      v10 = GetProcessHeap();
      result = HeapAlloc(v10, 0, v3);
      if ( !result )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x562,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v11);
    }
    else
    {
      *((_BYTE *)this + 136) = 1;
    }
  }
  return result;
}
