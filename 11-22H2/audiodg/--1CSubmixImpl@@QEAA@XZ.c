/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x140002404
 * Callers:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x140004518 (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140050334 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400503A0 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400690CC (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400023BC (-FreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x140002834 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002864 (-RemoveAll@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL.c)
 *     ?RemoveAll@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXXZ @ 0x1400028A0 (-RemoveAll@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400028E4 (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002378C (-FreeNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x1400251F0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140069A4C (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140069E2C (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 */

void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  char *v2; // r14
  struct ISubmix *v3; // rdx
  __int64 i; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD **v13; // rbx
  _QWORD *v14; // rdx
  void *v15; // rsi
  _QWORD *v16; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (char *)this + 304;
  v3 = (struct ISubmix *)*((_QWORD *)this + 38);
  if ( v3 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v3);
  if ( *((_QWORD *)this + 11) )
  {
    v8 = (__int64 **)((char *)this + 72);
    while ( 1 )
    {
      v9 = *v8;
      if ( !*v8 )
        break;
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v18,
        v9[2]);
      v10 = *v9;
      *v8 = (__int64 *)*v9;
      if ( v10 )
        *(_QWORD *)(v10 + 8) = 0LL;
      else
        *((_QWORD *)this + 10) = 0LL;
      ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::FreeNode(
        (__int64)this + 72,
        v9);
      v11 = v18;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 120LL))(v18) )
      {
        lpCriticalSection = 0LL;
        if ( GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection) >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
          CAudioHistoryBufferManager::Remove(lpCriticalSection, v12);
        }
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
      if ( !*((_QWORD *)this + 11) )
        goto LABEL_4;
    }
LABEL_33:
    ATL::AtlThrowImpl(-2147467259);
  }
LABEL_4:
  if ( *((_QWORD *)this + 17) )
  {
    v13 = (_QWORD **)((char *)this + 120);
    do
    {
      v14 = *v13;
      if ( !*v13 )
        goto LABEL_33;
      v15 = (void *)v14[2];
      v16 = (_QWORD *)*v14;
      *v13 = (_QWORD *)*v14;
      if ( v16 )
        v16[1] = 0LL;
      else
        *((_QWORD *)this + 16) = 0LL;
      ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::FreeNode((char *)this + 120);
      operator delete(v15);
    }
    while ( *((_QWORD *)this + 17) );
  }
  EnterCriticalSection(&g_CritSecSubmixList);
  for ( i = SubmixList; i; i = *(_QWORD *)i )
  {
    if ( *(CSubmixImpl **)(i + 16) == this )
    {
      ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt();
      break;
    }
  }
  LeaveCriticalSection(&g_CritSecSubmixList);
  PublishDeviceGraphWnfState();
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v2);
  CFormatConverterPipe::~CFormatConverterPipe((CSubmixImpl *)((char *)this + 272));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((char *)this + 264);
  v5 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  ATL::CAutoPtr<CPipeInstance>::Free((char *)this + 24);
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
    CoTaskMemFree(v7);
}
