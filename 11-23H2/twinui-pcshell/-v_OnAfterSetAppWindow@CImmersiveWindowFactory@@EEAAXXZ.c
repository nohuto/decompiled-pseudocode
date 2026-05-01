/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1807997B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180012B84 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(CImmersiveWindowFactory *this)
{
  int CallingProcessHandle; // edi
  DWORD ProcessId; // ebx
  char *v4; // rcx
  __int64 *ppv; // rbx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, GUID *, GUID *, HANDLE *); // rdi
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 33) )
  {
    Process = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
    if ( CallingProcessHandle < 0 )
      ProcessId = dwProcessId;
    else
      ProcessId = GetProcessId(Process);
    v4 = (char *)Process;
    Process = 0LL;
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
    if ( CallingProcessHandle >= 0
      && GetWindowThreadProcessId(*((HWND *)this + 12), &dwProcessId)
      && ProcessId == dwProcessId )
    {
      v10 = 0LL;
      ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &Process);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
      if ( CoCreateInstance(
             &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
             0LL,
             0x404u,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             (LPVOID *)ppv) >= 0 )
      {
        Process = 0LL;
        v6 = v10;
        v7 = *(int (__fastcall **)(__int64, GUID *, GUID *, HANDLE *))(*(_QWORD *)v10 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&Process);
        if ( v7(v6, &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b, &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b, &Process) >= 0 )
          (*(void (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)Process + 40LL))(Process, *((_QWORD *)this + 12));
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&Process);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
  }
}
