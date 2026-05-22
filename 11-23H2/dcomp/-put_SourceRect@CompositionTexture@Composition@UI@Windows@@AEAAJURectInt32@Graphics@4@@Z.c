/*
 * XREFs of ?put_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJURectInt32@Graphics@4@@Z @ 0x1800A3DB4
 * Callers:
 *     ?put_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJURectInt32@Graphics@5@@Z @ 0x1800A3D20 (-put_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJURectInt32@Graphics@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::put_SourceRect(__int64 a1, __m128i *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // xmm0_8
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 168) + 16LL;
  v3 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v7 = a2->m128i_i64[0];
  v8 = v3 + v7;
  v9 = v7 + HIDWORD(v3);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontexture.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
