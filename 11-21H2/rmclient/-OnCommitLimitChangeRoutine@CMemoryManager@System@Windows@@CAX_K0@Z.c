/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180002F58 (--$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@-$EventSource@U-$IEve.c)
 *     ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x1800030E4 (--0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000B064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(unsigned __int64 a1, unsigned __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x50uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(v4, a1, a2);
    v8 = v5;
    if ( v5 )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        v7,
        v6,
        v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
