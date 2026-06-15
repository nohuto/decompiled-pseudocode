/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800DAC00
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
__int64 __fastcall CAudioSession::SetDisplayName(
        struct _RTL_CRITICAL_SECTION *this,
        char *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _GUID *v5; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // ebx
  void **p_LockCount; // r13
  __int64 v10; // rax
  int *v12; // rbx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-68h] BYREF
  ATL::CAtlException *v14; // [rsp+28h] [rbp-60h] BYREF
  void (__fastcall **v15[11])(_QWORD, unsigned __int64 *); // [rsp+30h] [rbp-58h] BYREF

  v5 = a3;
  v7 = this;
  v8 = 0;
  if ( a4 )
    BYTE5(this[5].LockSemaphore) = 1;
  p_LockCount = (void **)&this[6].LockCount;
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       (unsigned __int16 **)&this[6].LockCount,
                       (__int64)a2)
    && (a4 || !BYTE5(v7[5].LockSemaphore)) )
  {
    EnterCriticalSection(v7 + 7);
    v13 = v7 + 7;
    v8 = 0;
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&a2[2 * v10] );
    }
    else
    {
      LODWORD(v10) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(p_LockCount, a2, v10);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v12 = (int *)v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v7 = this;
      v5 = a3;
      v8 = *v12;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 181, v8);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v7->DebugInfo->CriticalSection)(v7);
      v15[0] = (void (__fastcall **)(_QWORD, unsigned __int64 *))&CAudioSessionDisplayNameChanged::`vftable';
      v15[1] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v7;
      v15[2] = *(void (__fastcall ***)(_QWORD, unsigned __int64 *))&v7[6].LockCount;
      v15[3] = (void (__fastcall **)(_QWORD, unsigned __int64 *))v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 432),
        v15);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v7->DebugInfo->ProcessLocksList.Flink)(v7);
    }
  }
  return (unsigned int)v8;
}
