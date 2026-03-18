/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00F64B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C001AF04 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0044438 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C004450C (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0046580 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00465F8 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00466A8 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00F6D10 (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00F6FB0 (VidSchiGetNumFlipAllocAttribs.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, unsigned int *a2, size_t a3)
{
  size_t v3; // r15
  unsigned int *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rdi
  int v11; // ebx
  unsigned int NumHistoryLayersUsed; // eax
  unsigned int v13; // ebx
  int NumFlipAllocAttribs; // eax
  __int64 v15; // r11
  unsigned int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r12
  char *v22; // r12
  int v23; // r13d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // rdx
  char *v28; // r10
  unsigned int *v29; // r15
  unsigned int v30; // r13d
  __int64 v31; // rcx
  char *v32; // r11
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  bool v37; // zf
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // r13d
  __int64 v41; // rdi
  unsigned int v42; // edx
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // eax
  char v46; // cl
  unsigned int v47; // r9d
  char v48; // cl
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  unsigned int v59; // r8d
  __int64 v60; // rdx
  unsigned int *v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  unsigned int i; // r9d
  __int64 v65; // r8
  __int64 v66; // r10
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  int v72; // [rsp+30h] [rbp-69h]
  unsigned int v73; // [rsp+34h] [rbp-65h]
  unsigned int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-61h]
  unsigned int v75; // [rsp+3Ch] [rbp-5Dh]
  unsigned int NumOverlayPlanesUsed; // [rsp+40h] [rbp-59h]
  __int64 v77; // [rsp+48h] [rbp-51h]
  __int64 v78; // [rsp+58h] [rbp-41h]
  __int64 v79; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-31h]
  int v81; // [rsp+6Ch] [rbp-2Dh]
  __int64 v82; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v83; // [rsp+78h] [rbp-21h]
  unsigned int v84; // [rsp+80h] [rbp-19h]
  unsigned int v85; // [rsp+84h] [rbp-15h]
  int v86; // [rsp+88h] [rbp-11h]
  unsigned int v87; // [rsp+8Ch] [rbp-Dh]
  unsigned int v88; // [rsp+90h] [rbp-9h]
  char *v89; // [rsp+98h] [rbp-1h]
  __int64 v90; // [rsp+A0h] [rbp+7h]
  __int64 v91; // [rsp+100h] [rbp+67h]
  unsigned int v92; // [rsp+100h] [rbp+67h]
  unsigned int v93; // [rsp+100h] [rbp+67h]
  unsigned int v96; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2800LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 632);
  if ( v7 == 2 )
  {
    v9 = 16LL;
    v91 = *(_QWORD *)(v8 + 3024);
    v10 = (_QWORD *)(v91 + 560);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 3024), *v10, *((_DWORD *)v10 - 4) == 3, (__int64)(v10 - 4));
      v10 += 7;
      --v9;
    }
    while ( v9 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v91 + 496), v3);
  }
  else if ( v7 == 3 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 632), v11);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v11);
    v13 = *(_DWORD *)(a1 + 80);
    v73 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v13);
    LODWORD(v77) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v13);
    v15 = 4LL;
    v16 = (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 280 * NumFlipAllocAttribs;
    HIDWORD(v77) = v16 - (_DWORD)v4;
    v17 = v16 + 48 * v73 - (_DWORD)v4 + 48 * NumFlipQueueEntriesUsed;
    v92 = v16 + 48 * v73 - (_DWORD)v4;
    v90 = v17;
    if ( v3 >= v17 )
    {
      memset(v4, 0, v17);
      *v4 = v17;
      v4[1] = 3;
      v4[3] = VidSchiGetVSyncState(v8, *(_DWORD *)(a1 + 80));
      v18 = *(unsigned int *)(a1 + 80);
      v4[2] = v18;
      v4[37] = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(v4 + 35) = *(_QWORD *)(a1 + 96);
      *((_QWORD *)v4 + 16) = v77;
      v4[34] = v92;
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 < *(_DWORD *)(v8 + 40) )
      {
        v19 = *(_QWORD *)(v8 + 8 * v18 + 3200);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 16);
          if ( v20 )
          {
            VidSchiCaptureProcessName(v20, (_BYTE *)v4 + 16);
            v21 = v4[34];
            v4[8] = *(_DWORD *)(v19 + 4);
            v22 = (char *)v4 + v21;
            v89 = (char *)v4 + v4[33];
            v23 = -1;
            v80 = v4[2];
            v72 = 0;
            v96 = 0;
            v93 = 0;
            v79 = v8;
            while ( 1 )
            {
              v81 = v23;
              if ( v23 == *(_DWORD *)(v8 + 152) )
                break;
              FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v79);
              if ( FlipQueue )
              {
                v27 = 280LL * v25;
                v28 = (char *)FlipQueue + 1296;
                v29 = (unsigned int *)(v27 + v26 + 24);
                *(_DWORD *)(v27 + v26) = v23;
                v30 = v93;
                *(_DWORD *)(v27 + v26 + 4) = *((_DWORD *)FlipQueue + 14);
                *(_DWORD *)(v27 + v26 + 8) = *((_DWORD *)FlipQueue + 15);
                *(_DWORD *)(v27 + v26 + 12) = *((_DWORD *)FlipQueue + 16);
                *(_DWORD *)(v27 + v26 + 16) = *((_DWORD *)FlipQueue + 17);
                v31 = 64LL;
                *(_DWORD *)(v27 + v26 + 20) = *((_DWORD *)FlipQueue + 19);
                v32 = v89;
                v78 = 64LL;
                do
                {
                  v33 = *((_DWORD *)v28 - 31);
                  if ( v33 <= 0xC && (v34 = 4673, _bittest(&v34, v33)) )
                  {
                    *v29 = -1;
                  }
                  else
                  {
                    *v29 = v30;
                    v35 = 0;
                    v36 = *((_DWORD *)v28 - 24);
                    if ( (v36 & 1) == 0 )
                    {
                      do
                      {
                        if ( v35 >= *(_DWORD *)(v8 + 76) )
                          break;
                        ++v35;
                      }
                      while ( !_bittest(&v36, v35) );
                    }
                    v37 = v35 == *(_DWORD *)(v8 + 76);
                    v38 = 0;
                    v82 = v8;
                    if ( !v37 )
                      v38 = v35;
                    v39 = v30;
                    v40 = v96;
                    v75 = v38;
                    v41 = 6 * v39;
                    *(_DWORD *)&v22[8 * v41] = v96;
                    *(_DWORD *)&v22[8 * v41 + 44] ^= (*(_DWORD *)&v22[48 * v39 + 44] ^ **(_DWORD **)v28) & 0x3FF;
                    v83 = *(unsigned int **)v28;
                    v42 = *v83;
                    v43 = *v83 & 0x3FF;
                    v84 = v43;
                    if ( *(_BYTE *)(v8 + 156) )
                    {
                      v44 = (v42 >> 10) & 0x3FF;
                      v85 = v44;
                    }
                    else
                    {
                      v44 = 0;
                      v85 = 0;
                    }
                    v37 = !_BitScanForward((unsigned int *)&v45, v43);
                    v46 = -1;
                    v86 = 0;
                    if ( !v37 )
                      v46 = v45;
                    v47 = v46;
                    v48 = -1;
                    v37 = !_BitScanForward((unsigned int *)&v49, v44);
                    v87 = v47;
                    if ( !v37 )
                      v48 = v49;
                    v50 = v48;
                    v88 = v48;
                    while ( v43 || v44 )
                    {
                      if ( v47 < v50 )
                      {
                        v51 = 6LL * v40;
                        *(_QWORD *)&v32[8 * v51] = *(_QWORD *)(((unsigned __int64)(v86
                                                                                 + v75
                                                                                 * *(_DWORD *)(*(_QWORD *)v28 + 4LL)) << 6)
                                                             + *(_QWORD *)v28
                                                             + *(_DWORD *)(*(_QWORD *)v28 + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)v28 + 8LL) + 231) & 0xFFFFFFF8)
                                                             + 40);
                        v52 = *(_QWORD *)v28;
                        v53 = v86 * ((8 * *(_DWORD *)(*(_QWORD *)v28 + 8LL) + 231) & 0xFFFFFFF8);
                        ++v40;
                        *(_OWORD *)&v32[8 * v51 + 8] = *(_OWORD *)(v53 + *(_QWORD *)v28 + 160);
                        *(_OWORD *)&v32[8 * v51 + 24] = *(_OWORD *)(v53 + v52 + 176);
                        *(_DWORD *)&v32[8 * v51 + 40] = *(_DWORD *)(v53 + v52 + 192);
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v82);
                      v50 = v88;
                      v44 = v85;
                      v43 = v84;
                      v47 = v87;
                    }
                    *(_DWORD *)&v22[8 * v41 + 4] = *((_DWORD *)v28 - 31);
                    *(_DWORD *)&v22[8 * v41 + 8] = *((_DWORD *)v28 - 30);
                    v96 = v40;
                    *(_DWORD *)&v22[8 * v41 + 44] ^= (*(_DWORD *)&v22[8 * v41 + 44] ^ (*((_DWORD *)v28 - 26) << 10)) & 0x3C00;
                    v54 = *(_DWORD *)&v22[8 * v41 + 44];
                    *(_DWORD *)&v22[8 * v41 + 12] = *((_DWORD *)v28 - 24);
                    *(_QWORD *)&v22[8 * v41 + 16] = *((_QWORD *)v28 - 9);
                    *(_QWORD *)&v22[8 * v41 + 24] = *((_QWORD *)v28 - 8);
                    *(_DWORD *)&v22[8 * v41 + 36] = *((_DWORD *)v28 - 12);
                    v55 = v54 ^ (v54 ^ ((unsigned __int8)*(v28 - 100) << 18)) & 0x40000;
                    *(_DWORD *)&v22[8 * v41 + 44] = v55;
                    v22[8 * v41 + 40] = *(v28 - 88);
                    v22[8 * v41 + 41] = *(v28 - 84);
                    v56 = v55 ^ ((unsigned __int16)v55 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v28 - 10) << 10)) & 0x4000;
                    *(_DWORD *)&v22[8 * v41 + 44] = v56;
                    v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v28 - 10) << 10)) & 0x8000;
                    *(_DWORD *)&v22[8 * v41 + 44] = v57;
                    v58 = v57 ^ (v57 ^ (*((_DWORD *)v28 - 10) << 9)) & 0x10000;
                    v31 = v78;
                    *(_DWORD *)&v22[8 * v41 + 44] = v58;
                    v30 = v93 + 1;
                    *(_DWORD *)&v22[8 * v41 + 44] = v58 ^ (v58 ^ (*((_DWORD *)v28 - 10) << 9)) & 0x20000;
                    ++v93;
                  }
                  ++v29;
                  v28 += 1376;
                  v78 = --v31;
                }
                while ( v31 );
                v23 = v81;
                ++v72;
              }
              ++v23;
            }
            v4 = a2;
            v3 = a3;
          }
        }
      }
      v59 = 0;
      v4[14] = *(_DWORD *)(v8 + 2208);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 152);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v73;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 76);
            v59 < *(_DWORD *)(v8 + 40);
            v4[v60 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2792LL) + 128LL)
                                     + 4000 * v60
                                     + 1088) )
      {
        v60 = v59++;
      }
      v3 -= v90;
      v15 = 4LL;
      v4 = (unsigned int *)((char *)v4 + v90);
    }
    if ( v3 >= 0x40 )
    {
      v61 = v4;
      v62 = 4LL;
      v63 = (*(_DWORD *)(v8 + 6392) - 1) & 3;
      do
      {
        *(_QWORD *)v61 = *(_QWORD *)(v8 + 8 * v63 + 6400);
        v61[2] = *(_DWORD *)(v8 + 4 * v63 + 6432);
        v63 = ((_DWORD)v63 - 1) & 3;
        v61 += 4;
        --v62;
      }
      while ( v62 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 40); ++i )
    {
      v65 = *(_QWORD *)(v8 + 8LL * i + 3200);
      if ( v3 >= 0x160 && v65 )
      {
        v66 = 4LL;
        v67 = (*(_DWORD *)(v65 + 44236) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v65 + 8 * v67 + 44240);
          v68 = 10 * v67;
          v67 = ((_DWORD)v67 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v65 + 8 * v68 + 44272);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v65 + 8 * v68 + 44288);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v65 + 8 * v68 + 44304);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v65 + 8 * v68 + 44320);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v65 + 8 * v68 + 44336);
          v4 += 22;
          --v66;
        }
        while ( v66 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v69 = (*(_DWORD *)(v8 + 6032) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v69 + 6040);
        v70 = 10 * v69;
        v4 += 22;
        v69 = ((_DWORD)v69 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v70 + 6072);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v70 + 6088);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v70 + 6104);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v70 + 6120);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v70 + 6136);
        --v15;
      }
      while ( v15 );
    }
  }
  return 0LL;
}
