/*
 * XREFs of ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801DA630
 * Callers:
 *     <none>
 * Callees:
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18004E2F0 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z @ 0x180077650 (-GetTargetProcessId@GameInputProcessor@@CAKPEAVInputContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800DBC98 (--B-$com_ptr_t@UIGameInputServer@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1801DA570 (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall GameInputProcessor::OnFocusRequest(
        GameInputProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(__int64, _QWORD); // rbx
  unsigned int TargetProcessId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v8 = GameInputProcessor::LazyInitialize(this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gameinputprocessor.cpp",
        (const char *)(unsigned int)v8);
    if ( (*((_BYTE *)a2 + 4) & 0x40) != 0 )
    {
      *(_DWORD *)a4 = 2;
    }
    else if ( (*((_BYTE *)a2 + 4) & 2) != 0
           && wil::com_ptr_t<IGameInputServer,wil::err_exception_policy>::operator bool((_QWORD *)this + 4)
           && (v10 = *v9,
               v11 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v9 + 72LL),
               TargetProcessId = GameInputProcessor::GetTargetProcessId(a3),
               v11(v10, TargetProcessId))
           || *((_DWORD *)a2 + 1) == 4 && GameInputProcessor::IsLegacyPnpDevice(a2) )
    {
      *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 0;
    }
  }
  return 0LL;
}
