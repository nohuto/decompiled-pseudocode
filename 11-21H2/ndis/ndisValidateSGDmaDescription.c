/*
 * XREFs of ndisValidateSGDmaDescription @ 0x1C00C8DAC
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00C9880 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisValidateSGDmaDescription(_BYTE *a1, ULONG_PTR a2)
{
  unsigned int v3; // ecx
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // al
  char v7[4]; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( *(_BYTE *)(a2 + 1) != 2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x24u,
          (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
          *(unsigned __int8 *)(a2 + 1));
      return 3221291012LL;
    }
    if ( *a1 == 17 )
    {
      if ( a1[32] <= 6u && (a1[32] != 6 || a1[33] < 0x55u) )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x1Fu,
            (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
        return 3221291012LL;
      }
    }
    else
    {
      if ( *a1 != 1 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 3221225485LL;
        v5 = 32;
        goto LABEL_32;
      }
      if ( !*(_QWORD *)(a2 + 40) || (*(_DWORD *)(a2 + 4) & 2) == 0 || *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) )
        ndisBugCheckEx(0x34uLL, 3uLL, 2uLL, a2);
    }
    v3 = *(unsigned __int16 *)(a2 + 2);
    if ( v3 < 0x30 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v4 = 33;
LABEL_47:
        *(_DWORD *)v7 = v3;
        goto LABEL_48;
      }
      return 3221225485LL;
    }
    v3 = *(_DWORD *)(a2 + 4);
    if ( (v3 & 0xFFFFFFF8) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v4 = 34;
        goto LABEL_47;
      }
      return 3221225485LL;
    }
    if ( (v3 & 6) == 4 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v5 = 35;
LABEL_32:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v5,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( *a1 != 17 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v5 = 27;
    goto LABEL_32;
  }
  v6 = a1[32];
  if ( v6 >= 6u )
  {
    if ( v6 > 6u || a1[33] >= 0x32u )
    {
      if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFC) != 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v4 = 29;
          *(_DWORD *)v7 = *(_DWORD *)(a2 + 4);
LABEL_48:
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            v4,
            (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
            *(_DWORD *)v7);
          return 3221225485LL;
        }
        return 3221225485LL;
      }
      if ( v6 > 6u )
        goto LABEL_53;
    }
    if ( a1[33] >= 0x55u )
    {
LABEL_53:
      v3 = *(unsigned __int16 *)(a2 + 2);
      if ( (unsigned __int16)v3 < 0x24u )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v4 = 30;
          goto LABEL_47;
        }
        return 3221225485LL;
      }
    }
    return 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x1Cu,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
  return 3221225659LL;
}
