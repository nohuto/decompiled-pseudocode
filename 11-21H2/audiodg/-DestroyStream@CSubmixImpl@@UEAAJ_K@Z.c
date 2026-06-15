/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140024860
 * Callers:
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140024840 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140050FC0 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14001E544 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400249B4 (--1CStreamInstance@@QEAA@XZ.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400249FC (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140024D28 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140063838 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140063C0C (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct CStreamInstance *Stream; // rsi
  unsigned int v6; // edi
  __int64 **v7; // r9
  __int64 *i; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v12; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISubmixInternal *v16; // [rsp+40h] [rbp+8h] BYREF
  CAudioHistoryBufferManager *v17; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v18 = v4;
  Stream = CSubmixImpl::FindStream(this, a2);
  v6 = 0;
  if ( Stream )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v17 = (CSubmixImpl *)((char *)this + 32);
    v7 = (__int64 **)((char *)this + 72);
    for ( i = (__int64 *)*((_QWORD *)this + 9); i; i = (__int64 *)*i )
    {
      if ( (struct CStreamInstance *)i[2] == Stream )
        goto LABEL_5;
    }
    i = 0LL;
LABEL_5:
    if ( !i )
      ATL::AtlThrowImpl(-2147467259);
    v9 = (__int64 *)*i;
    if ( i == *v7 )
      *v7 = v9;
    else
      *(_QWORD *)i[1] = v9;
    v10 = i[1];
    if ( i == *((__int64 **)this + 10) )
      *((_QWORD *)this + 10) = v10;
    else
      *(_QWORD *)(*i + 8) = v10;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 72);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v17);
    v11 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
    v12 = 0LL;
    v16 = 0LL;
    if ( v11 )
    {
      (**v11)(v11, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v16);
      v12 = v16;
    }
    if ( *((_BYTE *)Stream + 17) && v12 )
      CStreamInstance::DisconnectFromRightSubmix(Stream, v12);
    if ( *((_QWORD *)Stream + 12) )
    {
      v17 = 0LL;
      if ( GetHistoryBufferManager(&v17) >= 0 )
        CAudioHistoryBufferManager::Remove(v17, *((_QWORD *)Stream + 12));
    }
    CStreamInstance::~CStreamInstance(Stream);
    operator delete(Stream);
    PublishDeviceGraphWnfState();
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
  }
  else
  {
    v6 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      v14);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return v6;
}
