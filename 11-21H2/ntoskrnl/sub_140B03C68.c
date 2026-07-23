/*
 * XREFs of sub_140B03C68 @ 0x140B03C68
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056DA54 @ 0x14056DA54 (sub_14056DA54.c)
 *     sub_14057F9FC @ 0x14057F9FC (sub_14057F9FC.c)
 *     sub_14063A6C0 @ 0x14063A6C0 (sub_14063A6C0.c)
 *     sub_140829A28 @ 0x140829A28 (sub_140829A28.c)
 *     sub_140829ACC @ 0x140829ACC (sub_140829ACC.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_140829F84 @ 0x140829F84 (sub_140829F84.c)
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 *     sub_14082A324 @ 0x14082A324 (sub_14082A324.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 *     sub_140960278 @ 0x140960278 (sub_140960278.c)
 *     sub_140961464 @ 0x140961464 (sub_140961464.c)
 *     sub_140961490 @ 0x140961490 (sub_140961490.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     sub_1409783E8 @ 0x1409783E8 (sub_1409783E8.c)
 *     sub_1409DEEDC @ 0x1409DEEDC (sub_1409DEEDC.c)
 *     sub_140A545F8 @ 0x140A545F8 (sub_140A545F8.c)
 *     sub_140A59B28 @ 0x140A59B28 (sub_140A59B28.c)
 *     sub_140A59C88 @ 0x140A59C88 (sub_140A59C88.c)
 *     sub_140A59D28 @ 0x140A59D28 (sub_140A59D28.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 *     sub_140A69E6C @ 0x140A69E6C (sub_140A69E6C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B03BA8 @ 0x140B03BA8 (sub_140B03BA8.c)
 *     sub_140B2ED24 @ 0x140B2ED24 (sub_140B2ED24.c)
 *     sub_140B3023C @ 0x140B3023C (sub_140B3023C.c)
 */

ULONG sub_140B03C68()
{
  __int64 v0; // r13
  KPCR *Pcr; // rax
  const void *v2; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v4; // edi
  KPCR *v5; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int MaximumProcessorCount; // eax
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rsi
  _OWORD *v22; // r14
  __int64 v23; // rdx
  int started; // eax
  __int64 v25; // rcx
  int v26; // eax
  ULONG result; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  _OWORD *v34; // rdx
  __int128 v35; // xmm1
  unsigned int i; // edi
  _OWORD *v37; // rbx
  PVOID v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  _OWORD *v41; // rcx
  __int128 v42; // xmm1
  unsigned int v43; // ecx
  unsigned __int16 v44; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+68h] [rbp-A0h]
  unsigned int v52; // [rsp+6Ch] [rbp-9Ch]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v61[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v62; // [rsp+138h] [rbp+30h] BYREF
  __int64 v63; // [rsp+140h] [rbp+38h]
  __int64 v64; // [rsp+148h] [rbp+40h]
  _QWORD v65[3]; // [rsp+150h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+168h] [rbp+60h] BYREF

  memset(v61, 0, 0x78uLL);
  v0 = 0LL;
  v44 = 0;
  v45 = 0;
  Pcr = KeGetPcr();
  v47 = 0LL;
  v55 = 0LL;
  v2 = *(const void **)&Pcr[1].PcrAlign1[22];
  LODWORD(Pcr) = HIWORD(Pcr[1].PcrAlign1[21]) + 1;
  v54 = 0LL;
  v57 = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  v49 = 0LL;
  v59 = 0LL;
  v50 = 0LL;
  v60 = 0LL;
  v56 = 0LL;
  LODWORD(dword_140C54EE4) = (_DWORD)Pcr;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Pcr, 0x2020654Bu);
  qword_140D3CDC0 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_132;
  memmove(PoolWithTag, v2, (unsigned int)dword_140C54EE4);
  if ( (unsigned int)dword_140D06A14 > 0x800 )
    dword_140D06A14 = 2048;
  dword_140D06A9C = 1;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  if ( !byte_140C4AD98 )
    sub_140960278();
  v4 = HalEnumerateProcessors(dword_140D06A14);
  if ( dword_140D06A08 && dword_140D06A08 < v4 )
    v4 = dword_140D06A08;
  if ( dword_140D06ABC && dword_140D06ABC < v4 )
    v4 = dword_140D06ABC;
  v5 = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  if ( (int)sub_140A59B28((__int64)CurrentPrcb, 0LL) < 0 )
    goto LABEL_132;
  if ( !sub_140829ACC((_QWORD *)CurrentPrcb + 4411, 0LL) )
    goto LABEL_132;
  v62 = *(_QWORD *)&KeGetPcr()[89].PcrAlign1[6] + 80LL;
  if ( !sub_140829ACC(&v62, 0LL) )
    goto LABEL_132;
  v8 = *(_QWORD *)((char *)v5->NtTib.StackBase + 36);
  v46 = v8;
  if ( byte_140E01840 )
    v46 = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !sub_140829ACC(&v46, 0LL) )
    goto LABEL_132;
  v9 = *(_QWORD *)((char *)v5->NtTib.StackBase + 44);
  v46 = v9;
  if ( byte_140E01840 )
    v46 = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !sub_140829ACC(&v46, 0LL) )
    goto LABEL_132;
  v10 = *(_QWORD *)((char *)v5->NtTib.StackBase + 52);
  v46 = v10;
  if ( byte_140E01840 )
    v46 = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !sub_140829ACC(&v46, 0LL) )
    goto LABEL_132;
  v11 = *(_QWORD *)((char *)v5->NtTib.StackBase + 60);
  v46 = v11;
  if ( byte_140E01840 )
    v46 = *(_QWORD *)(v11 + 8) + 32LL;
  if ( !sub_140829ACC(&v46, 0LL) )
    goto LABEL_132;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v13 = *((_DWORD *)CurrentPrcb + 39);
  v14 = MaximumProcessorCount;
  v52 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x800 )
    v14 = 2048;
  v15 = dword_140D06A14 * *((_DWORD *)CurrentPrcb + 38) * v13;
  if ( v14 <= v15 )
    v15 = v14;
  if ( dword_140D06A08 && dword_140D06A08 < v15 )
    v15 = dword_140D06A08;
  if ( !KeDynamicPartitioningSupported && v15 > v4 )
    v15 = v4;
  if ( !(unsigned int)sub_140B3023C(v15) )
    goto LABEL_132;
  v16 = sub_140A545F8(v15, &v47, (_DWORD *)&v47 + 1);
  v65[0] = (unsigned int)v47;
  v65[1] = HIDWORD(v47);
  LODWORD(v48) = v16;
  if ( (int)sub_1403DEDD0() < 0 )
    goto LABEL_132;
  v17 = 0;
  do
  {
    v18 = 0xFFFFLL;
    if ( (unsigned int)dword_140D06884 >= v4 )
      break;
    v45 = -1;
    ++v7;
    v44 = -1;
    v51 = v7;
    if ( !(unsigned int)sub_1403C1A84(v7, &v45, &v44) )
    {
      memset(v61, 0, 0x78uLL);
      ++v17;
      v64 = sub_140829CBC(v16, v44, v65, 2u);
      v19 = v64;
      if ( !v64 )
        goto LABEL_132;
      if ( !sub_140829A28(v17, v44) )
        goto LABEL_132;
      v61[4] = sub_1402F4B70(0, v44, 0LL);
      if ( !v61[4] )
        goto LABEL_132;
      v61[5] = sub_1402F4B70(0, v44, 0LL);
      if ( !v61[5]
        || !sub_140829ACC(&v61[6], v44)
        || !sub_140829ACC(&v61[7], v44)
        || !sub_140829ACC(&v61[11], v44)
        || !sub_140829ACC(&v61[9], v44)
        || !sub_140829ACC(&v61[10], v44)
        || !sub_140829ACC(&v61[8], v44) )
      {
        goto LABEL_132;
      }
      v55 = 0LL;
      v20 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      v54 = 0LL;
      v53 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      if ( (_BYTE)byte_140E01841 )
      {
        if ( (int)sub_140961464(0LL, 2, 0LL, v44, &v55, &v61[12]) < 0 )
          goto LABEL_132;
        if ( (int)sub_140961464(0LL, 4, 0LL, v44, &v56, &v61[13]) < 0 )
          goto LABEL_132;
        if ( (int)sub_140961464(0LL, 3, 0LL, v44, &v57, &v54) < 0 )
          goto LABEL_132;
        if ( (int)sub_140961464(0LL, 3, 0LL, v44, &v58, &v53) < 0 )
          goto LABEL_132;
        if ( (int)sub_140961464(0LL, 3, 0LL, v44, &v59, &v49) < 0 )
          goto LABEL_132;
        if ( (int)sub_140961464(0LL, 3, 0LL, v44, &v60, &v50) < 0 )
          goto LABEL_132;
        v28 = (_QWORD *)sub_140829CBC(0x1000uLL, v44, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 1u);
        v61[14] = v28;
        v29 = v28;
        if ( !v28 )
          goto LABEL_132;
        memset(v28, 0, 0x1000uLL);
        v30 = v49;
        v0 = v53;
        v20 = v54;
        v29[1] = v53;
        v29[2] = v30;
        v29[3] = v50;
        v29[4] = v20;
        v16 = v48;
      }
      sub_1403C2638(v44, (__int64)&v61[2] + 4);
      LODWORD(v61[0]) = 0;
      HIDWORD(v61[0]) = v16;
      v63 = qword_140D31700[v44];
      LODWORD(v61[1]) = v44;
      v61[3] = v47;
      HIDWORD(v61[1]) = v17;
      LODWORD(v61[2]) = v15;
      v21 = sub_14082A324(BugCheckParameter1, (_QWORD *)qword_140D068D0, v19, (__int64)v61);
      if ( !v21 )
        goto LABEL_132;
      v22 = (_OWORD *)qword_140D31700[v44];
      if ( (unsigned int)sub_14082A2D4((_SLIST_HEADER *)v21)
        || !(unsigned int)sub_140A59E20(v21)
        || (int)sub_140A59B28(v21, v44) < 0
        || (int)sub_14082A0D8(v21, v23) < 0
        || (int)sub_140829F84(v21) < 0 )
      {
        goto LABEL_132;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v17, v45);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v17, v45);
      if ( started != 4 )
      {
        v31 = (unsigned __int64)*(unsigned __int8 *)(v21 + 208) << 6;
        dword_140D0E5E0[*(unsigned int *)(v21 + 36)] = 0;
        dword_140D105E0[*(unsigned __int8 *)(v21 + 209) + v31] = 0;
        *(_QWORD *)(v21 + 192) = 0LL;
        sub_14056DA54((unsigned __int16 *)&v61[2] + 2);
        v32 = v63;
        v33 = 2LL;
        v34 = (_OWORD *)v63;
        do
        {
          *v34 = *v22;
          v34[1] = v22[1];
          v34[2] = v22[2];
          v34[3] = v22[3];
          v34[4] = v22[4];
          v34[5] = v22[5];
          v34[6] = v22[6];
          v34 += 8;
          v35 = v22[7];
          v22 += 8;
          *(v34 - 1) = v35;
          --v33;
        }
        while ( v33 );
        *v34 = *v22;
        *((_QWORD *)v34 + 2) = *((_QWORD *)v22 + 2);
        qword_140D31700[v44] = v32;
        sub_140931100(v21, (SIZE_T)v34, (MEMORY_CACHING_TYPE)128);
        sub_14057F9FC(v21);
        sub_1409DEEDC(v21);
        sub_14063A6C0(v17);
        sub_140A69E6C(v21, (__int64)BugCheckParameter1);
        sub_14096ED20(v64, (unsigned int)v48);
        sub_1402C1900(v61[4], 0, 0LL);
        sub_1402C1900(v61[5], 0, 0LL);
        if ( v61[6] )
          sub_1409783E8(v61[6]);
        if ( v61[7] )
          sub_1409783E8(v61[7]);
        if ( v61[8] )
          sub_1409783E8(v61[8]);
        if ( v61[10] )
          sub_1409783E8(v61[10]);
        if ( v61[9] )
          sub_1409783E8(v61[9]);
        if ( v61[11] )
          sub_1409783E8(v61[11]);
        if ( v61[12] )
          sub_140961490(v55, 2, 0);
        if ( v61[13] )
          sub_140961490(v56, 4, 0);
        if ( v20 )
          sub_140961490(v57, 3, 0);
        if ( v0 )
          sub_140961490(v58, 3, 0);
        if ( v49 )
          sub_140961490(v59, 3, 0);
        if ( v50 )
          sub_140961490(v60, 3, 0);
        v18 = v61[14];
        if ( v61[14] )
          sub_14096ED20(v61[14], 0x1000uLL);
        break;
      }
      v0 = 0LL;
      while ( *(_QWORD *)(qword_140D068D0 + 136) )
        _mm_pause();
      sub_140A59D28(v21);
      sub_140A59C88(v17, *(unsigned __int8 *)(v21 + 208));
      v7 = v51;
      v16 = v48;
    }
  }
  while ( v7 < 0x7FF );
  if ( (unsigned __int16)word_140D05000 <= 1u )
  {
    if ( (unsigned int)sub_140B2ED24(v18) == (_DWORD)dword_140D06884 )
      goto LABEL_62;
LABEL_132:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
  {
    v37 = (_OWORD *)((char *)&unk_140D3DDC0 + 280 * i);
    if ( (_OWORD *)qword_140D31700[i] == v37 )
    {
      v38 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x2020654Bu);
      v39 = (__int64)v38;
      if ( !v38 )
        goto LABEL_132;
      memset(v38, 0, 0x140uLL);
      v40 = 2LL;
      v41 = (_OWORD *)v39;
      do
      {
        *v41 = *v37;
        v41[1] = v37[1];
        v41[2] = v37[2];
        v41[3] = v37[3];
        v41[4] = v37[4];
        v41[5] = v37[5];
        v41[6] = v37[6];
        v41 += 8;
        v42 = v37[7];
        v37 += 8;
        *(v41 - 1) = v42;
        --v40;
      }
      while ( v40 );
      *v41 = *v37;
      *((_QWORD *)v41 + 2) = *((_QWORD *)v37 + 2);
      qword_140D31700[i] = v39;
    }
  }
LABEL_62:
  if ( (unsigned __int16)word_140D05000 < 0x40u )
    memset(
      &qword_140D31700[(unsigned __int16)word_140D05000],
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)word_140D05000));
  sub_140B03BA8();
  LOBYTE(v25) = 1;
  sub_14042A5E0(v25, 0LL);
  if ( !dword_140D068E8 )
  {
    if ( !KeDynamicPartitioningSupported || v52 <= (unsigned int)dword_140D06884 )
    {
      v26 = dword_140D06884;
LABEL_67:
      dword_140D068E8 = v26;
      goto LABEL_68;
    }
    v43 = dword_140D06A14 * *(_DWORD *)(qword_140D088C0[0] + 152) * *(_DWORD *)(qword_140D088C0[0] + 156);
    dword_140D068E8 = v43;
    if ( v43 > dword_140D0503C * (unsigned int)(unsigned __int16)word_140D05018 )
    {
      dword_140D068E8 = dword_140D0503C * (unsigned __int16)word_140D05018;
      v43 = dword_140D0503C * (unsigned __int16)word_140D05018;
    }
    if ( v43 > v52 )
    {
      dword_140D068E8 = v52;
      v43 = v52;
    }
    v26 = 2048;
    if ( v43 > 0x800 )
      goto LABEL_67;
  }
LABEL_68:
  if ( !KeDynamicPartitioningSupported )
    word_140D05018 = word_140D05014;
  dword_140D06D50 = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  dword_140D06D4C = result;
  dword_140D06A9C = 0;
  return result;
}
