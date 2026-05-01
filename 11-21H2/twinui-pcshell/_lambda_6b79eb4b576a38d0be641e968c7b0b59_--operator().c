/*
 * XREFs of _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x180175720
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___::Run @ 0x180175710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x180040088 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1800424D8 (McTemplateU0q_EventWriteTransfer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator()(unsigned int *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      (__int64)a1,
      (__int64)&ImmersiveShell_AppManager_ModeChange_Start,
      a1[2],
      0,
      a1[3],
      0);
  for ( i = 0; i < a1[4]; ++i )
  {
    v7 = 0LL;
    v3 = *(_QWORD *)a1;
    v4 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    if ( v4(v3, i, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v7) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v5, (__int64)&ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, a1[3]);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q_EventWriteTransfer(v6, (__int64)&ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      (__int64)a1,
      (__int64)&ImmersiveShell_AppManager_ModeChange_Stop,
      a1[2],
      0,
      a1[3],
      0);
}
