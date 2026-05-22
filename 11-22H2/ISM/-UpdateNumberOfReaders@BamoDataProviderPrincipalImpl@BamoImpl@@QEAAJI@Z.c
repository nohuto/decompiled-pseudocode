/*
 * XREFs of ?UpdateNumberOfReaders@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180122560
 * Callers:
 *     ?Thunk_UpdateNumberOfReaders_5@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801222D0 (-Thunk_UpdateNumberOfReaders_5@-$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@B.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateNumberOfReaders(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 i; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(v5 + 32) )
      break;
  }
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      v5,
      a3,
      0LL);
    v7 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 40LL))(
           (char *)this - 16,
           i - 16,
           a2);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2783,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v7,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v16,
      v8,
      v9,
      v10);
  }
  *(_DWORD *)(i + 64) = a2;
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0LL);
    v11 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, i - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x278E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v11,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v16,
      v12,
      v13,
      v14);
  }
  return 0LL;
}
