/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14001962C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct CPipeInstance *PipeInstance; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  const struct tWAVEFORMATEX *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v7 = *((_DWORD *)this + 64) == 0;
  v18 = v3;
  if ( !v7 )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( !PipeInstance )
    {
      v9 = 925LL;
LABEL_7:
      v8 = -2005139430;
      goto LABEL_8;
    }
    v11 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)PipeInstance + 2);
    if ( !v11 )
    {
      v9 = 929LL;
      goto LABEL_7;
    }
    v17 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 8LL))(v11, &v17);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v14 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
      v12 = CloneWaveFormat(v14, a3);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v8 = 0;
        goto LABEL_15;
      }
      v13 = 939LL;
    }
    else
    {
      v13 = 933LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v12);
LABEL_15:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
    goto LABEL_16;
  }
  v8 = -2005139437;
  v9 = 921LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v8);
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  return v8;
}
