/*
 * XREFs of ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006BBA4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E040 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x1C0008230 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     memcmp @ 0x1C00380F0 (memcmp.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     WPP_RECORDER_SF_qDqLLLL @ 0x1C0070898 (WPP_RECORDER_SF_qDqLLLL.c)
 */

char __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        char *Src,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  char v6; // si
  unsigned __int8 v8; // di
  _WORD *v12; // r12
  size_t v13; // rsi
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rbx
  _NDIS_TIMESTAMP_CAPABILITIES *Pool2; // rax
  int v17; // edx
  __int64 v18; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v8 = 0;
  v12 = Src + 2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v18) = HIDWORD(Src);
    WPP_RECORDER_SF_qDqLLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned __int8)*Src, (unsigned __int16)*v12, a4);
  }
  if ( a6 )
    *a6 = 0;
  if ( a4 < 0x36 || *Src != (char)0x80 || *v12 < 0x36u || !Src[1] )
    goto LABEL_33;
  if ( a5 )
  {
    v13 = 56LL;
    if ( a2 == 1074073601 )
    {
      TopTimestampConfig = a1->TopTimestampConfig;
      if ( !TopTimestampConfig )
      {
        Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
        a1->TopTimestampConfig = Pool2;
        goto LABEL_13;
      }
LABEL_25:
      if ( !memcmp(TopTimestampConfig, Src, (unsigned __int16)*v12) )
        goto LABEL_27;
      goto LABEL_26;
    }
    TopTimestampConfig = a1->TopHwTimestampCapabilities;
    if ( TopTimestampConfig )
      goto LABEL_25;
    Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
    a1->TopHwTimestampCapabilities = Pool2;
  }
  else
  {
    TopTimestampConfig = a1->HwTimestampCapabilities;
    if ( a2 == 1074073601 )
    {
      if ( !TopTimestampConfig )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x18u,
            0xFEu,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        return 0;
      }
      TopTimestampConfig = a1->HwTimestampCurrentConfig;
      v13 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
      a1->HwTimestampCurrentConfig = Pool2;
    }
    else
    {
      v13 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
      a1->HwTimestampCapabilities = Pool2;
    }
  }
LABEL_13:
  TopTimestampConfig = Pool2;
  if ( !Pool2 )
    return 0;
LABEL_26:
  v8 = 1;
LABEL_27:
  if ( TopTimestampConfig )
  {
    if ( *v12 < 0x38u )
      v13 = (unsigned __int16)*v12;
    memmove(TopTimestampConfig, Src, v13);
    v6 = 1;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v8;
      WPP_RECORDER_SF_qDL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        0x18u,
        0xFFu,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        (char)a1,
        a2,
        v18);
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_33:
  if ( a6 )
    *a6 = v8;
  return v6;
}
