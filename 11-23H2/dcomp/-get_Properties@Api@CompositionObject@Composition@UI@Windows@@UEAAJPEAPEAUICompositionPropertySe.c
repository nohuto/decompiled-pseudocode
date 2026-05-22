/*
 * XREFs of ?get_Properties@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@345@@Z @ 0x180074430
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::get_Properties(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct Windows::UI::Composition::ICompositionPropertySet **a2)
{
  char *v2; // rsi
  struct Windows::UI::Composition::ICompositionPropertySet *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rax

  v2 = (char *)this - 40;
  v3 = 0LL;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[32] & 2) != 0 )
  {
    LOBYTE(v6) = 1;
    v7 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 112LL))(v2, v6);
    if ( v7 )
    {
      v3 = (struct Windows::UI::Composition::ICompositionPropertySet *)(v7 + 34);
      if ( _InterlockedIncrement(v7 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 80LL))(v7);
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
