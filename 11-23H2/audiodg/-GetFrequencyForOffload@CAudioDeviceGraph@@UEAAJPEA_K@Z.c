/*
 * XREFs of ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14005F990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetFrequencyForOffload(CAudioDeviceGraph *this, unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // edi
  _QWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
LABEL_3:
    if ( v4 )
      LeaveCriticalSection(v4);
    return (unsigned int)v5;
  }
  v7 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v11 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v7)(*v7, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8);
LABEL_8:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
    goto LABEL_3;
  }
  v12 = 0LL;
  v5 = (**v11)(v11, &GUID_cd63314f_3fba_4a1b_812c_ef96358728e7, &v12);
  if ( v5 < 0 )
  {
    v9 = 402LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
    goto LABEL_8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v12 + 24LL))(v12, a2);
  if ( v5 < 0 )
  {
    v9 = 406LL;
    goto LABEL_11;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v12);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
