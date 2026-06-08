/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C003A514
 * Callers:
 *     QueryPepCapabilites @ 0x1C003A718 (QueryPepCapabilites.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  bool v9; // zf
  char v11; // cl
  int v12; // esi
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF

  v15 = 0LL;
  v9 = *(_DWORD *)(a1 + 80) == 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  if ( !v9 )
    v11 = 1;
  BYTE12(v15) = v11;
  v12 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 1LL, &v15);
  if ( v12 >= 0 )
  {
    *a2 = DWORD1(v15);
    *a4 = v15;
    *a5 = BYTE8(v15);
    *a6 = BYTE9(v15);
    *a3 = BYTE10(v15);
    v13 = *(_QWORD *)(a1 + 280);
    if ( (v13 & 0x300000300LL) == 0 )
    {
      *a2 = 0;
      v13 = *(_QWORD *)(a1 + 280);
    }
    if ( (v13 & 0x1000000000LL) == 0 )
    {
      *a4 = 0;
      *a5 = 0;
      *a3 = 0;
      v13 = *(_QWORD *)(a1 + 280);
    }
    *a6 &= -((v13 & 0x400) != 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x10u,
      (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
