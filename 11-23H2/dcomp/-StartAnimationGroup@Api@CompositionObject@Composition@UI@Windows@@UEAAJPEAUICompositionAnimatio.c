/*
 * XREFs of ?StartAnimationGroup@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@345@@Z @ 0x18008CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::StartAnimationGroup(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct Windows::UI::Composition::ICompositionAnimationBase *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  signed int v5; // eax
  unsigned int v6; // edi

  v2 = (char *)this - 48;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    if ( a2 )
    {
      v5 = (*(__int64 (__fastcall **)(char *, struct Windows::UI::Composition::ICompositionAnimationBase *))(*(_QWORD *)v2 + 184LL))(
             v2,
             a2);
      v6 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, v5, 0x3F4u, 0LL);
      else
        v6 = 0;
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801F5B20, 3u, 0x80070057, 0x3F2u, 0LL);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
