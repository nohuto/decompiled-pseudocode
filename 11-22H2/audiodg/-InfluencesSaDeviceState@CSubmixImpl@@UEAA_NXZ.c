/*
 * XREFs of ?InfluencesSaDeviceState@CSubmixImpl@@UEAA_NXZ @ 0x14002D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14000829C (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1400557A0 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

char __fastcall CSubmixImpl::InfluencesSaDeviceState(CSubmixImpl *this)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 *Next; // rax
  bool i; // zf
  _QWORD *v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+30h] BYREF

  wil::critical_section::lock((char *)this + 32, &v9);
  v3 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
               v2,
               &v7);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v8,
        *Next);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))(v8) )
        break;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v8);
      if ( !v7 )
        goto LABEL_4;
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v8);
    CSAutoLock<1>::~CSAutoLock<1>(&v9);
    return 1;
  }
  else
  {
LABEL_4:
    v7 = (_QWORD *)*((_QWORD *)this + 15);
    for ( i = v7 == 0LL; !i; i = v7 == 0LL )
    {
      v2 = *(_QWORD *)*ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
                         v2,
                         &v7);
      if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
      {
        v3 = 1;
        break;
      }
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v9);
    return v3;
  }
}
