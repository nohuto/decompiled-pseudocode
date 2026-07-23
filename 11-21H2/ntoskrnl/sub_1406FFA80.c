/*
 * XREFs of sub_1406FFA80 @ 0x1406FFA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406859F8 @ 0x1406859F8 (sub_1406859F8.c)
 *     sub_1406A2200 @ 0x1406A2200 (sub_1406A2200.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 *     sub_1406FF050 @ 0x1406FF050 (sub_1406FF050.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 *     sub_140700048 @ 0x140700048 (sub_140700048.c)
 *     sub_1407000F8 @ 0x1407000F8 (sub_1407000F8.c)
 *     sub_140700158 @ 0x140700158 (sub_140700158.c)
 *     sub_1407001C8 @ 0x1407001C8 (sub_1407001C8.c)
 *     sub_1409B06C4 @ 0x1409B06C4 (sub_1409B06C4.c)
 */

__int64 __fastcall sub_1406FFA80(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // r13d
  __int64 v6; // rax
  struct _LIST_ENTRY *Blink; // rax
  LIST_ENTRY WaitListHead; // xmm1
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v10; // r14
  struct _LIST_ENTRY *v11; // r12
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edi
  int v18; // r13d
  int v19; // edx
  int v20; // r14d
  int v21; // esi
  int v22; // r12d
  volatile signed __int32 *v23; // rcx
  unsigned __int64 v24; // rdx
  bool v25; // zf
  struct _LIST_ENTRY *v26; // rcx
  struct _KTHREAD *v27; // rdx
  struct _LIST_ENTRY *v28; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  _QWORD *v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // eax
  ULONG_PTR v49; // rcx
  struct _KTHREAD *v50; // rdi
  int v51; // [rsp+20h] [rbp-E0h]
  struct _KTHREAD *v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+30h] [rbp-D0h]
  struct _LIST_ENTRY *v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+50h] [rbp-B0h]
  _QWORD v58[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+70h] [rbp-90h]
  LIST_ENTRY v60; // [rsp+80h] [rbp-80h]
  __int128 v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+A0h] [rbp-60h]
  LIST_ENTRY v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *v65; // [rsp+D0h] [rbp-30h]
  _OWORD v66[4]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v52 = CurrentThread;
  v56 = 0LL;
  v55 = 0LL;
  sub_1406FFEFC(Event, CurrentThread);
  v6 = *(_QWORD *)&Event[49].Header.Lock;
  if ( v6 )
  {
    v30 = *(_OWORD *)(v6 + 24);
    v66[0] = *(_OWORD *)(v6 + 8);
    v31 = *(_OWORD *)(v6 + 40);
    v66[1] = v30;
    v32 = *(_OWORD *)(v6 + 56);
    v66[2] = v31;
    v66[3] = v32;
  }
  else
  {
    memset(v66, 0, sizeof(v66));
  }
  Blink = Event[7].Header.WaitListHead.Blink;
  WaitListHead = Event[55].Header.WaitListHead;
  Flink = Event[25].Header.WaitListHead.Flink;
  v10 = Event[25].Header.WaitListHead.Blink;
  v11 = Event[6].Header.WaitListHead.Blink;
  v59 = *(_OWORD *)&Event[54].Header.WaitListHead.Blink;
  v12 = *(_OWORD *)&Event[56].Header.Lock;
  v57 = Blink;
  LODWORD(Blink) = HIDWORD(Event[22].Header.WaitListHead.Blink);
  v60 = WaitListHead;
  v13 = *(_OWORD *)&Event[56].Header.WaitListHead.Blink;
  v53 = (int)Blink;
  LODWORD(Blink) = Event[10].Header.WaitListHead.Blink;
  v61 = v12;
  v62 = v13;
  v14 = *(_OWORD *)&Event[58].Header.Lock;
  v63 = Event[57].Header.WaitListHead;
  v65 = Event[58].Header.WaitListHead.Blink;
  v64 = v14;
  if ( ((unsigned __int8)Blink & 4) != 0 )
    v54 = Event[9].Header.WaitListHead.Blink;
  else
    v54 = 0LL;
  sub_140700048(Event, &v56, &v55);
  sub_1406FFE90(v15, CurrentThread);
  v16 = 0x10000LL;
  v51 = 0;
  if ( *(_QWORD *)&v66[0] )
  {
    if ( (unsigned __int64)Flink + (unsigned __int64)v63.Flink > *(_QWORD *)&v66[0] )
      v4 = 0x10000;
    v51 = v4;
  }
  if ( *((_QWORD *)&v66[0] + 1) && (unsigned __int64)v10 + (unsigned __int64)v63.Blink > *((_QWORD *)&v66[0] + 1) )
  {
    v4 |= 0x20000u;
    v51 = v4;
  }
  if ( *(_QWORD *)&v66[1] && (unsigned __int64)v11 + *((_QWORD *)&v59 + 1) > *(_QWORD *)&v66[1] )
  {
    v4 |= 4u;
    v51 = v4;
  }
  if ( *(_OWORD *)((char *)&v66[1] + 8) != 0LL )
  {
    sub_1407001C8(Event, CurrentThread);
    v51 = sub_1406FF050(
            (__int64)Event,
            (unsigned __int64)Event[48].Header.WaitListHead.Blink,
            (unsigned __int64)Event[48].Header.WaitListHead.Blink
          + (unsigned __int64)Event[63].Header.WaitListHead.Blink,
            33280) | v4;
    sub_140700158(Event, CurrentThread);
  }
  v17 = DWORD2(v66[2]);
  v18 = DWORD1(v66[3]);
  if ( DWORD2(v66[2]) && *(_DWORD *)(a2 + 32) == DWORD1(v66[3]) && *(_DWORD *)(a2 + 44) >= DWORD2(v66[2]) )
  {
    v19 = sub_1406859F8(0) | v51;
    v51 = v19;
  }
  else
  {
    v19 = v51;
  }
  v20 = HIDWORD(v66[2]);
  if ( HIDWORD(v66[2]) && *(_DWORD *)(a2 + 36) == DWORD2(v66[3]) && *(_DWORD *)(a2 + 48) >= HIDWORD(v66[2]) )
  {
    v44 = sub_1406859F8(1);
    v19 = v44 | v45;
    v51 = v19;
  }
  v21 = v66[3];
  v22 = HIDWORD(v66[3]);
  if ( LODWORD(v66[3]) && *(_DWORD *)(a2 + 40) == HIDWORD(v66[3]) && *(_DWORD *)(a2 + 52) >= LODWORD(v66[3]) )
  {
    v46 = sub_1406859F8(2);
    v19 = v46 | v47;
    v51 = v19;
  }
  if ( v19 )
  {
    sub_1406FFED4(Event, v52);
    v33 = *(_QWORD *)&Event[49].Header.Lock;
    if ( v33 )
    {
      *(_DWORD *)(v33 + 4) |= v51;
      v34 = *(_QWORD **)&Event[49].Header.Lock;
      if ( (v51 & 0x10000) != 0 )
        v34[9] = *(_QWORD *)&v66[0];
      if ( (v51 & 0x20000) != 0 )
        v34[10] = *((_QWORD *)&v66[0] + 1);
      if ( (v51 & 4) != 0 )
        v34[11] = *(_QWORD *)&v66[1];
      if ( (v51 & 0x200) != 0 )
        v34[13] = *(_QWORD *)&v66[2];
      if ( (v51 & 0x8000) != 0 )
        v34[12] = *((_QWORD *)&v66[1] + 1);
      v35 = sub_1406859F8(0);
      if ( (v35 & v37) != 0 )
      {
        *(_DWORD *)(v36 + 112) = v17;
        *(_DWORD *)(v36 + 124) = v18;
      }
      v38 = sub_1406859F8(1);
      if ( (v38 & v40) != 0 )
      {
        v48 = DWORD2(v66[3]);
        *(_DWORD *)(v39 + 116) = v20;
        *(_DWORD *)(v39 + 128) = v48;
      }
      v41 = sub_1406859F8(2);
      if ( (v41 & v43) != 0 )
      {
        *(_DWORD *)(v42 + 120) = v21;
        *(_DWORD *)(v42 + 132) = v22;
      }
    }
    if ( *(_QWORD *)&Event[23].Header.Lock
      && (HIDWORD(Event[44].Header.WaitListHead.Flink) & 0x800) != 0
      && (Event[63].Header.LockNV & 4) == 0 )
    {
      sub_1406A2200(Event, 0xBu);
    }
    sub_1406FFE90(Event, v52);
  }
  v23 = *(volatile signed __int32 **)(a2 + 16);
  if ( v23 )
  {
    if ( (v23[280] & 1) == 0 )
    {
      _InterlockedAnd(v23 + 280, 0xFFFFFFDF);
      v49 = *(_QWORD *)(a2 + 16);
      v58[0] = *(_QWORD *)(a2 + 8);
      v58[1] = 2LL;
      v58[2] = *(_QWORD *)(v49 + 1088);
      sub_140684158(v49, v58, 0xEu, 0xC0000044);
      v23 = *(volatile signed __int32 **)(a2 + 16);
    }
    ObfDereferenceObject((PVOID)v23);
  }
  if ( v54 && (struct _LIST_ENTRY *)((char *)v57 + *((_QWORD *)&v59 + 1)) > v54 )
  {
    if ( v53 )
    {
      if ( v53 != 1 )
        goto LABEL_17;
      v50 = v52;
      sub_1406FFEFC(Event, v52);
      if ( !*(_QWORD *)&Event[23].Header.Lock || (HIDWORD(Event[44].Header.WaitListHead.Flink) & 2) == 0 )
      {
        sub_1406FFE90(Event, v52);
        sub_1406D78E0(Event, 0xC0000044, 1);
        goto LABEL_17;
      }
      if ( (int)sub_14025863C((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !sub_1406D78E0(Event, 0xC0000044, 1) )
        goto LABEL_17;
      v50 = v52;
      sub_1406FFED4(Event, v52);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[23].Header.Lock
        && (HIDWORD(Event[44].Header.WaitListHead.Flink) & 2) != 0 )
      {
        sub_14025863C((__int64)Event, 1LL, 0, 0);
      }
    }
    sub_1406FFE90(Event, v50);
  }
LABEL_17:
  v24 = *(_QWORD *)(a2 + 24) + v55;
  v25 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v24;
  if ( v25 )
  {
    if ( v24 >= (unsigned int)dword_140D05138 )
    {
      sub_1409B06C4(0LL, v24, v16);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v56 >= (unsigned int)dword_140D0513C )
    {
      sub_1409B06C4(Event, v24, v16);
    }
  }
  v26 = Event[52].Header.WaitListHead.Blink;
  if ( v26 )
  {
    sub_1406FFED4(v26, v52);
    sub_1406FFED4(Event, v52);
    sub_1407000F8(&Event[52].Header.WaitListHead.Blink[82], &Event[54].Header.WaitListHead.Blink);
    memset(&Event[54].Header.WaitListHead.Blink, 0, 0x68uLL);
    sub_1406FFE90(Event, v52);
    v28 = Event[52].Header.WaitListHead.Blink;
    v27 = v52;
  }
  else
  {
    sub_1406FFED4(Event, v52);
    memset(&Event[54].Header.WaitListHead.Blink, 0, 0x68uLL);
    v27 = v52;
    v28 = (struct _LIST_ENTRY *)Event;
  }
  sub_1406FFE90(v28, v27);
  return 0LL;
}
