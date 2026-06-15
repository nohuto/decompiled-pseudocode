/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800E2AF0
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
__int64 __fastcall CAudioSession::SetDisplayName(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        char a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r14d
  _BYTE *v8; // rdi
  __int64 *v9; // r12
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  __int64 v11; // rax
  int *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-78h]
  __int64 *v15; // [rsp+28h] [rbp-70h]
  ATL::CAtlException *v16; // [rsp+38h] [rbp-60h] BYREF
  void (__fastcall **v17[11])(_QWORD, void **); // [rsp+40h] [rbp-58h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)this;
  v7 = 0;
  v8 = (char *)this + 229;
  if ( a4 )
    *v8 = 1;
  v9 = (__int64 *)(this + 31);
  v15 = (__int64 *)(this + 31);
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 31,
                       (__int64)a2)
    && (a4 || !*v8) )
  {
    v10 = v6 + 7;
    v14 = v6 + 7;
    EnterCriticalSection(v6 + 7);
    v7 = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v9, a2, v11);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v13 = (int *)v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v6 = (struct _RTL_CRITICAL_SECTION *)this;
      v7 = *v13;
      v10 = v14;
      v9 = v15;
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    if ( v7 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 181, v7);
    }
    else
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->CriticalSection)(v6);
      v17[0] = (void (__fastcall **)(_QWORD, void **))&CAudioSessionDisplayNameChanged::`vftable';
      v17[1] = (void (__fastcall **)(_QWORD, void **))v6;
      v17[2] = (void (__fastcall **)(_QWORD, void **))*v9;
      v17[3] = (void (__fastcall **)(_QWORD, void **))a3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 432),
        v17);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->ProcessLocksList.Flink)(v6);
    }
  }
  return (unsigned int)v7;
}
