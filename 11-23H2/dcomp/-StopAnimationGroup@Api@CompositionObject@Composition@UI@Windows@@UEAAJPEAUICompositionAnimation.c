/*
 * XREFs of ?StopAnimationGroup@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@345@@Z @ 0x180109B40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::Api::StopAnimationGroup(
        Windows::UI::Composition::CompositionObject::Api *this,
        struct Windows::UI::Composition::ICompositionAnimationBase *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax

  v2 = (char *)this - 48;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    if ( a2 )
    {
      v8 = (*(__int64 (__fastcall **)(char *, struct Windows::UI::Composition::ICompositionAnimationBase *))(*(_QWORD *)v2 + 192LL))(
             v2,
             a2);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 1120;
      v7 = v8;
    }
    else
    {
      v5 = -2147024809;
      v6 = 1118;
      v7 = -2147024809;
    }
    DoStackCaptureDirect(v7, v6);
    goto LABEL_9;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
