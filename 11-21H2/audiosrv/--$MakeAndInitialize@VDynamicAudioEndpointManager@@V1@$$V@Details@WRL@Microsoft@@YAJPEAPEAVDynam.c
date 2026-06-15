/*
 * XREFs of ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x18004AC64
 * Callers:
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180050030 (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x18004AB50 (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ @ 0x18004B1B4 (-RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(
        DynamicAudioEndpointManager **a1)
{
  DynamicAudioEndpointManager *v2; // rax
  DynamicAudioEndpointManager *v3; // rbx
  int v4; // esi

  *a1 = 0LL;
  v2 = (DynamicAudioEndpointManager *)operator new(0x3E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = DynamicAudioEndpointManager::DynamicAudioEndpointManager(v2);
    v4 = DynamicAudioEndpointManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
