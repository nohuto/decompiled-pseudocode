/*
 * XREFs of ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140061EE4
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140062188 (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall DumpDeviceGraph(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 *Next; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  ATL::CAtlException *v21; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v22; // [rsp+50h] [rbp-38h] BYREF
  int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+90h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = a1[34];
  if ( v8 )
  {
    v9 = DumpDeviceGraph(v8, a2, a3, a4);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v10 = a1[3];
  if ( v10 )
  {
    v9 = DumpDeviceGraph(v10, v6, v5, v4);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v9 = 0;
  try
  {
    v18 = (_QWORD *)a1[9];
  }
  catch ( ATL::CAtlException *v21 )
  {
    v15 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v15;
    v9 = *(_DWORD *)v15;
    if ( v23 >= 0 )
    {
      v4 = a4;
      v5 = a3;
      v6 = a2;
      goto LABEL_8;
    }
    return (unsigned int)v9;
  }
LABEL_8:
  while ( v18 )
  {
    v19 = 0LL;
    Next = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
             v10,
             &v18);
    v12 = *Next;
    v20 = v12;
    v17 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    try
    {
      v9 = 0;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
      v19 = v13;
    }
    catch ( ATL::CAtlException *v22 )
    {
      v16 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v24 = *(_DWORD *)v16;
      v9 = *(_DWORD *)v16;
      if ( v24 < 0 )
      {
LABEL_12:
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
        return (unsigned int)v9;
      }
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v13 = v19;
    }
    if ( v13 )
    {
      v9 = DumpDeviceGraph(v13, v6, v5, v4);
      if ( v9 < 0 )
        goto LABEL_12;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
  }
  return (unsigned int)v9;
}
