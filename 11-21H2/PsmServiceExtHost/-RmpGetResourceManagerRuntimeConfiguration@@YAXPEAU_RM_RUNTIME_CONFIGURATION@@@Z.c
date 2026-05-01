/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180049F00
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x1800494DC (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x18004A448 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x1800936F4 (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  _BYTE *v2; // rax
  bool v3; // zf
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
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  int v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+64h] [rbp-9Ch]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+74h] [rbp-8Ch]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  int v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  int v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C4h] [rbp-3Ch]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  int v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D4h] [rbp-2Ch]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  int v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E4h] [rbp-1Ch]
  char v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v47; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v48; // [rsp+1C0h] [rbp+C0h]

  memset_0(v20, 0, 0xB0uLL);
  memset_0(v46, 0, sizeof(v46));
  if ( (unsigned int)MemUtilIsLowMemPolicyActive() )
  {
    v16 = 7;
    if ( RmpSystemIsSdBusBased() )
      v16 = 15;
    v20[0] = v16;
  }
  v35 = 0;
  v33 = 35;
  v34 = 5000;
  v25 = 90;
  v27 = 90;
  v36 = 5000;
  v37 = 5000;
  v42 = 5000;
  v43 = 5000;
  v38 = 60000;
  v41 = 60000;
  v21 = 52428800LL;
  v22 = 50;
  v23 = 70;
  v24 = 170;
  v26 = 75;
  v28 = 95;
  v31 = 89;
  v29 = 10;
  v30 = 65;
  v32 = 85;
  v39 = 0x200000;
  v40 = 2;
  v44 = 1000;
  v45 = 30;
  if ( (int)RmpGetResourceManagerRegistryOverrides(
              (struct _RM_RUNTIME_CONFIGURATION *)v20,
              (struct _RM_RUNTIME_CONFIGURATION *)v46) < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 2 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      *(_QWORD *)&v48 = &v19;
      v19 = v18;
      *((_QWORD *)&v48 + 1) = 4LL;
      tlgWriteTransfer_EventWriteTransfer(
        v17,
        (unsigned __int8 *)dword_1800C1F98,
        0LL,
        0LL,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&v47);
    }
    v2 = v20;
  }
  else
  {
    v2 = v46;
  }
  v3 = (*v2 & 4) == 0;
  v4 = 0LL;
  v47.m256i_i32[0] = 0;
  *(_OWORD *)&v47.m256i_u64[2] = 0LL;
  *(__m128i *)((char *)v47.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  v48 = 0LL;
  if ( v3 )
  {
    *(_QWORD *)&v48 = 0x300000003LL;
    HIDWORD(v48) = 1;
    v4 = v48;
    v47.m256i_i32[7] = 2;
  }
  v5 = *(_OWORD *)&v47.m256i_u64[2];
  *(_OWORD *)(v2 + 72) = *(_OWORD *)v47.m256i_i8;
  *(_OWORD *)(v2 + 88) = v5;
  *(_OWORD *)(v2 + 104) = v4;
  v6 = *((_OWORD *)v2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v2;
  v7 = *((_OWORD *)v2 + 2);
  *((_OWORD *)a1 + 1) = v6;
  v8 = *((_OWORD *)v2 + 3);
  *((_OWORD *)a1 + 2) = v7;
  v9 = *((_OWORD *)v2 + 4);
  *((_OWORD *)a1 + 3) = v8;
  v10 = *((_OWORD *)v2 + 5);
  *((_OWORD *)a1 + 4) = v9;
  v11 = *((_OWORD *)v2 + 6);
  *((_OWORD *)a1 + 5) = v10;
  v12 = *((_OWORD *)v2 + 8);
  *((_OWORD *)a1 + 6) = v11;
  v13 = (_OWORD *)((char *)a1 + 128);
  *(v13 - 1) = *((_OWORD *)v2 + 7);
  v14 = *((_OWORD *)v2 + 9);
  *v13 = v12;
  v15 = *((_OWORD *)v2 + 10);
  v13[1] = v14;
  v13[2] = v15;
}
