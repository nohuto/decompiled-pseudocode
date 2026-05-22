/*
 * XREFs of ?UpdateNumberOfReaders@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800F8860
 * Callers:
 *     ?Thunk_UpdateNumberOfReaders_5@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F85B0 (-Thunk_UpdateNumberOfReaders_5@-$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@B.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateNumberOfReaders(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 i; // rbx
  char v7; // al
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) == *(_DWORD *)(v5 + 32) )
      break;
  }
  v7 = *(_BYTE *)(i + 33);
  if ( v7 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v17,
      v5,
      a3,
      0);
    v8 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 40LL))(
           (char *)this - 16,
           i - 16,
           a2);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F7E,
        (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v17,
      v9,
      v10,
      v11);
    v7 = *(_BYTE *)(i + 33);
  }
  *(_DWORD *)(i + 64) = a2;
  if ( v7 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v17,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0);
    v12 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, i - 16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F89,
        (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v12,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v17,
      v13,
      v14,
      v15);
  }
  return 0LL;
}
