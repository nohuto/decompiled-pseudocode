/*
 * XREFs of ?GetWindowsMessageProcessAndThreadFromContext@CursorProcessor@@CA?AU?$pair@KK@std@@PEAVInputContext@@@Z @ 0x180167260
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180166D1C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x1800B295C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall CursorProcessor::GetWindowsMessageProcessAndThreadFromContext(_DWORD *a1, __int64 a2)
{
  int v3; // r15d
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rbp
  __int64 *Attached; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 104LL);
  v7 = *(__int64 **)(v6 - 24);
  v8 = *(__int64 **)(v6 - 16);
  while ( v7 != v8 )
  {
    Attached = InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>(*v7, &v14);
    v10 = 0LL;
    if ( &v15 != Attached )
    {
      v10 = *Attached;
      *Attached = 0LL;
    }
    v11 = v5;
    v5 = v10;
    v15 = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 8LL))(v11 + 16);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 8LL))(v12 + 16);
    }
    if ( v10 )
    {
      v3 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 32) + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL))
                     + 32);
      v4 = *(_DWORD *)(v10 + 64);
      break;
    }
    ++v7;
  }
  *a1 = v3;
  a1[1] = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 8LL))(v5 + 16);
  return a1;
}
