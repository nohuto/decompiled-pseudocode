/*
 * XREFs of ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_VECTOR_2F@@@Z @ 0x180190D10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Partner::GetValue(
        Windows::UI::Composition::CompositionPropertyAnimator::Partner *this,
        struct D2D_VECTOR_2F *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  struct D2D_VECTOR_2F v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 136;
  v8 = 0LL;
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(char *, struct D2D_VECTOR_2F *))(*(_QWORD *)v2 + 352LL))(v2, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x4BAu);
    }
    else
    {
      v5 = 0;
      *a2 = v8;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
