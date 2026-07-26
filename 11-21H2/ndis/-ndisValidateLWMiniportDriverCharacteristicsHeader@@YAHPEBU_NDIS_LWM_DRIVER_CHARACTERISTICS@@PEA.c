/*
 * XREFs of ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x1C0121520
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C0059970 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C005DF80 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C005E0F8 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(
        const struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a1,
        const wchar_t *a2)
{
  const wchar_t *v2; // rax
  int v3; // r11d
  wchar_t *v4; // r9
  __int64 v5; // r8
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-58h]

  v2 = (const wchar_t *)&unk_1C00D2500;
  v3 = *((unsigned __int8 *)a1 + 5);
  v4 = (wchar_t *)a2;
  v5 = v3 | (*((unsigned __int8 *)a1 + 4) << 16);
  while ( (_DWORD)v5 != *(_DWORD *)v2 )
  {
    v2 += 4;
    a2 = L"\\Kernel";
    if ( v2 == L"\\Kernel" )
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
        v5,
        0xEu,
        v8,
        *((_BYTE *)a1 + 4),
        v3,
        (unsigned __int16 *)a1 + 8);
    return 3221291012LL;
  }
  v7 = *(unsigned __int8 *)a1;
  if ( (_BYTE)v7 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && *((_BYTE *)a1 + 1) )
  {
    *(_BYTE *)v4 = (_BYTE)a2;
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, v7, 0xFu, v8);
    return 3221291013LL;
  }
}
