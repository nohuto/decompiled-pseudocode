/*
 * XREFs of ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z @ 0x180034834 (--0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N.c)
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ @ 0x180039708 (-ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1800EA32C (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0qqxxxxxxxxxxxxxx_EventWriteTransfer @ 0x1800FBF24 (McTemplateU0qqxxxxxxxxxxxxxx_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSurfaceManager::CapMaximumAllocations(
        DirectComposition::CSurfaceManager *this,
        char a2)
{
  DirectComposition::CSurfaceManager *v2; // r13
  char v3; // si
  ULONGLONG v4; // rdi
  int v5; // ecx
  int *v6; // rbx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  ULONGLONG v12; // rdi
  unsigned int v13; // r9d
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  char *v29; // rdx
  __int64 v30; // rax
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int64 v35; // xmm0_8
  __int64 v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // r14
  char *v39; // rax
  DirectComposition::CDynamicPoolSet *v40; // rcx
  struct DirectComposition::CAtlasSurface *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // rbp
  __int64 v47; // r12
  __int64 v48; // rcx
  __int64 v49; // r15
  int v50; // r13d
  int v51; // eax
  int v52; // edx
  char v53; // [rsp+80h] [rbp-F8h]
  char v54; // [rsp+88h] [rbp-F0h]
  char v56; // [rsp+98h] [rbp-E0h]
  char v57; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v59; // [rsp+B0h] [rbp-C8h]
  __int64 v60; // [rsp+B8h] [rbp-C0h]
  __int64 v61; // [rsp+C0h] [rbp-B8h]
  __int64 v62; // [rsp+C8h] [rbp-B0h]

  v2 = this;
  v3 = a2;
  v4 = GetTickCount64() & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v3 )
  {
    v5 = *((_DWORD *)v2 + 47);
    v6 = (int *)((char *)v2 + 184);
    *((_QWORD *)v2 + 25) = v4;
    *((_QWORD *)v2 + 36) = v4;
    if ( v5 && (v7 = (_QWORD *)(*((_QWORD *)v2 + 24) + 88LL * ((*v6 + v5 - 1) & 0x7F)), *v7 == v4) )
    {
      if ( v7[4] < *((_QWORD *)v2 + 40) )
      {
        v7[1] = *((_QWORD *)v2 + 37);
        v7[2] = *((_QWORD *)v2 + 38);
        v7[3] = *((_QWORD *)v2 + 39);
        v7[4] = *((_QWORD *)v2 + 40);
      }
      v8 = *((_QWORD *)v2 + 39) - *((_QWORD *)v2 + 40);
      if ( v7[5] < v8 )
        v7[5] = v8;
      if ( v7[9] < *((_QWORD *)v2 + 45) )
      {
        v7[6] = *((_QWORD *)v2 + 42);
        v7[7] = *((_QWORD *)v2 + 43);
        v7[8] = *((_QWORD *)v2 + 44);
        v7[9] = *((_QWORD *)v2 + 45);
      }
      v9 = *((_QWORD *)v2 + 44) - *((_QWORD *)v2 + 45);
      if ( v7[10] < v9 )
        v7[10] = v9;
    }
    else
    {
      v29 = (char *)*((_QWORD *)v2 + 24);
      if ( v29 || (v39 = (char *)DefaultHeap::Alloc(0x2C00uLL), *((_QWORD *)v2 + 24) = v39, (v29 = v39) != 0LL) )
      {
        v30 = *((unsigned int *)v2 + 47);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v37 = 88LL * (unsigned int)*v6;
          *(_OWORD *)&v29[v37] = *((_OWORD *)v2 + 18);
          *(_OWORD *)&v29[v37 + 16] = *((_OWORD *)v2 + 19);
          *(_OWORD *)&v29[v37 + 32] = *((_OWORD *)v2 + 20);
          *(_OWORD *)&v29[v37 + 48] = *((_OWORD *)v2 + 21);
          *(_OWORD *)&v29[v37 + 64] = *((_OWORD *)v2 + 22);
          *(_QWORD *)&v29[v37 + 80] = *((_QWORD *)v2 + 46);
          *v6 = ((unsigned __int8)*v6 + 1) & 0x7F;
        }
        else
        {
          v31 = *((_OWORD *)v2 + 19);
          v32 = *((_OWORD *)v2 + 20);
          v33 = *((_OWORD *)v2 + 21);
          v34 = *((_OWORD *)v2 + 22);
          v35 = *((_QWORD *)v2 + 46);
          v36 = 88 * v30;
          *(_OWORD *)&v29[v36] = *((_OWORD *)v2 + 18);
          *(_OWORD *)&v29[v36 + 16] = v31;
          *(_OWORD *)&v29[v36 + 32] = v32;
          *(_OWORD *)&v29[v36 + 48] = v33;
          *(_OWORD *)&v29[v36 + 64] = v34;
          *(_QWORD *)&v29[v36 + 80] = v35;
          ++*((_DWORD *)v2 + 47);
        }
      }
    }
  }
  v10 = *((_QWORD *)v2 + 40);
  v56 = v10;
  if ( !v10 )
  {
    v10 = 0LL;
    v56 = 0;
  }
  v11 = 0LL;
  v57 = 0;
  if ( *((_QWORD *)v2 + 45) )
  {
    v11 = *((_QWORD *)v2 + 45);
    v57 = v11;
  }
  v12 = v4 - 4000;
  v13 = 0;
  v14 = *((_DWORD *)v2 + 47) - 1;
  if ( v14 >= 0 )
  {
    v15 = *((_QWORD *)v2 + 24);
    v16 = v14 + *((_DWORD *)v2 + 46);
    do
    {
      v17 = 88LL * (v16 & 0x7F);
      if ( *(_QWORD *)(v17 + v15) < v12 )
        break;
      ++v13;
      if ( v10 < *(_QWORD *)(v17 + v15 + 32) )
        v10 = *(_QWORD *)(v17 + v15 + 32);
      if ( v11 < *(_QWORD *)(v17 + v15 + 72) )
        v11 = *(_QWORD *)(v17 + v15 + 72);
      LOBYTE(v16) = v16 - 1;
      --v14;
    }
    while ( v14 >= 0 );
    v57 = v11;
    v56 = v10;
  }
  v18 = *((_QWORD *)v2 + 31);
  v19 = *((_QWORD *)v2 + 26);
  v59 = v18;
  v58 = v19;
  if ( v13 >= 4 )
  {
    v20 = v11 + *((_QWORD *)v2 + 46);
    v21 = (unsigned int)(2 * *((_DWORD *)v2 + 31));
    v22 = (10 * v20) >> 7;
    if ( v22 >= v21 )
      v22 = (unsigned int)(2 * *((_DWORD *)v2 + 31));
    v18 = v22 + v20;
    v23 = v10 + *((_QWORD *)v2 + 41);
    v59 = v18;
    v24 = (10 * v23) >> 7;
    if ( v24 >= v21 )
      v24 = (unsigned int)(2 * *((_DWORD *)v2 + 31));
    v19 = v24 + v23;
    v58 = v24 + v23;
  }
  if ( v3 && (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
  {
    v42 = *((_QWORD *)v2 + 41);
    v43 = *((_QWORD *)v2 + 46);
    v44 = *((_QWORD *)v2 + 27);
    v45 = *((_QWORD *)v2 + 40);
    v60 = *((_QWORD *)v2 + 45);
    v61 = *((_QWORD *)v2 + 44);
    v46 = *((_QWORD *)v2 + 32);
    v62 = *((_QWORD *)v2 + 42);
    v47 = *((_QWORD *)v2 + 37);
    v48 = *(_QWORD *)(*((_QWORD *)v2 + 16) + 24LL);
    v49 = *((_QWORD *)v2 + 39);
    v50 = *(_DWORD *)(v48 + 416);
    v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v48 + 160) + 8LL))(*(_QWORD *)(v48 + 160));
    v54 = v42;
    v19 = v58;
    v53 = v43;
    v18 = v59;
    McTemplateU0qqxxxxxxxxxxxxxx_EventWriteTransfer(
      v62,
      v52,
      v51,
      v50 - 1,
      v62,
      v61,
      v60,
      v57,
      v59,
      v47,
      v49,
      v45,
      v56,
      v58,
      v46,
      v44,
      v53,
      v54);
    v2 = this;
    v3 = a2;
  }
  if ( v18 < *((_QWORD *)v2 + 31) )
  {
    v38 = (_QWORD *)((char *)v2 + 56);
    do
    {
      if ( (_QWORD *)*v38 == v38 )
        break;
      v41 = (struct DirectComposition::CAtlasSurface *)(*v38 - 48LL);
      if ( *v38 == 48LL )
        break;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0xqq_EventWriteTransfer(
          HIDWORD(*(_QWORD *)(*((_QWORD *)v41 + 8) + 152LL)),
          (unsigned int)&DCOMPEVENT_CAP_RELEASE_SURFACE,
          *((_QWORD *)v41 + 8),
          *(_QWORD *)(*((_QWORD *)v41 + 8) + 152LL),
          BYTE4(*(_QWORD *)(*((_QWORD *)v41 + 8) + 152LL)));
      DirectComposition::CSurfaceManager::DiscardLargeSurface(v2, v41);
    }
    while ( v18 < *((_QWORD *)v2 + 31) );
    v3 = a2;
  }
  if ( v19 < *((_QWORD *)v2 + 26) )
  {
    do
      v40 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v2 + 2);
    while ( v40
         && DirectComposition::CDynamicPoolSet::ReleaseOldestAvailableDynamicPool(v40)
         && v19 < *((_QWORD *)v2 + 26) );
  }
  if ( v3 )
  {
    v25 = *(_OWORD *)((char *)v2 + 216);
    *((_OWORD *)v2 + 18) = *(_OWORD *)((char *)v2 + 200);
    v26 = *(_OWORD *)((char *)v2 + 232);
    *((_OWORD *)v2 + 19) = v25;
    v27 = *(_OWORD *)((char *)v2 + 248);
    *((_OWORD *)v2 + 20) = v26;
    v28 = *(_OWORD *)((char *)v2 + 264);
    *((_OWORD *)v2 + 21) = v27;
    *(_QWORD *)&v27 = *((_QWORD *)v2 + 35);
    *((_OWORD *)v2 + 22) = v28;
    *((_QWORD *)v2 + 46) = v27;
    *((_QWORD *)v2 + 41) = *((_QWORD *)v2 + 39) - *((_QWORD *)v2 + 40);
    *((_QWORD *)v2 + 46) = *((_QWORD *)v2 + 44) - *((_QWORD *)v2 + 45);
  }
}
