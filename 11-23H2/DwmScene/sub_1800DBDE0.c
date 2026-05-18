/*
 * XREFs of sub_1800DBDE0 @ 0x1800DBDE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E424 @ 0x18001E424 (sub_18001E424.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18001F8A4 @ 0x18001F8A4 (sub_18001F8A4.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 */

// Hidden C++ exception states: #wind=2
__m128i *__fastcall sub_1800DBDE0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v4; // r8
  _WORD *v5; // r10
  _WORD *v6; // rax
  unsigned __int64 v7; // rdx
  _WORD *v8; // r11
  _WORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  __int16 v14[8]; // [rsp+20h] [rbp-59h] BYREF
  __m128i *v15; // [rsp+30h] [rbp-49h]
  __m128i v16; // [rsp+38h] [rbp-41h] BYREF
  __m128i si128; // [rsp+48h] [rbp-31h]
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v19[7]; // [rsp+90h] [rbp+17h] BYREF

  v15 = a2;
  if ( sub_18001F84C(a3) )
  {
    sub_180010DD0(&v16, (__int64)"IConfigurationManager::GetDomain() -- empty string is not a valid property name");
    sub_18001E424(pExceptionObject, v16.m128i_i8);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v6 = v5;
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v6 = *(_WORD **)v4;
  if ( *v6 == 47 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    v8 = v5;
    if ( *(_QWORD *)(v4 + 24) >= 8uLL )
      v8 = *(_WORD **)v4;
    v14[0] = 47;
    if ( v7 <= 1 || (v9 = sub_18001F8A4(v8 + 1, v7 - 1, v14)) == 0LL || (v12 = ((__int64)v9 - v11) >> 1, v12 == -1) )
    {
      sub_180010DD0(
        pExceptionObject,
        (__int64)"IConfigurationManager::GetDomain() -- property domain must begin and end with a slash, e.g. /CustomDoma"
                 "in/Category.Value");
      sub_18001E424(v19, (const char *)pExceptionObject);
      throw (Spectre::Utils::SpectreInvalidArgException *)v19;
    }
    sub_18001FAFC(v10, (__int64)&v16, 1uLL, v12 - 1);
    *a2 = v16;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
    v16.m128i_i16[0] = 0;
    sub_180013348((__int64)&v16);
  }
  else
  {
    sub_180012440(a2, (__int64)&unk_1801D88B0);
  }
  return a2;
}
