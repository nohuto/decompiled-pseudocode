/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800DADB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800D6AC8 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(unsigned __int16 **this, char *a2, const struct _GUID *a3)
{
  const struct _GUID *v3; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // ebx
  void **v7; // r12
  __int64 v8; // rax
  int *v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-58h] BYREF
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall **v13[9])(_QWORD, unsigned __int64 *); // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)this;
  v6 = 0;
  v7 = (void **)(this + 32);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 32,
                       (__int64)a2) )
  {
    EnterCriticalSection(v5 + 7);
    v11 = v5 + 7;
    v6 = 0;
    if ( a2 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&a2[2 * v8] );
    }
    else
    {
      LODWORD(v8) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v8);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v10 = (int *)v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v5 = (struct _RTL_CRITICAL_SECTION *)this;
      v3 = a3;
      v6 = *v10;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 305, v6);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      v13[0] = (void (__fastcall **)(_QWORD, unsigned __int64 *))&CAudioSessionIconPathChanged::`vftable';
      v13[1] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v5;
      v13[2] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v5[6].OwningThread;
      v13[3] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 432),
        v13);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
    }
  }
  return (unsigned int)v6;
}
