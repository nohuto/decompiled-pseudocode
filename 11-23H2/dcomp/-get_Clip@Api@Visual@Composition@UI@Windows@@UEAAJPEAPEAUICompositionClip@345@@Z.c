/*
 * XREFs of ?get_Clip@Api@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionClip@345@@Z @ 0x180075C20
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_Clip(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::UI::Composition::ICompositionClip **a2)
{
  struct Windows::UI::Composition::ICompositionClip *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rax
  int v8; // edx
  int *v9; // rcx
  volatile signed __int32 *v10; // rcx

  v3 = 0LL;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 7);
    if ( (*(_DWORD *)(v6 + 4) & 0x4000000) != 0 )
    {
      v8 = *(_DWORD *)(v6 + 12);
      v9 = (int *)(v6 + 12);
      if ( (v8 & 0x7F000000) != 0x6000000 )
      {
        do
        {
          v9 = (int *)((char *)v9 + (v8 & 0xFFFFFF) + 4);
          v8 = *v9;
        }
        while ( (*v9 & 0x7F000000) != 0x6000000 );
      }
      v10 = *(volatile signed __int32 **)(v9 + 1);
      if ( v10 )
      {
        v3 = (struct Windows::UI::Composition::ICompositionClip *)(v10 + 34);
        if ( _InterlockedIncrement(v10 + 4) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 80LL))(v10);
      }
    }
    *a2 = v3;
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return 0LL;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return 2147483667LL;
  }
}
