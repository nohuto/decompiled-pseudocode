/*
 * XREFs of ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x1800F4EF8
 * Callers:
 *     ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x1800F4E90 (-BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x1800F55F8 (-CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetMatrix4x4Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v7 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetMatrix4x4ValueOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2,
               a3);
        v8 = v7;
        if ( v7 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x225,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D0,
      (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
