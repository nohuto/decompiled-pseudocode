/*
 * XREFs of ?get_Parent@Api@Visual@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z @ 0x180077840
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::get_Parent(
        Windows::UI::Composition::Visual::Api *this,
        struct Windows::UI::Composition::IContainerVisual **a2)
{
  struct Windows::UI::Composition::IContainerVisual *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rcx

  v3 = 0LL;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    if ( (*((_DWORD *)this + 23) & 0x10000) == 0 )
    {
      v6 = *((_QWORD *)this - 4);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 260) & 0x10000) == 0 )
        {
          v3 = (struct Windows::UI::Composition::IContainerVisual *)(v6 + 296);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 16)) == 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
        }
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
