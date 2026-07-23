/*
 * XREFs of sub_140A68BE8 @ 0x140A68BE8
 * Callers:
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056CC3C @ 0x14056CC3C (sub_14056CC3C.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 */

__int64 sub_140A68BE8()
{
  void *v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r9
  int *v5; // rdi
  int *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 result; // rax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rcx
  int *v34; // rax
  __int64 v35; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  unsigned int v43; // r8d
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  int v50; // ebx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  _OWORD *v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v72[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+80h] [rbp-88h]
  _QWORD v75[34]; // [rsp+88h] [rbp-80h] BYREF

  memset(v75, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v74) = 0;
  DeferredContext_4 = 0;
  v0 = (void *)*(unsigned int *)(qword_140C448A8 + 176);
  CurrentIrql = KeGetCurrentIrql();
  v2 = 2LL;
  __writecr8(2uLL);
  v3 = (unsigned int)LOBYTE(Dpc.Number) + 1;
  if ( dword_140D06B08
    && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)(LOBYTE(Dpc.Number) + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= ~((unsigned __int8)((unsigned __int64)((unsigned int)LOBYTE(Dpc.Number) + 1) << (LOBYTE(Dpc.Number) + 1 + CurrentIrql))
                            - (LOBYTE(Dpc.Number)
                             + 1)) & 4;
  }
  KeInitializeDpc((PRKDPC)&Dpc.DpcListEntry, (PKDEFERRED_ROUTINE)sub_140A687F0, &DeferredContext);
  v5 = dword_140D06E40;
  BYTE1(Dpc.DpcListEntry.Next) = 2;
  v6 = dword_140D06E40;
  v7 = v75;
  v8 = 2LL;
  do
  {
    v9 = *((_OWORD *)v6 + 1);
    *v7 = *(_OWORD *)v6;
    v10 = *((_OWORD *)v6 + 2);
    v7[1] = v9;
    v11 = *((_OWORD *)v6 + 3);
    v7[2] = v10;
    v12 = *((_OWORD *)v6 + 4);
    v7[3] = v11;
    v13 = *((_OWORD *)v6 + 5);
    v7[4] = v12;
    v14 = *((_OWORD *)v6 + 6);
    v7[5] = v13;
    v15 = *((_OWORD *)v6 + 7);
    v6 += 32;
    v7[6] = v14;
    v7 += 8;
    *(v7 - 1) = v15;
    v8 -= v3;
  }
  while ( v8 );
  *(_QWORD *)v7 = *(_QWORD *)v6;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v75, *(_DWORD *)(qword_140C448A8 + 180));
  v72[1] = (unsigned __int16 *)v75[1];
  v72[0] = (unsigned __int16 *)v75;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v72) )
  {
    if ( !v74 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v17 = *(unsigned int *)(qword_140C448A8 + 64);
  if ( (v17 & 0x20) != 0 && (int)sub_14042A5E0(v17, v16) < 0 )
  {
    v18 = qword_140C448A8;
    v19 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v19 )
      v19 = 2455;
    *(_DWORD *)(qword_140C448A8 + 33272) = v19;
    v20 = *(_DWORD *)(v18 + 33276);
    if ( !v20 )
      v20 = v3;
    *(_DWORD *)(v18 + 33276) = v20;
    v21 = v75;
    do
    {
      v22 = v21[1];
      *(_OWORD *)v5 = *v21;
      v23 = v21[2];
      *((_OWORD *)v5 + 1) = v22;
      v24 = v21[3];
      *((_OWORD *)v5 + 2) = v23;
      v25 = v21[4];
      *((_OWORD *)v5 + 3) = v24;
      v26 = v21[5];
      *((_OWORD *)v5 + 4) = v25;
      v27 = v21[6];
      *((_OWORD *)v5 + 5) = v26;
      v28 = v21[7];
      v21 += 8;
      *((_OWORD *)v5 + 6) = v27;
      v5 += 32;
      *((_OWORD *)v5 - 1) = v28;
      v2 -= v3;
    }
    while ( v2 );
LABEL_23:
    result = *(_QWORD *)v21;
    *(_QWORD *)v5 = result;
    return result;
  }
  sub_14042A5E0(0LL, *(_QWORD *)(qword_140C448A8 + 33160));
  sub_14056CC3C();
  v30 = sub_140A67C14(0);
  v32 = qword_140C448A8;
  *(_QWORD *)(qword_140C448A8 + 33280) = v30;
  _InterlockedAdd((volatile signed __int32 *)(v32 + 184), v3);
  while ( *(_DWORD *)(qword_140C448A8 + 184) < (int)v0 )
    _mm_pause();
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(qword_140C448A8 + 192), v3);
    while ( *(_DWORD *)(qword_140C448A8 + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v31) = v3;
    sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), v31);
    *(_DWORD *)(qword_140C448A8 + 33288) = sub_140A67C14(0);
  }
  v33 = v75;
  v34 = dword_140D06E40;
  v35 = 2LL;
  do
  {
    v36 = *((_OWORD *)v34 + 1);
    *v33 = *(_OWORD *)v34;
    v37 = *((_OWORD *)v34 + 2);
    v33[1] = v36;
    v38 = *((_OWORD *)v34 + 3);
    v33[2] = v37;
    v39 = *((_OWORD *)v34 + 4);
    v33[3] = v38;
    v40 = *((_OWORD *)v34 + 5);
    v33[4] = v39;
    v41 = *((_OWORD *)v34 + 6);
    v33[5] = v40;
    v42 = *((_OWORD *)v34 + 7);
    v34 += 32;
    v33[6] = v41;
    v33 += 8;
    *(v33 - 1) = v42;
    v35 -= v3;
  }
  while ( v35 );
  v43 = 0;
  *(_QWORD *)v33 = *(_QWORD *)v34;
  v44 = *(_QWORD *)(qword_140C448A8 + 16);
  if ( *(_DWORD *)(v44 + 8) )
  {
    do
    {
      v45 = v43;
      v43 += v3;
      *(_QWORD *)&dword_140D06E40[2 * v45 + 2] &= ~*(_QWORD *)(*(_QWORD *)v44 + 8 * v45);
    }
    while ( v43 < *(_DWORD *)(v44 + 8) );
  }
  v46 = qword_140C448A8;
  v47 = *(_QWORD *)(qword_140C448A8 + 16);
  *(_DWORD *)(qword_140C448A8 + 204) = 0;
  *(_DWORD *)(v46 + 200) = v3;
  if ( *(_DWORD *)(v47 + 16) )
  {
    v48 = sub_140A67C14(0);
    v49 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 33292) = v48;
    v50 = sub_14042A5E0((unsigned int)v3, *(_QWORD *)(v49 + 33160));
    v51 = sub_140A67C14(0);
    v52 = qword_140C448A8;
    *(_DWORD *)(qword_140C448A8 + 33296) = v51;
    if ( v50 < 0 )
    {
      v53 = *(_DWORD *)(v52 + 33272);
      if ( !v53 )
        v53 = 2540;
      *(_DWORD *)(v52 + 33272) = v53;
      v54 = *(_DWORD *)(v52 + 33276);
      if ( !v54 )
        v54 = v3;
      *(_DWORD *)(v52 + 33276) = v54;
      v21 = v75;
      do
      {
        v55 = v21[1];
        *(_OWORD *)v5 = *v21;
        v56 = v21[2];
        *((_OWORD *)v5 + 1) = v55;
        v57 = v21[3];
        *((_OWORD *)v5 + 2) = v56;
        v58 = v21[4];
        *((_OWORD *)v5 + 3) = v57;
        v59 = v21[5];
        *((_OWORD *)v5 + 4) = v58;
        v60 = v21[6];
        *((_OWORD *)v5 + 5) = v59;
        v61 = v21[7];
        v21 += 8;
        *((_OWORD *)v5 + 6) = v60;
        v5 += 32;
        *((_OWORD *)v5 - 1) = v61;
        v2 -= v3;
      }
      while ( v2 );
      goto LABEL_23;
    }
  }
  v62 = v75;
  do
  {
    v63 = v62[1];
    *(_OWORD *)v5 = *v62;
    v64 = v62[2];
    *((_OWORD *)v5 + 1) = v63;
    v65 = v62[3];
    *((_OWORD *)v5 + 2) = v64;
    v66 = v62[4];
    *((_OWORD *)v5 + 3) = v65;
    v67 = v62[5];
    *((_OWORD *)v5 + 4) = v66;
    v68 = v62[6];
    *((_OWORD *)v5 + 5) = v67;
    v69 = v62[7];
    v62 += 8;
    *((_OWORD *)v5 + 6) = v68;
    v5 += 32;
    *((_OWORD *)v5 - 1) = v69;
    v2 -= v3;
  }
  while ( v2 );
  *(_QWORD *)v5 = *(_QWORD *)v62;
  while ( 1 )
  {
    result = qword_140C448A8;
    if ( *(_DWORD *)(qword_140C448A8 + 204) >= *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
