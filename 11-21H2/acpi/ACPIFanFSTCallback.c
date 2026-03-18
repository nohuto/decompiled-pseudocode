/*
 * XREFs of ACPIFanFSTCallback @ 0x1C0054AC0
 * Callers:
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002D5D0 (WPP_RECORDER_SF_DDqss.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0048918 (AcpiDiagTraceFanStatusChange.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 */

void __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  const char *v6; // rdi
  char v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  const char *v11; // rdi
  char v12; // dl
  const char *v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  char v18; // dl
  int v19; // eax
  __int64 v20; // rax
  const char *v21; // rdi
  const char *v22; // r8
  const char *v23; // rdx
  char v24; // dl
  const char *v25; // r8
  const char *v26; // rcx
  __int64 v27; // rax
  char v28; // r8
  const char *v29; // r10
  const char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  char v33; // r8
  __int64 v34; // rax
  const char *v35; // rdx
  char v36; // dl
  const char *v37; // rcx
  __int64 v38; // rax
  char v39; // dl
  const char *v40; // rcx
  __int64 v41; // rax
  __int128 v42; // [rsp+50h] [rbp-30h] BYREF
  __int128 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  int v45; // [rsp+C8h] [rbp+48h]
  unsigned int v47; // [rsp+D8h] [rbp+58h]

  v45 = 0x40000000;
  v44 = 0LL;
  v47 = (unsigned int)a2 >> 31;
  v5 = a3;
  v42 = 0LL;
  v43 = 0LL;
  if ( a2 < 0 )
  {
    v6 = (const char *)&unk_1C006FB8B;
    v7 = 0;
    v8 = (const char *)&unk_1C006FB8B;
    if ( a4 )
    {
      v9 = *(_QWORD *)(a4 + 8);
      v7 = a4;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a4 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xFu,
      (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
      a2,
      v7,
      v6,
      v8);
LABEL_8:
    v5 = a3;
LABEL_9:
    v10 = 0x40000000;
    goto LABEL_10;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v11 = (const char *)&unk_1C006FB8B;
    v12 = 0;
    v13 = (const char *)&unk_1C006FB8B;
    if ( a4 )
    {
      v14 = *(_QWORD *)(a4 + 8);
      v12 = a4;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a4 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v15 = 16;
    goto LABEL_20;
  }
  if ( **(_DWORD **)(a3 + 32) < 3u )
  {
    v11 = (const char *)&unk_1C006FB8B;
    v12 = 0;
    v13 = (const char *)&unk_1C006FB8B;
    if ( a4 )
    {
      v16 = *(_QWORD *)(a4 + 8);
      v12 = a4;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a4 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v15 = 17;
LABEL_20:
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      v15,
      (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
      v12,
      v11,
      v13);
    goto LABEL_8;
  }
  v17 = AMLIEvalPkgDataElement(a3, 1u, (__int64)&v42);
  v18 = v17;
  if ( v17 < 0 )
  {
    v21 = (const char *)&unk_1C006FB8B;
    v28 = 0;
    v29 = (const char *)&unk_1C006FB8B;
    v30 = (const char *)&unk_1C006FB8B;
    if ( a4 )
    {
      v31 = *(_QWORD *)(a4 + 8);
      v28 = a4;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v29 = *(const char **)(a4 + 608);
        if ( (v31 & 0x400000000000LL) != 0 )
          v30 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x14u,
        (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
        v18,
        v28,
        v29,
        v30);
  }
  else
  {
    if ( WORD1(v42) == 1 )
    {
      v19 = v43;
      if ( (_DWORD)v43 != *(_DWORD *)(a4 + 296) )
      {
        *(_DWORD *)(a4 + 296) = v43;
        v45 = 1073741826;
        *(_BYTE *)(a4 + 300) = v19 != 0;
      }
      v20 = *(_QWORD *)(a4 + 8);
      v21 = (const char *)&unk_1C006FB8B;
      v22 = (const char *)&unk_1C006FB8B;
      v23 = (const char *)&unk_1C006FB8B;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v23 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0x10u,
          0x12u,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          *(_DWORD *)(a4 + 296),
          *(_BYTE *)(a4 + 300),
          a4,
          v22,
          v23);
    }
    else
    {
      v21 = (const char *)&unk_1C006FB8B;
      v24 = 0;
      v25 = (const char *)&unk_1C006FB8B;
      v26 = (const char *)&unk_1C006FB8B;
      if ( a4 )
      {
        v27 = *(_QWORD *)(a4 + 8);
        v24 = a4;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(a4 + 608);
          if ( (v27 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x13u,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          v24,
          v25,
          v26);
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs((__int64)&v42, 1u);
  }
  v42 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v32 = AMLIEvalPkgDataElement(a3, 2u, (__int64)&v42);
  v33 = v32;
  if ( v32 < 0 )
  {
    v39 = 0;
    v40 = (const char *)&unk_1C006FB8B;
    if ( a4 )
    {
      v41 = *(_QWORD *)(a4 + 8);
      v39 = a4;
      if ( (v41 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(a4 + 608);
        if ( (v41 & 0x400000000000LL) != 0 )
          v40 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x17u,
        (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
        v33,
        v39,
        v21,
        v40);
  }
  else
  {
    if ( WORD1(v42) == 1 )
    {
      if ( (_DWORD)v43 != *(_DWORD *)(a4 + 304) )
      {
        v45 |= 2u;
        *(_DWORD *)(a4 + 304) = v43;
      }
      v34 = *(_QWORD *)(a4 + 8);
      v35 = (const char *)&unk_1C006FB8B;
      if ( (v34 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(a4 + 608);
        if ( (v34 & 0x400000000000LL) != 0 )
          v35 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0x10u,
          0x15u,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          *(_DWORD *)(a4 + 304),
          a4,
          v21,
          v35);
    }
    else
    {
      v36 = 0;
      v37 = (const char *)&unk_1C006FB8B;
      if ( a4 )
      {
        v38 = *(_QWORD *)(a4 + 8);
        v36 = a4;
        if ( (v38 & 0x200000000000LL) != 0 )
        {
          v21 = *(const char **)(a4 + 608);
          if ( (v38 & 0x400000000000LL) != 0 )
            v37 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x16u,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          v36,
          v21,
          v37);
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs((__int64)&v42, 1u);
  }
  v10 = v45;
  if ( (v45 & 2) != 0 )
  {
    AcpiDiagTraceFanStatusChange(a4);
  }
  else if ( (*(_BYTE *)(a4 + 320) & 0xF) == 0xF )
  {
    ACPISetDeviceWorker(a4, 1024);
  }
  v5 = a3;
LABEL_10:
  if ( !(_BYTE)v47 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(v5, 1u);
  }
  ACPIFanLoop(a4, v10, 0);
}
