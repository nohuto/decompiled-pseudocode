/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8
 * Callers:
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180147FD4 (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180162A54 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180163E48 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18016409C (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DiscoverPeriodicityCharacteristicsForFormat(__int64 *a1, int a2, int a3, struct _GUID *a4, ...)
{
  __int64 v6; // rcx
  unsigned int *v7; // r14
  double v8; // xmm1_8
  unsigned int *v9; // r13
  unsigned int *v10; // r15
  unsigned int *v11; // rsi
  __int64 (__fastcall *v12)(__int64 *, unsigned int **); // rbx
  int v13; // eax
  int v14; // edi
  unsigned int v15; // edi
  char *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  struct PacketSizeConstraints *v20; // r12
  int PacketSizesFromConstraints; // eax
  unsigned __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // eax
  int v27; // r12d
  int v28; // r12d
  unsigned int v29; // edi
  unsigned int v30; // r15d
  unsigned int *v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v34; // [rsp+28h] [rbp-61h]
  unsigned __int64 v35; // [rsp+30h] [rbp-59h]
  unsigned __int64 v36; // [rsp+38h] [rbp-51h]
  unsigned __int64 v37; // [rsp+68h] [rbp-21h]
  struct _GUID v38; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]
  __int64 *v40; // [rsp+D8h] [rbp+4Fh] BYREF
  int v41; // [rsp+E0h] [rbp+57h]
  int v42; // [rsp+E8h] [rbp+5Fh]
  struct _GUID *v43; // [rsp+F0h] [rbp+67h]
  void *Src; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list Srca; // [rsp+F8h] [rbp+6Fh]
  struct PacketSizeConstraints *v46; // [rsp+100h] [rbp+77h]
  __int64 v47; // [rsp+108h] [rbp+7Fh]
  __int64 v48; // [rsp+110h] [rbp+87h] BYREF
  va_list va1; // [rsp+110h] [rbp+87h]
  unsigned int *v50; // [rsp+118h] [rbp+8Fh] BYREF
  va_list va2; // [rsp+118h] [rbp+8Fh]
  unsigned int *v52; // [rsp+120h] [rbp+97h]
  unsigned int *v53; // [rsp+128h] [rbp+9Fh]
  unsigned int *v54; // [rsp+130h] [rbp+A7h]
  unsigned int *v55; // [rsp+138h] [rbp+AFh]
  va_list va3; // [rsp+140h] [rbp+B7h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(Srca, a4);
  Src = va_arg(va1, void *);
  v46 = va_arg(va1, struct PacketSizeConstraints *);
  v47 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v48 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v50 = va_arg(va3, unsigned int *);
  v52 = va_arg(va3, unsigned int *);
  v53 = va_arg(va3, unsigned int *);
  v54 = va_arg(va3, unsigned int *);
  v55 = va_arg(va3, unsigned int *);
  v43 = a4;
  v42 = a3;
  v41 = a2;
  v40 = a1;
  v6 = 100000LL;
  if ( v48 )
    v6 = v48;
  v37 = v6;
  v7 = (unsigned int *)Src;
  v8 = (double)(int)v6 * (double)*((int *)Src + 1) / 10000000.0 + 0.5;
  v9 = v54;
  *v54 = (int)v8;
  v10 = v53;
  *v53 = (int)v8;
  *v52 = (int)v8;
  v11 = v50;
  *v50 = (int)v8;
  v50 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, unsigned int **))(*a1 + 40);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)va2,
    0LL);
  v13 = v12(a1, (unsigned int **)va2);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x210,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_45;
  }
  if ( !(unsigned int)GetClassFromEndpointId(v50) )
  {
    v15 = *((unsigned __int16 *)v7 + 8) + 64;
    LODWORD(v54) = v15;
    v16 = (char *)CoTaskMemAlloc(v15);
    *(_QWORD *)&v38.Data1 = v16;
    if ( !v16 )
    {
      v14 = -2147024882;
      v17 = 535LL;
LABEL_47:
      v22 = (unsigned int)v14;
      goto LABEL_48;
    }
    *(_DWORD *)v16 = *((unsigned __int16 *)v7 + 8) + 64;
    *((_DWORD *)v16 + 1) = GetSessionIdFromEndpointId(v50);
    *((_DWORD *)v16 + 2) = v42;
    *(struct _GUID *)(v16 + 12) = *v43;
    memcpy_0(v16 + 44, v7, *((unsigned __int16 *)v7 + 8) + 18LL);
    v14 = CheckConnectorSupportForPeriodicity(v40, a2, (__int64)v16, v15, v37, (void **)Srca);
    if ( v14 < 0 )
    {
      if ( v14 == -2005139404 )
      {
        v14 = -2005139404;
        goto LABEL_49;
      }
      v17 = 548LL;
      goto LABEL_47;
    }
    v18 = (unsigned int)Src;
    *v9 = (unsigned int)Src;
    *v10 = v18;
    v19 = v52;
    *v52 = v18;
    *v11 = v18;
    if ( !v42 && !v48 )
    {
      v20 = v46;
      if ( v46 )
      {
        v38 = *v43;
        PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                       v46,
                                       v7[2],
                                       *((_WORD *)v7 + 6),
                                       &v38,
                                       v34,
                                       v35,
                                       v36,
                                       v11,
                                       v19,
                                       v10,
                                       (unsigned int *)&v40);
        v14 = PacketSizesFromConstraints;
        if ( PacketSizesFromConstraints < 0 )
        {
          v22 = (unsigned int)PacketSizesFromConstraints;
          v17 = 575LL;
LABEL_48:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)v22);
LABEL_49:
          if ( v16 )
            CoTaskMemFree(v16);
          goto LABEL_45;
        }
        if ( v41 != 1 || (v23 = (unsigned int)v40, !*(_BYTE *)v20) )
          v23 = *v11;
        *v9 = v23;
      }
      else if ( (_BYTE)v47 )
      {
        v24 = HnsToBlocksRU(0x61A8uLL, v7[2], *((unsigned __int16 *)v7 + 6), (unsigned int *)va1);
        v14 = v24;
        if ( v24 < 0 )
        {
          v22 = (unsigned int)v24;
          v17 = 592LL;
          goto LABEL_48;
        }
        v25 = ((v48 - 1) & 0xFFFFFFE0) + 32;
        v26 = *v11;
        if ( v25 < *v11 )
        {
          v27 = (int)v54;
          while ( (int)CheckConnectorSupportForPeriodicity(
                         v40,
                         v41,
                         (__int64)v16,
                         v27,
                         (unsigned int)(int)((double)(int)v25 * 10000000.0 / (double)(int)v7[1] + 0.5),
                         (void **)Srca) < 0
               || v25 != (_DWORD)Src )
          {
            v25 += 32;
            v26 = *v11;
            if ( v25 >= *v11 )
              goto LABEL_30;
          }
          *v10 = (unsigned int)Src;
          v26 = *v11;
        }
LABEL_30:
        if ( *v10 < v26 )
        {
          v28 = 0;
          while ( 1 )
          {
            v29 = 32 * (1 << v28);
            v30 = v29 * ((*v10 - 1) / v29 + 1);
            if ( v30 < *v11
              && (int)CheckConnectorSupportForPeriodicity(
                        v40,
                        v41,
                        (__int64)v16,
                        (int)v54,
                        (unsigned int)(int)((double)(int)v30 * 10000000.0 / (double)(int)v7[1] + 0.5),
                        (void **)Srca) >= 0
              && (_DWORD)Src == v30 )
            {
              v31 = v52;
              *v52 = v29;
              goto LABEL_39;
            }
            if ( ++v28 >= 3 )
              break;
            v10 = v53;
          }
          v31 = v52;
          v29 = *v52;
LABEL_39:
          v32 = *v11;
          if ( v29 == *v11 )
          {
            *v31 = v32;
            *v53 = v32;
          }
        }
      }
    }
    CoTaskMemFree(v16);
  }
  *v55 = *v9;
  if ( *v9 > *v11 )
    *v9 = *v11;
  v14 = 0;
LABEL_45:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)va2);
  return (unsigned int)v14;
}
