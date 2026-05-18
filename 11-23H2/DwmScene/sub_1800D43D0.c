/*
 * XREFs of sub_1800D43D0 @ 0x1800D43D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017C00 @ 0x180017C00 (sub_180017C00.c)
 *     sub_1800D3A70 @ 0x1800D3A70 (sub_1800D3A70.c)
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 *     sub_1800D3C78 @ 0x1800D3C78 (sub_1800D3C78.c)
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D43D0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  const char *p_String; // rbx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, void *, _QWORD, const char *); // rsi
  unsigned int v10; // eax
  __int128 String; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[352]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&String = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
  v6 = *(_DWORD *)(a1 + 96);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      sub_1800D41F0(&v14, (__int64 **)(a1 + 112));
      sub_1800D3ACC(a1, a2, v14, (v15[0] - v14) >> 5, a3);
      sub_180017C00(&String, (__int64)v16);
      sub_1800D3A70((__int64)&v14);
    }
  }
  else
  {
    sub_1800D3C78((__int64)&v14, *(_QWORD *)(a1 + 104), (__int64)v17);
    sub_1800D3ACC(a1, a2, (__int64)v17, v14, a3);
    sub_180017C00(&String, (__int64)v15);
    sub_180011B24((__int64)v15);
  }
  p_String = (const char *)&String;
  if ( si128.m128i_i64[1] >= 0x10uLL )
    p_String = (const char *)String;
  v8 = *(_QWORD *)(a1 + 144);
  if ( v8 )
  {
    v9 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v8 + 40LL);
    if ( p_String )
      v10 = strnlen(p_String, 0x7FFFFFFFuLL);
    else
      v10 = 0;
    v9(v8, &unk_180105FA0, v10, p_String);
  }
  return sub_180011B24((__int64)&String);
}
