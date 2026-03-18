/*
 * XREFs of HasLighting @ 0x1800BB758
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x1800BB7E8 (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??$find@V?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800BB6BC (--$find@V-$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@W4ShaderLinkingArgument@@@st.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

bool __fastcall HasLighting(__int64 a1)
{
  gsl::details *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  __int16 v12; // [rsp+90h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 52) == 11 )
    return 1;
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 8);
  v12 = 2;
  v2 = *(gsl::details **)a1;
  v10 = v7;
  *((_QWORD *)&v7 + 1) = v7 + 2LL * (_QWORD)v2;
  v8 = *((_QWORD *)&v7 + 1);
  v9 = v7;
  v3 = (_QWORD *)std::find<gsl::details::span_iterator<enum ShaderLinkingArgument const>,enum ShaderLinkingArgument>(
                   (__int64)&v11,
                   &v9,
                   (__int64)&v7,
                   &v12);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 2LL * *(_QWORD *)a1;
  if ( *v3 != v4 || v3[1] != v5 )
  {
    gsl::details::terminate(*(gsl::details **)a1);
    __debugbreak();
  }
  return v3[2] != v5;
}
