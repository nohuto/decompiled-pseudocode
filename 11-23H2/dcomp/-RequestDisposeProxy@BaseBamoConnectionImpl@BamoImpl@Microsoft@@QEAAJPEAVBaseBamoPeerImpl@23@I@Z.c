/*
 * XREFs of ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x18016DF98
 * Callers:
 *     ?Thunk_RequestDisposeProxy_34@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016EBB0 (-Thunk_RequestDisposeProxy_34@-$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18016E1E8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18016EC24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18016EEA4 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::RequestDisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  if ( !Principal )
  {
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v6, v7);
    if ( v8 < 0 )
    {
      v9 = 1644LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  v10 = *((_QWORD *)Principal + 4);
  if ( !v10 )
  {
LABEL_8:
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(this, v10, v7);
    if ( v8 < 0 )
    {
      v9 = 1653LL;
      goto LABEL_10;
    }
    return (unsigned int)v8;
  }
  v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)a2 + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 36LL) != (_DWORD)v11 )
  {
    v10 = *(_QWORD *)(v10 + 40);
    if ( !v10 )
      goto LABEL_8;
  }
  if ( !*(_DWORD *)(v10 + 16) && !*(_BYTE *)(v10 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v11, (struct Microsoft::BamoImpl::BamoStubImpl *)v10, 0);
  return 0LL;
}
