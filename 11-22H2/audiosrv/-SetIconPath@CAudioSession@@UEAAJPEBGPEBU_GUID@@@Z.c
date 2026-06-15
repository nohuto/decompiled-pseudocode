/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800E2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800502CC (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        const struct _GUID *a3)
{
  const struct _GUID *v3; // r13
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v6; // esi
  __int64 *v7; // r12
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rax
  int *v11; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-78h]
  __int64 *v13; // [rsp+28h] [rbp-70h]
  ATL::CAtlException *v14; // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall **v15[12])(_QWORD, void **); // [rsp+38h] [rbp-60h] BYREF

  v3 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)this;
  v6 = 0;
  v7 = (__int64 *)(this + 32);
  v13 = (__int64 *)(this + 32);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 32,
                       (__int64)a2) )
  {
    v8 = v5 + 7;
    v12 = v5 + 7;
    EnterCriticalSection(v5 + 7);
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a2, v9);
    }
    catch ( ATL::CAtlException *v14 )
    {
      v11 = (int *)v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v5 = (struct _RTL_CRITICAL_SECTION *)this;
      v3 = a3;
      v6 = *v11;
      v8 = v12;
      v7 = v13;
    }
    if ( v8 )
      LeaveCriticalSection(v8);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 305, v6);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      v15[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionIconPathChanged::`vftable';
      v15[1] = (void (__fastcall **)(_QWORD, void **))v5;
      v15[2] = (void (__fastcall **)(_QWORD, void **))*v7;
      v15[3] = (void (__fastcall **)(_QWORD, void **))v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 432),
        v15);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
    }
  }
  return (unsigned int)v6;
}
