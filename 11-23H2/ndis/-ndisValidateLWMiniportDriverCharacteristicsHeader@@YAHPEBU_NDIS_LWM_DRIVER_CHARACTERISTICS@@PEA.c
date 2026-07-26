/*
 * XREFs of ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C012CF70
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C005EBE0 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C006337C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C00634F4 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(
        const struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a1,
        const WCHAR *a2)
{
  const WCHAR *v2; // r8
  int v3; // r11d
  WCHAR *v4; // r9
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-58h]

  v2 = (const WCHAR *)&unk_1C00DA180;
  v3 = *((unsigned __int8 *)a1 + 5);
  v4 = (WCHAR *)a2;
  while ( (v3 | (*((unsigned __int8 *)a1 + 4) << 16)) != *(_DWORD *)v2 )
  {
    v2 += 4;
    a2 = L"NdisMinorVersion";
    if ( v2 == L"NdisMinorVersion" )
      goto LABEL_6;
  }
  LOBYTE(a2) = *((_BYTE *)v2 + 4);
  if ( *((_BYTE *)v2 + 5) != 1 )
  {
LABEL_6:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2,
        (__int64)v2,
        0xEu,
        v7,
        *((_BYTE *)a1 + 4),
        v3,
        (unsigned __int16 *)a1 + 8);
    return 3221291012LL;
  }
  v6 = *(unsigned __int8 *)a1;
  if ( (_BYTE)v6 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && *((_BYTE *)a1 + 1) )
  {
    *(_BYTE *)v4 = (_BYTE)a2;
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, v6, 0xFu, v7);
    return 3221291013LL;
  }
}
