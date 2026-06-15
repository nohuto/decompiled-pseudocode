/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14005BC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v15 = v6;
  if ( *((_DWORD *)this + 64) )
  {
    if ( !a2 )
    {
      v8 = 326LL;
LABEL_7:
      v7 = -2147467261;
      goto LABEL_8;
    }
    if ( !a3 )
    {
      v8 = 327LL;
      goto LABEL_7;
    }
    v9 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                    + 32LL);
    v14 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v9)(
            *v9,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v14);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v10);
LABEL_18:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
      goto LABEL_19;
    }
    v18 = 0LL;
    v11 = (**v14)(v14, &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f, &v18);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v17 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v17);
      v7 = v11;
      if ( v11 >= 0 )
      {
        *a2 = v17;
        *a3 = *((float *)this + 34);
        v7 = 0;
        goto LABEL_17;
      }
      v12 = 345LL;
    }
    else
    {
      v12 = 342LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v11);
LABEL_17:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
    goto LABEL_18;
  }
  v7 = -2005139437;
  v8 = 322LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v7);
LABEL_19:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v7;
}
