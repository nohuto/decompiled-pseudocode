/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x140008180
 * Callers:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400042B4 (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x14000438C (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140050ABC (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x140062FC4 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400080F4 (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x140008150 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400083C4 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x14001DF70 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140024D28 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140053D58 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x140054250 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140063838 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140063C0C (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 */

void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  __int64 *v2; // r14
  struct ISubmix *v3; // rdx
  __int64 v4; // rcx
  __int64 i; // rdx
  void *v6; // rcx
  void *v7; // rcx
  unsigned int v8; // edx
  unsigned __int64 *v9; // rdi
  _QWORD **v10; // rdi
  _QWORD *v11; // rdx
  void *v12; // rsi
  _QWORD *v13; // rax
  CAudioHistoryBufferManager *v14; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (__int64 *)((char *)this + 304);
  v3 = (struct ISubmix *)*((_QWORD *)this + 38);
  if ( v3 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v3);
  while ( *((_QWORD *)this + 11) )
  {
    v9 = (unsigned __int64 *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 72);
    if ( v9[12] )
    {
      v14 = 0LL;
      if ( GetHistoryBufferManager(&v14) >= 0 )
        CAudioHistoryBufferManager::Remove(v14, v9[12]);
    }
    CStreamInstance::`scalar deleting destructor'((CStreamInstance *)v9, v8);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v10 = (_QWORD **)((char *)this + 120);
    do
    {
      v11 = *v10;
      if ( !*v10 )
        ATL::AtlThrowImpl(-2147467259);
      v12 = (void *)v11[2];
      v13 = (_QWORD *)*v11;
      *v10 = (_QWORD *)*v11;
      if ( v13 )
        v13[1] = 0LL;
      else
        *((_QWORD *)this + 16) = 0LL;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 120);
      operator delete(v12);
    }
    while ( *((_QWORD *)this + 17) );
  }
  EnterCriticalSection(&g_CritSecSubmixList);
  v14 = (CAudioHistoryBufferManager *)&g_CritSecSubmixList;
  for ( i = SubmixList; i; i = *(_QWORD *)i )
  {
    if ( *(CSubmixImpl **)(i + 16) == this )
    {
      ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt(v4, (__int64 *)i);
      break;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  PublishDeviceGraphWnfState();
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v2);
  CFormatConverterPipe::~CFormatConverterPipe((CSubmixImpl *)((char *)this + 272));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 33);
  v6 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v6 )
    CoTaskMemFree(v6);
  v7 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v7 )
    CoTaskMemFree(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  ATL::CAutoPtr<CPipeInstance>::Free((char *)this + 24);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((char *)this + 8);
}
