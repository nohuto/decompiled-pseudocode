/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x1800458A4
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180043E3C (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180045ACC (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x18008EE78 (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  int v2; // ebx
  _OWORD *v3; // rax
  __int128 v4; // xmm2
  __int128 v5; // xmm1
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+64h] [rbp-9Ch]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  int v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+74h] [rbp-8Ch]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  int v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D4h] [rbp-2Ch]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]
  char v44; // [rsp+E8h] [rbp-18h]
  _BYTE v45[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v46; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v47; // [rsp+1C0h] [rbp+C0h]

  memset_0(v19, 0, 0xB0uLL);
  memset_0(v45, 0, sizeof(v45));
  if ( (unsigned int)MemUtilIsLowMemPolicyActive() )
  {
    v2 = 7;
    if ( RmpSystemIsSdBusBased() )
      v2 = 15;
    v19[0] = v2;
  }
  else
  {
    LOBYTE(v2) = v19[0];
  }
  v34 = 0;
  v32 = 35;
  v33 = 5000;
  v24 = 90;
  v26 = 90;
  v35 = 5000;
  v36 = 5000;
  v41 = 5000;
  v42 = 5000;
  v37 = 60000;
  v40 = 60000;
  v20 = 52428800LL;
  v21 = 50;
  v22 = 70;
  v23 = 170;
  v25 = 75;
  v27 = 95;
  v30 = 89;
  v28 = 10;
  v29 = 65;
  v31 = 85;
  v38 = 0x200000;
  v39 = 2;
  v43 = 1000;
  v44 = 30;
  if ( (int)RmpGetResourceManagerRegistryOverrides(
              (struct _RM_RUNTIME_CONFIGURATION *)v19,
              (struct _RM_RUNTIME_CONFIGURATION *)v45) < 0 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 2 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      *(_QWORD *)&v47 = &v18;
      v18 = v17;
      *((_QWORD *)&v47 + 1) = 4LL;
      tlgWriteTransfer_EventWriteTransfer(
        v16,
        (unsigned __int8 *)dword_1800C3236,
        0LL,
        0LL,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&v46);
    }
    v3 = v19;
  }
  else
  {
    LOBYTE(v2) = v45[0];
    v3 = v45;
  }
  v4 = 0LL;
  v46.m256i_i32[0] = 0;
  *(_OWORD *)&v46.m256i_u64[2] = 0LL;
  *(__m128i *)((char *)v46.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  v47 = 0LL;
  if ( (v2 & 4) == 0 )
  {
    *(_QWORD *)&v47 = 0x300000003LL;
    HIDWORD(v47) = 1;
    v4 = v47;
    v46.m256i_i32[7] = 2;
  }
  v5 = *(_OWORD *)&v46.m256i_u64[2];
  *(_OWORD *)((char *)v3 + 72) = *(_OWORD *)v46.m256i_i8;
  *(_OWORD *)((char *)v3 + 88) = v5;
  *(_OWORD *)((char *)v3 + 104) = v4;
  v6 = v3[1];
  *(_OWORD *)a1 = *v3;
  v7 = v3[2];
  *((_OWORD *)a1 + 1) = v6;
  v8 = v3[3];
  *((_OWORD *)a1 + 2) = v7;
  v9 = v3[4];
  *((_OWORD *)a1 + 3) = v8;
  v10 = v3[5];
  *((_OWORD *)a1 + 4) = v9;
  v11 = v3[6];
  *((_OWORD *)a1 + 5) = v10;
  v12 = v3[8];
  *((_OWORD *)a1 + 6) = v11;
  v13 = (_OWORD *)((char *)a1 + 128);
  *(v13 - 1) = v3[7];
  v14 = v3[9];
  *v13 = v12;
  v15 = v3[10];
  v13[1] = v14;
  v13[2] = v15;
}
