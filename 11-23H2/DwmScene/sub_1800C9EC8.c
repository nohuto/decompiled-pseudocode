/*
 * XREFs of sub_1800C9EC8 @ 0x1800C9EC8
 * Callers:
 *     sub_1800C9E5C @ 0x1800C9E5C (sub_1800C9E5C.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800CBBFC @ 0x1800CBBFC (sub_1800CBBFC.c)
 *     sub_1800CEA10 @ 0x1800CEA10 (sub_1800CEA10.c)
 *     sub_1800D1040 @ 0x1800D1040 (sub_1800D1040.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800C92EC @ 0x1800C92EC (sub_1800C92EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C9EC8(int a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+80h] [rbp-29h] BYREF
  int v10; // [rsp+E0h] [rbp+37h]

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_18019B880);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_18019B890);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_18019B830);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_18019B870);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_18019B8A0);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_18019B8C0);
  v10 = 107;
  v2 = *((_DWORD *)pExceptionObject + a1);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return sub_1800C92EC(v2);
    if ( v3 != 1 )
    {
      sub_180010DD0(v8, (__int64)"Unsupported color space");
      v4 = sub_180010DD0(
             v7,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  return v2;
}
