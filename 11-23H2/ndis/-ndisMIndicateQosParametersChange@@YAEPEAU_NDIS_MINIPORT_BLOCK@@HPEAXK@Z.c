/*
 * XREFs of ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006BF00
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E1D0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062ECC (WPP_RECORDER_SF_LL_ea_1C0062ECC.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1C0070144 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     WPP_RECORDER_SF_qDqL @ 0x1C0070754 (WPP_RECORDER_SF_qDqL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008BCC4 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A83E4 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 */

unsigned __int8 __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        struct _NDIS_QOS_PARAMETERS *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  int v6; // esi
  _QWORD *v8; // rcx
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  int Type; // edx
  unsigned int Size; // eax
  int v13; // eax
  _NDIS_OBJECT_HEADER v14; // r14d
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 Pool2; // r13
  void *v18; // rcx
  int v19; // edx
  _WORD *v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]
  char v23[8]; // [rsp+28h] [rbp-70h]
  char v24[8]; // [rsp+30h] [rbp-68h]
  char v25; // [rsp+30h] [rbp-68h]
  char v26[4]; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v25 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      24,
      165,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      v25,
      (char)a3,
      a4);
  }
  if ( !a1->QosHwCapabilities )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      return 0;
    v9 = 166;
    v10 = 5;
    goto LABEL_45;
  }
  if ( v4 < 0x34 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v23 = v4;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x18u,
        0xA7u,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        *(_QWORD *)v23);
    }
    goto LABEL_43;
  }
  Type = a3->Header.Type;
  if ( (_BYTE)Type != 0xB6
    || (Size = a3->Header.Size, (unsigned __int16)Size < 0x34u)
    || a3->Header.Revision != 1
    || (a4 = a3->Header.Size, v4 < Size) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        a3->Header.Size,
        a4,
        v22,
        Type,
        *(_DWORD *)v24,
        a3->Header.Size,
        *(_DWORD *)v26,
        a3->Header.Revision);
LABEL_43:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 169;
      v10 = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], v10, 0x18u, v9, (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids);
    }
    return 0;
  }
  v13 = ndisValidateQosParameters(a1, v6 == 1073873056, a3, Size, 0LL);
  if ( v13 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v23 = v13;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x18u,
        0xAAu,
        (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
        *(_QWORD *)v23);
    }
    return 0;
  }
  v14 = (_NDIS_OBJECT_HEADER)a3->Header.Size;
  v15 = 4920LL;
  if ( v6 != 1073873056 )
    v15 = 4936LL;
  v16 = 4928LL;
  if ( v6 != 1073873056 )
    v16 = 4944LL;
  if ( *(unsigned int *)&v14 <= *(_DWORD *)((char *)&a1->Header + v16) )
  {
    v21 = *(_WORD **)(&a1->Header.Type + v15);
    if ( v21[1] == *(_WORD *)&v14.Type && !memcmp(v21, a3, a3->Header.Size) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v23 = v6;
        WPP_RECORDER_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0xACu,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          *(_QWORD *)v23);
      }
      return 0;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, a3->Header.Size, 1936802894);
    if ( !Pool2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v24 = v6;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xABu,
          (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
          v14.Type,
          *(_QWORD *)v24);
      }
      return 0;
    }
    v18 = *(void **)(&a1->Header.Type + v15);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(&a1->Header.Type + v15) = Pool2;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v16) = v14;
  }
  memmove(*(void **)(&a1->Header.Type + v15), a3, a3->Header.Size);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      24,
      173,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v4);
  }
  return 1;
}
