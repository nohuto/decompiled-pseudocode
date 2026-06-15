/*
 * XREFs of ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18001C130
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::SetMixedRealitySpatialAudioFormatPolicy(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int128 v10; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 712);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 712));
  if ( *(_DWORD *)(a1 + 752) != a2 )
  {
    *(_DWORD *)(a1 + 752) = a2;
    v5 = *(_QWORD **)(a1 + 760);
    v6 = *(_QWORD **)(a1 + 768);
    while ( v5 != v6 )
    {
      *(_QWORD *)&v10 = *v5;
      DWORD2(v10) = *(_DWORD *)(a1 + 160);
      v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( v7 )
      {
        *((_DWORD *)v7 + 3) = 1;
        *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v8[1] = v10;
        *(_QWORD *)v8 = off_180047F80;
      }
      else
      {
        v8 = 0LL;
      }
      CurrentThreadId = GetCurrentThreadId();
      SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v8, 0LL);
      if ( v8 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v8 + 16LL))(v8);
      ++v5;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
