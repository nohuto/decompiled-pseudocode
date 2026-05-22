/*
 * XREFs of ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_4X4_F@@@Z @ 0x180190BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::Partner::GetValue(
        Windows::UI::Composition::CompositionPropertyAnimator::Partner *this,
        struct D2D_MATRIX_4X4_F *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]

  memset_0(&v14, 0, 0x40uLL);
  v4 = v15;
  *(_OWORD *)&a2->_11 = v14;
  v5 = v16;
  *(_OWORD *)&a2->m[1][0] = v4;
  v6 = v17;
  *(_OWORD *)&a2->m[2][0] = v5;
  *(_OWORD *)&a2->m[3][0] = v6;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)this - 17) + 312LL))((char *)this - 136, &v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x547u);
    }
    else
    {
      v8 = 0;
      v10 = v15;
      *(_OWORD *)&a2->_11 = v14;
      v11 = v16;
      *(_OWORD *)&a2->m[1][0] = v10;
      v12 = v17;
      *(_OWORD *)&a2->m[2][0] = v11;
      *(_OWORD *)&a2->m[3][0] = v12;
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v8;
}
