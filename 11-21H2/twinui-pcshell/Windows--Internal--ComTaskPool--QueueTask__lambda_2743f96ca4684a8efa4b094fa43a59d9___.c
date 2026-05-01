/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x180390DB0
 * Callers:
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x180391A60 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v8[2] = *(_QWORD *)a4;
    v8[3] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    *((_DWORD *)v8 + 8) = *(_DWORD *)(a4 + 16);
    *v8 = off_18064E0C8;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = SHTaskPoolQueueTask(3LL, a2, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v9;
}
