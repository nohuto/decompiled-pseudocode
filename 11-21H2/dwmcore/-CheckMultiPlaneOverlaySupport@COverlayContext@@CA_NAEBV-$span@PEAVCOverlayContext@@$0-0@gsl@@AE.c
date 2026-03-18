/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x180013558
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180068C54 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003ED4C (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x180112C1E (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0dd_EventWriteTransfer @ 0x180112C80 (McTemplateU0dd_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x1801B8FD0 (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 */

unsigned __int8 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned __int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 *v6; // r14
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  __int64 v9; // r15
  int v10; // edx
  char *v11; // r13
  _QWORD **v12; // r12
  __int64 v13; // rcx
  _QWORD *v14; // r15
  char *v15; // rbx
  int v16; // eax
  __int128 v17; // xmm0
  int v18; // ecx
  __int128 v19; // xmm0
  _BYTE *v20; // r8
  _BYTE *v21; // rbx
  char *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  char *v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  _OWORD *v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int128 v35; // xmm6
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  unsigned __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdi
  _QWORD *v43; // rbx
  _BYTE *v45; // rcx
  __int64 v46; // r8
  _DWORD *v47; // rbx
  __int64 *v48; // rdx
  __int64 *v49; // r8
  __int64 v50; // rax
  char v51[4]; // [rsp+A0h] [rbp-80h] BYREF
  int v52; // [rsp+A4h] [rbp-7Ch]
  int v53; // [rsp+A8h] [rbp-78h]
  int v54; // [rsp+ACh] [rbp-74h]
  unsigned int v55; // [rsp+B0h] [rbp-70h]
  char *v56; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v57; // [rsp+C0h] [rbp-60h]
  unsigned int *v58; // [rsp+C8h] [rbp-58h]
  _QWORD **v59; // [rsp+D0h] [rbp-50h]
  __int64 v60; // [rsp+D8h] [rbp-48h]
  _BYTE *v61; // [rsp+E0h] [rbp-40h] BYREF
  _BYTE *v62; // [rsp+E8h] [rbp-38h]
  __int64 *v63; // [rsp+F0h] [rbp-30h]
  _BYTE v64[128]; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v65; // [rsp+178h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = *a2;
  v6 = (__int64 *)a1;
  v58 = a2;
  v7 = 0;
  v8 = v2 + 8 * v3;
  v51[0] = 0;
  v53 = 0;
  while ( v2 != v8 )
  {
    a1 = v5 + 1;
    if ( !*(_BYTE *)(*(_QWORD *)v2 + 11024LL) )
      a1 = v5;
    v2 += 8LL;
    v5 = a1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      a1,
      &EVTDESC_OVERLAY_CHECKSUPPORT_Start,
      CCommonRegistryData::m_dwOverlayTestMode < 4,
      v5);
  v9 = v5;
  v60 = v5;
  v11 = (char *)operator new(saturated_mul(v5, 0x90uLL));
  v12 = (_QWORD **)v6[1];
  v13 = 1LL;
  v59 = &v12[*v6];
  if ( v12 == v59 )
  {
LABEL_18:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 && v5 )
    {
      v47 = v11 + 88;
      do
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          McTemplateU0xqddddddddddddqqq_EventWriteTransfer(
            1,
            v10,
            *(_QWORD *)(v47 - 17),
            *(v47 - 14),
            *(v47 - 13),
            *(v47 - 12),
            *(v47 - 11),
            *(v47 - 10),
            *(v47 - 9),
            *(v47 - 8),
            *(v47 - 7),
            *(v47 - 6),
            *(v47 - 5),
            *(v47 - 4),
            *(v47 - 3),
            *(v47 - 2),
            *(v47 - 1),
            *v47,
            v47[5]);
          v13 = 1LL;
        }
        v47 += 36;
        --v9;
      }
      while ( v9 );
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
        v7 = 1;
    }
    else
    {
      if ( !*v6 )
      {
        gsl::details::terminate((gsl::details *)1);
        JUMPOUT(0x1800139EELL);
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)v6[1] + 184LL))(**(_QWORD **)v6[1]);
      v7 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *))(*(_QWORD *)v41 + 128LL))(v41, v11, v5, v51);
      if ( !v7 )
      {
        if ( v51[0] )
        {
          v48 = (__int64 *)v6[1];
          v13 = *v6;
          v49 = &v48[*v6];
          if ( v48 != v49 )
          {
            v13 = 1LL;
            do
            {
              v50 = *v48++;
              *(_BYTE *)(v50 + 11309) = 1;
            }
            while ( v48 != v49 );
          }
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = *v12;
      v52 = 0;
      v56 = (char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 184LL))(*v14);
      v54 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v56 + 56LL))(v56);
      v61 = v64;
      v62 = v64;
      v63 = &v65;
      COverlayContext::GetContextCandidates(v14, v58, &v61);
      if ( *((_BYTE *)v14 + 11024) )
      {
        v15 = &v11[144 * v4];
        memset_0(v15, 0, 0x90uLL);
        (*(void (__fastcall **)(char *, _DWORD *))(*(_QWORD *)v56 + 160LL))(v56, (_DWORD *)v15 + 2);
        v16 = v54;
        *(_DWORD *)v15 = 0;
        *((_DWORD *)v15 + 7) = 0;
        v17 = *((_OWORD *)v14 + 682);
        v18 = 1;
        v52 = 1;
        *((_OWORD *)v15 + 2) = v17;
        *((_OWORD *)v15 + 3) = *((_OWORD *)v14 + 683);
        *((_OWORD *)v15 + 4) = *((_OWORD *)v14 + 684);
        *((_OWORD *)v15 + 5) = *((_OWORD *)v14 + 685);
        *((_OWORD *)v15 + 6) = *((_OWORD *)v14 + 686);
        *((_OWORD *)v15 + 7) = *((_OWORD *)v14 + 687);
        v19 = *((_OWORD *)v14 + 688);
        *((_DWORD *)v15 + 4) = v16;
        *((_OWORD *)v15 + 8) = v19;
      }
      else
      {
        v18 = v52;
      }
      v20 = v62;
      v21 = v61;
      v55 = 0;
      if ( (v62 - v61) >> 3 )
        break;
LABEL_12:
      v53 += v18;
      v40 = (v20 - v21) >> 3;
      if ( v40 )
      {
        detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v61,
          0LL,
          v40);
        v21 = v61;
      }
      v61 = 0LL;
      if ( v21 == v64 )
        v21 = 0LL;
      DefaultHeap::Free(v21);
      if ( ++v12 == v59 )
      {
        v9 = v5;
        v13 = 1LL;
        goto LABEL_18;
      }
      v4 = v53;
    }
    v22 = v56;
    v57 = 0LL;
    v23 = (unsigned int)(v18 + v53);
    v54 = v18 + v53;
    while ( 1 )
    {
      v56 = &v11[144 * v23];
      memset_0(v56, 0, 0x90uLL);
      v24 = *(_QWORD *)&v21[8 * v57];
      v25 = v56;
      if ( (*(int (__fastcall **)(char *, _QWORD, char *, char *))(*(_QWORD *)v22 + 168LL))(
             v22,
             *(_QWORD *)(v24 + 16),
             v56 + 8,
             v56 + 28) < 0 )
        break;
      v26 = (__int64)v61;
      v27 = v57;
      *(_QWORD *)(v56 + 20) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v61[8 * v57] + 16LL) + 40LL);
      v28 = *(_OWORD **)(v26 + 8 * v27);
      v29 = v28[2];
      v30 = v28[3];
      v31 = v28[4];
      v32 = v28[5];
      v33 = v28[6];
      v34 = v28[7];
      v35 = v28[8];
      LODWORD(v28) = v55;
      *((_OWORD *)v25 + 2) = v29;
      LODWORD(v28) = (_DWORD)v28 + 1;
      *((_OWORD *)v25 + 3) = v30;
      v55 = (unsigned int)v28;
      *((_OWORD *)v25 + 4) = v31;
      *(_DWORD *)v25 = (_DWORD)v28;
      *((_OWORD *)v25 + 5) = v32;
      *((_OWORD *)v25 + 6) = v33;
      *((_OWORD *)v25 + 7) = v34;
      *((_OWORD *)v25 + 8) = v35;
      v36 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v22 + 56LL))(v22);
      v37 = v52;
      v38 = v54;
      v39 = v55;
      v20 = v62;
      *((_DWORD *)v25 + 4) = v36;
      v21 = v61;
      v18 = v37 + 1;
      v23 = (unsigned int)(v38 + 1);
      v52 = v18;
      v54 = v23;
      v57 = v39;
      if ( v39 >= (v20 - v61) >> 3 )
        goto LABEL_12;
    }
    v45 = v61;
    v46 = (v62 - v61) >> 3;
    if ( v46 )
    {
      detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v61,
        0LL,
        v46);
      v45 = v61;
    }
    v61 = 0LL;
    if ( v45 == v64 )
      v45 = 0LL;
    DefaultHeap::Free(v45);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0d_EventWriteTransfer(v13, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, v7);
  if ( v11 )
  {
    if ( v5 )
    {
      v42 = v60;
      v43 = v11 + 8;
      do
      {
        if ( *v43 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 16LL))(*v43);
        v43 += 18;
        --v42;
      }
      while ( v42 );
    }
    DefaultHeap::Free(v11);
  }
  return v7;
}
