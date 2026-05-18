/*
 * XREFs of sub_1800137B0 @ 0x1800137B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_1800446A0 @ 0x1800446A0 (sub_1800446A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800137B0(__int64 a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void **v8; // rdx
  __int64 result; // rax
  void *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v3 = a3;
    v10[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
    if ( !a2 )
    {
      sub_1800134DC(v10, (void **)&unk_1801D6F68);
      goto LABEL_13;
    }
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
          {
LABEL_13:
            LOBYTE(a3) = v3 == 1;
            sub_1800446A0(*(_QWORD *)(a1 + 16), v10, a3);
            sub_180011B24((__int64)v10);
            return 0LL;
          }
          v8 = (void **)&unk_1801D6F48;
        }
        else
        {
          v8 = (void **)&unk_1801D6F28;
        }
      }
      else
      {
        v8 = (void **)&unk_1801D6F88;
      }
    }
    else
    {
      v8 = (void **)&unk_1801D6F08;
    }
    sub_1800134DC(v10, v8);
    goto LABEL_13;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      222LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
