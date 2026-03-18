/*
 * XREFs of ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAI@Z @ 0x180079D0C
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x180079B74 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x18007A044 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 *     ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18007A10C (-DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x18012FB34 (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18012FC8E (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer @ 0x1801DF4D8 (McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COverlayContext::PresentMPO(
        COverlayContext *this,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int *v10; // r12
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  BOOL v18; // ecx
  const void *updated; // rax
  unsigned int v20; // ecx
  int v21; // r14d
  char *v22; // r12
  unsigned int j; // r15d
  __int64 v24; // rdx
  __int64 v25; // rax
  HANDLE v26; // rax
  int v28; // r13d
  void *v29; // r11
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rbx
  __int64 v33; // rax
  int *v34; // r12
  int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r10d
  char v38; // r9
  unsigned int v39; // ecx
  _DWORD *v40; // rax
  unsigned int v41; // ecx
  _DWORD *v42; // rax
  unsigned int v43; // r12d
  _DWORD *v44; // r14
  int v45; // r10d
  int v46; // r11d
  int v47; // eax
  char v48; // bl
  __int64 i; // rbx
  _QWORD *v50; // rcx
  char v51; // al
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r9
  char *v55; // r8
  __int128 v56; // xmm1
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  __int64 v59; // rdi
  int v60; // [rsp+48h] [rbp-100h]
  int v61; // [rsp+58h] [rbp-F0h]
  int v62; // [rsp+68h] [rbp-E0h]
  char v63; // [rsp+B0h] [rbp-98h]
  unsigned int v64; // [rsp+B4h] [rbp-94h]
  int v65; // [rsp+B4h] [rbp-94h]
  unsigned int v66; // [rsp+B8h] [rbp-90h]
  int v67; // [rsp+BCh] [rbp-8Ch]
  __int64 v68; // [rsp+C0h] [rbp-88h]
  int v69; // [rsp+C0h] [rbp-88h]
  __int64 v70; // [rsp+C8h] [rbp-80h]
  __int64 v71; // [rsp+C8h] [rbp-80h]
  unsigned int v72; // [rsp+D0h] [rbp-78h]
  void *v74; // [rsp+D8h] [rbp-70h]
  unsigned int v76; // [rsp+E8h] [rbp-60h]
  _DWORD *lpMem; // [rsp+F0h] [rbp-58h]
  void *retaddr; // [rsp+148h] [rbp+0h]

  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5);
  v76 = v7;
  LODWORD(v8) = 0;
  v9 = 0;
  v74 = 0LL;
  v64 = 0;
  *a5 = 0;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( !(_DWORD)v7 && !*((_BYTE *)this + 11025) )
  {
    v10 = (unsigned int *)((char *)this + 11280);
    v9 = *((_DWORD *)this + 2820) + 1;
    v11 = 136LL * v9;
    if ( !is_mul_ok(v9, 0x88uLL) )
      v11 = -1LL;
    ProcessHeap = GetProcessHeap();
    lpMem = HeapAlloc(ProcessHeap, 0, v11);
    v13 = lpMem;
    if ( !lpMem )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    memset_0(lpMem, 0, 136LL * v9);
    v16 = 0;
    if ( v9 )
    {
      v15 = (__int64)lpMem;
      do
      {
        *(_DWORD *)v15 = v16++;
        v15 += 136LL;
      }
      while ( v16 < v9 );
    }
    lpMem[1] = 1;
    *(_OWORD *)(lpMem + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(lpMem + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(lpMem + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(lpMem + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(lpMem + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(lpMem + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(lpMem + 30) = *((_OWORD *)this + 688);
    v17 = (__int64)(a4[1] - *a4) >> 4;
    lpMem[21] = v17;
    if ( (_DWORD)v17 )
      *((_QWORD *)lpMem + 11) = *a4;
    goto LABEL_11;
  }
  v28 = v7;
  v66 = v7 + 1;
  v10 = (unsigned int *)((char *)this + 11280);
  if ( (int)v7 + 1 <= (unsigned int)(*((_DWORD *)this + 2820) + 1) )
    v28 = *((_DWORD *)this + 2820);
  v8 = (unsigned int)(v28 + 1);
  lpMem = operator new(saturated_mul(v8, 0x88uLL));
  v13 = lpMem;
  memset_0(lpMem, 0, 136 * v8);
  v29 = operator new(saturated_mul(v8, 4uLL));
  v74 = v29;
  if ( *((_BYTE *)this + 11024) )
  {
    *lpMem = 0;
    lpMem[4] = 0;
    lpMem[1] = 1;
    *(_OWORD *)(lpMem + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(lpMem + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(lpMem + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(lpMem + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(lpMem + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(lpMem + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(lpMem + 30) = *((_OWORD *)this + 688);
    v30 = (__int64)(a4[1] - *a4) >> 4;
    lpMem[21] = v30;
    if ( (_DWORD)v30 )
      *((_QWORD *)lpMem + 11) = *a4;
    goto LABEL_39;
  }
  if ( *((_BYTE *)this + 11296) )
  {
    *lpMem = 0;
    lpMem[1] = 0;
LABEL_39:
    *((_QWORD *)lpMem + 1) = 0LL;
    v9 = 1;
  }
  if ( (_DWORD)v7 )
  {
    v68 = 0LL;
    v31 = 1;
    v32 = 0LL;
    v67 = 1;
    while ( 1 )
    {
      v33 = *((_QWORD *)this + 913);
      v72 = v31;
      if ( *(_BYTE *)(v33 + v32 + 184) )
      {
        v63 = *(_BYTE *)(v33 + v32 + 181);
        v70 = *(_QWORD *)(v33 + v32 + 16);
        *(_DWORD *)(*((_QWORD *)this + 913) + v32 + 188) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 304LL))(v70);
        *(_DWORD *)(*((_QWORD *)this + 913) + v32 + 208) = v31;
        *(_BYTE *)(*((_QWORD *)this + 913) + v32 + 181) = 0;
        *(_DWORD *)(*((_QWORD *)this + 913) + v32 + 216) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 288LL))(v70);
        v34 = &lpMem[34 * v9];
        *v34 = v31;
        v34[1] = 1;
        v35 = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)a2 + 184LL))(
                a2,
                v70,
                v34 + 2,
                v34 + 4);
        v21 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v35, 0xACCu, 0LL);
          goto LABEL_22;
        }
        v36 = *((_QWORD *)this + 913);
        *(_OWORD *)(v34 + 6) = *(_OWORD *)(v36 + v32 + 32);
        *(_OWORD *)(v34 + 10) = *(_OWORD *)(v36 + v32 + 48);
        *(_OWORD *)(v34 + 14) = *(_OWORD *)(v36 + v32 + 64);
        *(_OWORD *)(v34 + 18) = *(_OWORD *)(v36 + v32 + 80);
        *(_OWORD *)(v34 + 22) = *(_OWORD *)(v36 + v32 + 96);
        *(_OWORD *)(v34 + 26) = *(_OWORD *)(v36 + v32 + 112);
        *(_OWORD *)(v34 + 30) = *(_OWORD *)(v36 + v32 + 128);
        if ( !v63 )
          v34[21] = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v70 + 296LL))(v70, v34 + 22);
        v31 = v67;
        if ( (unsigned int)(v67 - 1) < 2 )
        {
          v15 = (__int64)this + 1104 * *((int *)this + 4490);
          *(_BYTE *)(v15 + v68 + 11816) = 1;
        }
        v29 = v74;
        ++v9;
      }
      else
      {
        *((_DWORD *)v29 + v64) = v31;
        v15 = ++v64;
      }
      v68 += 480LL;
      ++v31;
      v32 += 224LL;
      v67 = v31;
      if ( v72 >= v76 )
      {
        v10 = (unsigned int *)((char *)this + 11280);
        break;
      }
    }
  }
  v37 = v66;
  v14 = 1LL;
  if ( v66 < (unsigned int)v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = 0;
        v39 = 0;
        if ( v9 )
        {
          v40 = lpMem;
          while ( *v40 != (_DWORD)v14 )
          {
            ++v39;
            v40 += 34;
            if ( v39 >= v9 )
              goto LABEL_61;
          }
          v14 = (unsigned int)(v14 + 1);
          v38 = 1;
        }
LABEL_61:
        v41 = 0;
        if ( !v64 )
          break;
        v42 = v29;
        while ( *v42 != (_DWORD)v14 )
        {
          ++v41;
          ++v42;
          if ( v41 >= v64 )
            goto LABEL_65;
        }
        v14 = (unsigned int)(v14 + 1);
      }
LABEL_65:
      if ( !v38 )
      {
        ++v37;
        v15 = 136LL * v9++;
        *(_DWORD *)((char *)lpMem + v15 + 4) = 0;
        *(_DWORD *)((char *)lpMem + v15) = v14;
        if ( v37 >= (unsigned int)v8 )
          break;
      }
    }
  }
LABEL_11:
  if ( v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0d_EventWriteTransfer(v15, &EVTDESC_OVERLAY_PRESENT_Start, v9);
    v18 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
      v18 = (Microsoft_Windows_Dwm_CompositorEnableBits & 1) == 0;
    if ( !v18 )
    {
      v43 = 0;
      v44 = v13 + 20;
      do
      {
        v45 = 0;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        if ( *((_QWORD *)v44 - 9) )
        {
          for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
          {
            if ( *(_DWORD *)(i + 208) == *(v44 - 20) )
            {
              v50 = *(_QWORD **)(i + 16);
              v71 = v50[5];
              v69 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v50 + 64LL))(v50, v14);
              v65 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 304LL))(*(_QWORD *)(i + 16));
              v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 288LL))(*(_QWORD *)(i + 16));
              v45 = v71;
              v48 = v51;
              v47 = v65;
              v46 = v69;
              goto LABEL_77;
            }
          }
          v47 = 0;
          v48 = 0;
        }
LABEL_77:
        if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        {
          v52 = 34LL * v43;
          McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer(
            v52 * 4 + (_DWORD)v13 + 60,
            v47,
            v45,
            v46,
            v47,
            v48,
            *(v44 - 19),
            *(v44 - 20),
            *(v44 - 14),
            v60,
            (__int64)&v13[v52 + 7],
            v61,
            (__int64)&v13[v52 + 11],
            v62,
            (__int64)&v13[v52 + 15],
            *(v44 - 1),
            *v44,
            v44[5]);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer(
            v18,
            v14,
            *((_QWORD *)v44 - 9),
            *(v44 - 19),
            *(v44 - 20),
            *(v44 - 14),
            *(v44 - 13),
            *(v44 - 12),
            *(v44 - 11),
            *(v44 - 10),
            *(v44 - 9),
            *(v44 - 8),
            *(v44 - 7),
            *(v44 - 6),
            *(v44 - 5),
            *(v44 - 4),
            *(v44 - 3),
            *(v44 - 2),
            *(v44 - 1),
            *v44,
            v44[5]);
        ++v43;
        v44 += 34;
      }
      while ( v43 < v9 );
    }
    *a5 = v9;
    updated = COverlayContext::UpdateHDRMetaData(this);
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, const void *, _DWORD *, unsigned int))(*(_QWORD *)a2 + 208LL))(
            a2,
            1LL,
            a3,
            *((unsigned int *)this + 3),
            updated,
            v13,
            v9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Stop);
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0xB7Fu, 0LL);
      goto LABEL_22;
    }
    v10 = (unsigned int *)((char *)this + 11280);
  }
  else
  {
    v21 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2003304309, 0xB8Au, 0LL);
  }
  *v10 = v76;
  *((_BYTE *)this + 11296) = *((_BYTE *)this + 11024);
  *((_BYTE *)this + 11305) = *((_BYTE *)this + 11025);
LABEL_22:
  v22 = (char *)this + 1104 * *((int *)this + 4490);
  for ( j = 0; ; ++j )
  {
    v24 = *((_QWORD *)this + 914);
    v25 = *((_QWORD *)this + 913);
    if ( j >= -1227133513 * (unsigned int)((v24 - v25) >> 5) || j >= 2 )
      break;
    v53 = 480LL * j;
    v54 = 224LL * j;
    v55 = &v22[v53 + 11568];
    *(_OWORD *)v55 = *(_OWORD *)(v25 + v54);
    *((_OWORD *)v55 + 1) = *(_OWORD *)(v25 + v54 + 16);
    *((_OWORD *)v55 + 2) = *(_OWORD *)(v25 + v54 + 32);
    *((_OWORD *)v55 + 3) = *(_OWORD *)(v25 + v54 + 48);
    *((_OWORD *)v55 + 4) = *(_OWORD *)(v25 + v54 + 64);
    *((_OWORD *)v55 + 5) = *(_OWORD *)(v25 + v54 + 80);
    *((_OWORD *)v55 + 6) = *(_OWORD *)(v25 + v54 + 96);
    *((_OWORD *)v55 + 7) = *(_OWORD *)(v25 + v54 + 112);
    *((_OWORD *)v55 + 8) = *(_OWORD *)(v25 + v54 + 128);
    *((_OWORD *)v55 + 9) = *(_OWORD *)(v25 + v54 + 144);
    *((_OWORD *)v55 + 10) = *(_OWORD *)(v25 + v54 + 160);
    *((_OWORD *)v55 + 11) = *(_OWORD *)(v25 + v54 + 176);
    *((_OWORD *)v55 + 12) = *(_OWORD *)(v25 + v54 + 192);
    v56 = *(_OWORD *)(v25 + v54 + 208);
    *(_QWORD *)&v22[v53 + 11800] = v55;
    *((_OWORD *)v55 + 13) = v56;
    v57 = *(_QWORD *)(*((_QWORD *)this + 913) + v54 + 16);
    *(_DWORD *)&v22[v53 + 11812] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 336LL))(v57);
  }
  while ( v25 != v24 )
  {
    *(_BYTE *)(v25 + 184) = 0;
    *(_BYTE *)(v25 + 181) = 0;
    v25 += 224LL;
  }
  if ( lpMem )
  {
    if ( (_DWORD)v8 )
    {
      v58 = lpMem + 2;
      v59 = (unsigned int)v8;
      do
      {
        if ( *v58 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 16LL))(*v58);
        v58 += 17;
        --v59;
      }
      while ( v59 );
    }
    v26 = GetProcessHeap();
    HeapFree(v26, 0, lpMem);
  }
  if ( v74 )
    operator delete(v74);
  return (unsigned int)v21;
}
