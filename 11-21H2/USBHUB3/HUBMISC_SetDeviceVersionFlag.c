/*
 * XREFs of HUBMISC_SetDeviceVersionFlag @ 0x1C002DB00
 * Callers:
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001E980 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingVersionFlagInEnumerating @ 0x1C001F000 (HUBDSM_SettingVersionFlagInEnumerating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 */

__int16 __fastcall HUBMISC_SetDeviceVersionFlag(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  *(_BYTE *)(a1 + 1456) = 0;
  v2 = *(unsigned __int16 *)(a1 + 1990);
  LOWORD(v3) = 256;
  if ( (_WORD)v2 == 256 )
  {
    *(_DWORD *)(a1 + 1456) |= 1u;
    return v3;
  }
  LOWORD(v3) = v2 - 257;
  if ( (unsigned __int16)(v2 - 257) <= 0xFEu )
  {
LABEL_17:
    *(_DWORD *)(a1 + 1456) |= 2u;
    return v3;
  }
  LOWORD(v3) = 512;
  if ( (_WORD)v2 == 512 )
  {
    *(_DWORD *)(a1 + 1456) |= 4u;
    return v3;
  }
  if ( (unsigned __int16)v2 <= 0x200u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOWORD(v3) = WPP_RECORDER_SF_d(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     2u,
                     5u,
                     0x28u,
                     (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
                     v2);
    goto LABEL_17;
  }
  LOWORD(v3) = 768;
  if ( (unsigned __int16)v2 >= 0x300u )
  {
    v4 = *(_DWORD *)(a1 + 1456);
    if ( (v4 & 0x20000) != 0 )
    {
      v3 = v4 | 0x10;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x27u,
          (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids,
          v2);
        v4 = *(_DWORD *)(a1 + 1456);
      }
      v3 = v4 | 8;
    }
    *(_DWORD *)(a1 + 1456) = v3;
  }
  else
  {
    *(_DWORD *)(a1 + 1456) |= 8u;
  }
  return v3;
}
