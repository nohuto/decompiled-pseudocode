/*
 * XREFs of ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180190B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Partner::GetValue(
        Windows::UI::Composition::CompositionPropertyAnimator::Partner *this,
        struct D2D_MATRIX_3X2_F *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v2 = (char *)this - 136;
  *(_OWORD *)&a2->m11 = 0LL;
  v10 = 0LL;
  *(_QWORD *)&a2->m[2][0] = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v2 + 320LL))(v2, &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x52Fu);
    }
    else
    {
      v5 = 0;
      v7 = v10;
      *(_OWORD *)&a2->m11 = v9;
      *(_QWORD *)&a2->m[2][0] = v7;
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
