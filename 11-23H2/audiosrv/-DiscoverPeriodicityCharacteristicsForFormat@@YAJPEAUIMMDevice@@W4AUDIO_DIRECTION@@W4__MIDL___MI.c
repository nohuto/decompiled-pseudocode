/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004C16C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD10 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800042B4 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180004438 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800339A0 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DiscoverPeriodicityCharacteristicsForFormat(_QWORD *a1, unsigned int a2, int a3, struct _GUID *a4, ...)
{
  unsigned __int64 v5; // rsi
  unsigned __int16 *v6; // r13
  double v7; // xmm1_8
  unsigned int *v8; // r14
  unsigned int *v9; // r12
  __int64 v10; // rax
  int v11; // ebx
  struct PacketSizeConstraints *v12; // r15
  unsigned int v13; // edi
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v19; // eax
  unsigned int *v20; // rcx
  unsigned int *v21; // rdx
  int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // rdx
  int PacketSizesFromConstraints; // eax
  unsigned int v27; // eax
  unsigned int *v28; // rcx
  unsigned int *v29; // rdx
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  _QWORD *v33; // rsi
  unsigned int v34; // r15d
  int v35; // eax
  unsigned int *v36; // rdx
  __int64 v37; // rax
  unsigned int *v38; // rcx
  int v39; // eax
  unsigned int *v40; // rdx
  unsigned int v41; // eax
  unsigned __int64 v42; // [rsp+28h] [rbp-59h]
  unsigned __int64 v43; // [rsp+30h] [rbp-51h]
  LPVOID pv; // [rsp+60h] [rbp-21h] BYREF
  _DWORD *v45; // [rsp+68h] [rbp-19h] BYREF
  struct _GUID v46; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]
  _QWORD *v48; // [rsp+D0h] [rbp+4Fh] BYREF
  unsigned int v49; // [rsp+D8h] [rbp+57h]
  int v50; // [rsp+E0h] [rbp+5Fh]
  struct _GUID *v51; // [rsp+E8h] [rbp+67h]
  void *Src; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list Srca; // [rsp+F0h] [rbp+6Fh]
  struct PacketSizeConstraints *v54; // [rsp+F8h] [rbp+77h]
  __int64 v55; // [rsp+100h] [rbp+7Fh]
  unsigned __int64 v56; // [rsp+108h] [rbp+87h] BYREF
  va_list va1; // [rsp+108h] [rbp+87h]
  unsigned int *v58; // [rsp+110h] [rbp+8Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+8Fh]
  unsigned int *v60; // [rsp+118h] [rbp+97h]
  unsigned int *v61; // [rsp+120h] [rbp+9Fh] BYREF
  va_list va3; // [rsp+120h] [rbp+9Fh]
  unsigned int *v63; // [rsp+128h] [rbp+A7h] BYREF
  va_list va4; // [rsp+128h] [rbp+A7h]
  unsigned int *v65; // [rsp+130h] [rbp+AFh]
  va_list va5; // [rsp+138h] [rbp+B7h] BYREF

  va_start(va5, a4);
  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(Srca, a4);
  Src = va_arg(va1, void *);
  v54 = va_arg(va1, struct PacketSizeConstraints *);
  v55 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v56 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v58 = va_arg(va3, unsigned int *);
  v60 = va_arg(va3, unsigned int *);
  va_copy(va4, va3);
  v61 = va_arg(va4, unsigned int *);
  va_copy(va5, va4);
  v63 = va_arg(va5, unsigned int *);
  v65 = va_arg(va5, unsigned int *);
  v51 = a4;
  v50 = a3;
  v49 = a2;
  v48 = a1;
  v5 = v56;
  if ( !v56 )
    v5 = 100000LL;
  v6 = (unsigned __int16 *)Src;
  v7 = (double)*((int *)Src + 1) * (double)(int)v5 / 10000000.0 + 0.5;
  v8 = v63;
  *v63 = (int)v7;
  *v61 = (int)v7;
  *v60 = (int)v7;
  v9 = v58;
  *v58 = (int)v7;
  v10 = *a1;
  *(_QWORD *)&v46.Data1 = 0LL;
  pv = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *))(v10 + 40))(a1, &pv);
  if ( v11 < 0 )
  {
    v25 = 526LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v11);
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v11;
  }
  if ( (unsigned int)GetClassFromEndpointId(pv) )
    goto LABEL_17;
  v12 = v54;
  if ( v54 && (v55 & 2) != 0 )
  {
    v46 = *v51;
    PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                   v54,
                                   *((_DWORD *)v6 + 2),
                                   v6[6],
                                   &v46,
                                   v5,
                                   v42,
                                   v43,
                                   (unsigned int *)&v48,
                                   (unsigned int *)Srca,
                                   (unsigned int *)va4,
                                   (unsigned int *)va2);
    v11 = PacketSizesFromConstraints;
    if ( PacketSizesFromConstraints >= 0 )
    {
      v27 = (unsigned int)v48;
      *v8 = (unsigned int)v48;
      v28 = v61;
      *v61 = v27;
      v29 = v60;
      *v60 = v27;
      *v9 = v27;
      if ( !a3 && !v56 )
      {
        *v29 = (unsigned int)Src;
        *v28 = (unsigned int)v63;
        if ( v49 != 1 || (v30 = (unsigned int)v58, !*(_BYTE *)v12) )
          v30 = *v9;
        *v8 = v30;
      }
      goto LABEL_17;
    }
    v25 = 547LL;
    goto LABEL_34;
  }
  v13 = v6[8] + 64;
  v14 = CoTaskMemAlloc(v13);
  v15 = v14;
  v45 = v14;
  if ( !v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v45);
    if ( pv )
      CoTaskMemFree(pv);
    return 2147942414LL;
  }
  *v14 = v6[8] + 64;
  v14[1] = GetSessionIdFromEndpointId(pv);
  v15[2] = v50;
  *(struct _GUID *)(v15 + 3) = *v51;
  memcpy_0(v15 + 11, v6, v6[8] + 18LL);
  v16 = CheckConnectorSupportForPeriodicity(v48, v49, v15, v13, v5);
  v17 = v16;
  if ( v16 < 0 )
  {
    if ( v16 == -2005139404 )
    {
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v45);
      if ( pv )
        CoTaskMemFree(pv);
      return 2289827892LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v16);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v45);
    goto LABEL_23;
  }
  v19 = (unsigned int)Src;
  *v8 = (unsigned int)Src;
  v20 = v61;
  *v61 = v19;
  v21 = v60;
  *v60 = v19;
  *v9 = v19;
  if ( v50 || v56 )
    goto LABEL_16;
  if ( v12 )
  {
    v46 = *v51;
    v22 = GetPacketSizesFromConstraints(
            v12,
            *((_DWORD *)v6 + 2),
            v6[6],
            &v46,
            0x186A0uLL,
            (unsigned __int64)Srca,
            v43,
            v9,
            v21,
            v20,
            (unsigned int *)va3);
    v23 = v22;
    if ( v22 >= 0 )
    {
      if ( v49 != 1 || (v24 = (unsigned int)v61, !*(_BYTE *)v12) )
        v24 = *v9;
      *v8 = v24;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x269,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v22);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v45);
    if ( pv )
      CoTaskMemFree(pv);
    return v23;
  }
  if ( (v55 & 1) == 0 )
    goto LABEL_16;
  v31 = HnsToBlocksRU(0x61A8uLL, *((_DWORD *)v6 + 2), v6[6], (unsigned int *)va1);
  v17 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27A,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v31);
    CoTaskMemFree(v15);
LABEL_23:
    if ( pv )
      CoTaskMemFree(pv);
    return v17;
  }
  v32 = ((v56 - 1) & 0xFFFFFFE0) + 32;
  v33 = v48;
  v34 = v49;
  if ( v32 >= *v9 )
  {
LABEL_58:
    v36 = v61;
    goto LABEL_59;
  }
  LODWORD(v56) = ((v56 - 1) & 0xFFFFFFE0) + 32;
  LODWORD(v63) = v32;
  LODWORD(v58) = v32;
  while ( 1 )
  {
    if ( (int)CheckConnectorSupportForPeriodicity(
                v33,
                v34,
                v15,
                v13,
                (unsigned int)(int)((double)(int)v32 * 10000000.0 / (double)*((int *)v6 + 1) + 0.5)) < 0 )
    {
      v35 = (int)v63;
      goto LABEL_57;
    }
    v35 = (int)v58;
    if ( (_DWORD)v56 == (_DWORD)Src )
      break;
LABEL_57:
    v32 = v35 + 32;
    LODWORD(v56) = v32;
    LODWORD(v63) = v32;
    LODWORD(v58) = v32;
    if ( v32 >= *v9 )
      goto LABEL_58;
  }
  v36 = v61;
  *v61 = (unsigned int)Src;
LABEL_59:
  if ( *v36 < *v9 )
  {
    LOBYTE(v37) = 0;
    do
    {
      LODWORD(v56) = 32 * (1 << v37);
      v38 = v61;
      v39 = v56 * ((*v61 - 1) / (unsigned int)v56 + 1);
      LODWORD(v48) = v39;
      if ( v39 < *v9 )
      {
        if ( (int)CheckConnectorSupportForPeriodicity(
                    v33,
                    v34,
                    v15,
                    v13,
                    (unsigned int)(int)((double)v39 * 10000000.0 / (double)*((int *)v6 + 1) + 0.5)) >= 0
          && (_DWORD)Src == (_DWORD)v48 )
        {
          v40 = v60;
          *v60 = v56;
          v38 = v61;
          goto LABEL_68;
        }
        v38 = v61;
      }
      v37 = v46.Data1 + 1;
      *(_QWORD *)&v46.Data1 = v37;
    }
    while ( (int)v37 < 3 );
    v40 = v60;
LABEL_68:
    v41 = *v9;
    if ( *v40 == *v9 )
    {
      *v40 = v41;
      *v38 = v41;
    }
  }
LABEL_16:
  CoTaskMemFree(v15);
LABEL_17:
  *v65 = *v8;
  if ( *v8 > *v9 )
    *v8 = *v9;
  if ( pv )
    CoTaskMemFree(pv);
  return 0LL;
}
