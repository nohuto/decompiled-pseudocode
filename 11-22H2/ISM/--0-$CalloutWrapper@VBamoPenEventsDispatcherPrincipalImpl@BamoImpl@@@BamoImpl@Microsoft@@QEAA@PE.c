/*
 * XREFs of ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180016000
 * Callers:
 *     ?OnDisconnectedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ @ 0x180015F80 (-OnDisconnectedThunk@BamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherPrincipalImpl@1@@Z @ 0x18004FDDC (--0-$CalloutWrapper@VBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_18004FDDC.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherPrincipalImpl>(
        __int64 a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  const char *v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*(_DWORD *)(a2 + 188) )
  {
    *(_QWORD *)a1 = a2;
    if ( *(_DWORD *)(a2 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v7);
    *(_DWORD *)(a2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 32LL))(*(_QWORD *)(a2 + 16));
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 - 16) + 40LL))(v8 - 16);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v9,
          v11);
    }
  }
  return a1;
}
