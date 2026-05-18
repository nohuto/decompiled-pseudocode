/*
 * XREFs of sub_1800E0240 @ 0x1800E0240
 * Callers:
 *     sub_1800DF960 @ 0x1800DF960 (sub_1800DF960.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800E1690 @ 0x1800E1690 (sub_1800E1690.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800E519C @ 0x1800E519C (sub_1800E519C.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800E83A0 @ 0x1800E83A0 (sub_1800E83A0.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E0240(int a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+80h] [rbp-29h] BYREF
  int v11; // [rsp+E0h] [rbp+37h]

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&xmmword_1801BD830);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&xmmword_1801BD840);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&xmmword_1801BD7E0);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&xmmword_1801BD820);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&xmmword_1801BD850);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&xmmword_1801BD870);
  v11 = 107;
  v3 = *((_DWORD *)pExceptionObject + a1);
  if ( !a2 )
    return v3;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      sub_1800113D0(v9, "Unsupported color space");
      v6 = sub_1800113D0(
             v8,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      sub_18003F4DC(pExceptionObject, (__int64)v6, v7, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    return v3;
  }
  switch ( v3 )
  {
    case 0x1Cu:
      return 29;
    case 0x47u:
      return 72;
    case 0x4Au:
      return 75;
    case 0x4Du:
      return 78;
    case 0x57u:
      return 91;
    case 0x58u:
      return 93;
    case 0x5Au:
      return 91;
    case 0x5Cu:
      return 93;
    case 0x62u:
      return 99;
  }
  return v3;
}
