/*
 * XREFs of ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x180087694
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x180087EA8 (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x18013776C (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

LPVOID __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  LPVOID result; // rax
  SIZE_T v3; // rdi
  HANDLE ProcessHeap; // rax
  void *v6; // rdx
  const char *v7; // r9
  wil::details *v8; // rcx
  HANDLE v9; // rax
  const char *v10; // r9
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
      result = HeapAlloc(ProcessHeap, 0, 0x100uLL);
      v8 = (wil::details *)*((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = result;
      if ( v8 )
      {
        wil::details::FreeProcessHeap(v8, v6);
        result = (LPVOID)*((_QWORD *)this + 16);
      }
      if ( !result )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x549,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v7);
    }
    if ( *((_BYTE *)this + 136) )
    {
LABEL_10:
      v9 = GetProcessHeap();
      result = HeapAlloc(v9, 0, v3);
      if ( !result )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x556,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v10);
    }
    else
    {
      *((_BYTE *)this + 136) = 1;
    }
  }
  return result;
}
