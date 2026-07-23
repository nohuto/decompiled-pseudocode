/*
 * XREFs of sub_1406F4FB8 @ 0x1406F4FB8
 * Callers:
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_1407623BC @ 0x1407623BC (sub_1407623BC.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_140226A00 @ 0x140226A00 (sub_140226A00.c)
 *     sub_14024DA70 @ 0x14024DA70 (sub_14024DA70.c)
 *     sub_14025C678 @ 0x14025C678 (sub_14025C678.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14027FCC4 @ 0x14027FCC4 (sub_14027FCC4.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_1402DBCA8 @ 0x1402DBCA8 (sub_1402DBCA8.c)
 *     sub_1402DBD88 @ 0x1402DBD88 (sub_1402DBD88.c)
 *     sub_1402DC0E8 @ 0x1402DC0E8 (sub_1402DC0E8.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140570F88 @ 0x140570F88 (sub_140570F88.c)
 *     sub_1405852C0 @ 0x1405852C0 (sub_1405852C0.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_14059A6F4 @ 0x14059A6F4 (sub_14059A6F4.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405B85C4 @ 0x1405B85C4 (sub_1405B85C4.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406EAFE4 @ 0x1406EAFE4 (sub_1406EAFE4.c)
 *     sub_1406EB270 @ 0x1406EB270 (sub_1406EB270.c)
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_1406EB5A4 @ 0x1406EB5A4 (sub_1406EB5A4.c)
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_1406EB784 @ 0x1406EB784 (sub_1406EB784.c)
 *     sub_1406EB948 @ 0x1406EB948 (sub_1406EB948.c)
 *     sub_1406EBA70 @ 0x1406EBA70 (sub_1406EBA70.c)
 *     sub_1406F57B8 @ 0x1406F57B8 (sub_1406F57B8.c)
 *     sub_140761FC0 @ 0x140761FC0 (sub_140761FC0.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_1407623BC @ 0x1407623BC (sub_1407623BC.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 *     sub_14081B420 @ 0x14081B420 (sub_14081B420.c)
 *     sub_14081BBF8 @ 0x14081BBF8 (sub_14081BBF8.c)
 *     sub_14081C658 @ 0x14081C658 (sub_14081C658.c)
 *     sub_14081C984 @ 0x14081C984 (sub_14081C984.c)
 *     sub_1408601A8 @ 0x1408601A8 (sub_1408601A8.c)
 *     sub_140970A74 @ 0x140970A74 (sub_140970A74.c)
 *     sub_140970C20 @ 0x140970C20 (sub_140970C20.c)
 *     sub_140973418 @ 0x140973418 (sub_140973418.c)
 *     sub_140977DCC @ 0x140977DCC (sub_140977DCC.c)
 *     sub_1409835EC @ 0x1409835EC (sub_1409835EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 */

void __fastcall sub_1406F4FB8(__int64 BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD *v12; // r14
  __int64 v13; // r15
  int v14; // esi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v21; // rcx
  char v22; // r15
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  unsigned int v25; // esi
  __int64 v26; // rax
  ULONG_PTR v27; // rcx
  char v28; // si
  char v29; // di
  ULONG_PTR v30; // rdi
  unsigned __int64 v31; // rax
  char *v32; // r15
  int v33; // r14d
  int v34; // esi
  PVOID v35; // rax
  void *v36; // rcx
  void *v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int128 *v41; // rsi
  unsigned int v42; // r14d
  __int64 v43; // rax
  ULONG_PTR v44; // rcx
  __int128 *v45; // rsi
  unsigned int v46; // r14d
  __int64 v47; // rax
  ULONG_PTR v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // eax
  void *v51; // rax
  int v52; // edx
  unsigned __int64 v53; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+58h] [rbp-A8h]
  __int128 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int128 v57; // [rsp+78h] [rbp-88h] BYREF
  __int128 v58; // [rsp+88h] [rbp-78h] BYREF
  __int128 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  _OWORD v61[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64[28]; // [rsp+F0h] [rbp-10h] BYREF
  int v65; // [rsp+1E0h] [rbp+E0h]
  PVOID Object; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v68; // [rsp+1F8h] [rbp+F8h]

  v56 = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  memset(v64, 0, 0x98uLL);
  memset(v61, 0, sizeof(v61));
  v63 = 0LL;
  v62 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  v6 = sub_140313C70(v4);
  v7 = *(unsigned int *)(BugCheckParameter2 + 64);
  v8 = 0LL;
  v68 = v6;
  Object = *(PVOID *)(BugCheckParameter2 + 112);
  v53 = (unsigned __int64)(unsigned int)v7 >> 12;
  v54 = (unsigned __int64)sub_1406F57B8(v7) >> 12;
  v10 = 0LL;
  if ( (unsigned int)sub_14027B080(v4) == 1 )
  {
    v65 = 0;
    v12 = (_QWORD *)sub_1402DBD88(BugCheckParameter2, (__int64)&v59);
    if ( !v12 )
      return;
    *(_QWORD *)&v55 = sub_140287970((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      sub_1406EB634(BugCheckParameter2, 0);
    v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    v14 = a2 & 1;
    if ( v14 )
    {
      if ( sub_14029C6C4() )
      {
        sub_1405A2A48(BugCheckParameter2, 0);
        if ( (unsigned int)sub_140970A74(BugCheckParameter2) )
          sub_140570F88();
        _mm_lfence();
      }
      v15 = sub_14027B520();
      sub_14027E810(v15, v55, v68, v53, 3, v61);
    }
    sub_1406EB5A4((__int64)v12);
    if ( v14 )
    {
      if ( ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0) )
        sub_140977DCC(v68 + 8 * v53);
      if ( (*(_DWORD *)(v55 + 56) & 0x8000000) != 0 )
      {
        v49 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
        sub_1406DDA18((__int64 *)v55, v49);
      }
      sub_14027FCC4(v4);
      if ( (_QWORD)v59 && (_QWORD)v59 != -1LL )
        sub_14027FCC4(v59 + 1);
      v16 = sub_14027FCC4(v4 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( *((_QWORD *)&v59 + 1) )
      {
        v18 = sub_14027FCC4(*((unsigned __int64 *)&v59 + 1));
        if ( v18 == v16 )
          v16 -= 8LL;
      }
      if ( v16 >= v17 )
        sub_140226A00();
    }
    v19 = v60;
    if ( v60 )
    {
      v20 = sub_1402182F8(*(_WORD *)(v13 + 366));
      sub_14028CE10(v20, v19 - *((_QWORD *)&v61[0] + 1));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 40), -v19);
    }
    if ( (a2 & 0x10) != 0 )
      v10 = v12[11];
    ExFreePoolWithTag(v12, 0);
    v8 = (__int64 *)v55;
  }
  else
  {
    v65 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( v10 )
    {
      v41 = (__int128 *)v10;
      v55 = 0LL;
      if ( v10 != -2LL && v10 != 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          *(_QWORD *)&v55 = 1LL;
          v41 = &v55;
          *((_QWORD *)&v55 + 1) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v42 = 0;
        if ( *(_QWORD *)v41 )
        {
          v43 = 0LL;
          do
          {
            v44 = *((_QWORD *)v41 + v43 + 1);
            if ( !v44 )
              break;
            if ( !(unsigned int)sub_1407623BC(v44) )
              break;
            v43 = ++v42;
          }
          while ( (unsigned __int64)v42 < *(_QWORD *)v41 );
        }
      }
      sub_1406EB3D4((void *)v10);
    }
    if ( !v65 && (a2 & 2) != 0 )
      sub_140A7C248(BugCheckParameter2);
    return;
  }
  sub_1406EB948(BugCheckParameter2, v9);
  if ( (int)sub_1406EB4B0(BugCheckParameter2, 0LL) < 0 )
    KeBugCheckEx(0x1Au, 0x1015uLL, v4, BugCheckParameter2, 0LL);
  if ( v10 )
  {
    v45 = (__int128 *)v10;
    v57 = 0LL;
    if ( v10 != -2LL && v10 != 1 )
    {
      if ( (v10 & 1) != 0 )
      {
        *(_QWORD *)&v57 = 1LL;
        v45 = &v57;
        *((_QWORD *)&v57 + 1) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v46 = 0;
      if ( *(_QWORD *)v45 )
      {
        v47 = 0LL;
        do
        {
          v48 = *((_QWORD *)v45 + v47 + 1);
          if ( !v48 )
            break;
          if ( !(unsigned int)sub_1407623BC(v48) )
            break;
          v47 = ++v46;
        }
        while ( (unsigned __int64)v46 < *(_QWORD *)v45 );
      }
    }
    sub_1406EB3D4((void *)v10);
  }
  if ( !v65 )
    sub_1406EB270(v8);
  if ( dword_140C4F478 )
    sub_1405A2F88(BugCheckParameter2);
  if ( sub_1406EB784() )
    sub_1408601A8();
  if ( sub_14029C6C4() )
  {
    if ( v65 && !(unsigned int)sub_1402FDD20(*(_QWORD *)(BugCheckParameter2 + 48)) )
      sub_1405A2A48(BugCheckParameter2, v65);
    sub_140970C20(BugCheckParameter2, 0LL);
    if ( (unsigned int)sub_140970A74(BugCheckParameter2) )
      sub_140570F88();
    _mm_lfence();
  }
  if ( v5 )
  {
    v21 = *(void **)(v5 + 160);
    if ( v21 )
    {
      sub_14081C658(v21);
      *(_QWORD *)(v5 + 160) = 0LL;
    }
  }
  v22 = a2;
  if ( (a2 & 2) != 0 )
  {
    sub_140A7C248(BugCheckParameter2);
    sub_1406EAFE4(BugCheckParameter2);
  }
  if ( v65 )
  {
    v23 = v53;
  }
  else
  {
    sub_1406EBA70();
    v23 = 0LL;
    v53 = 0LL;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v24 = *(_QWORD *)(BugCheckParameter2 + 136);
    v58 = 0LL;
    if ( v24 != -2LL && v24 != 1 )
    {
      if ( (v24 & 1) != 0 )
      {
        *(_QWORD *)&v58 = 1LL;
        *((_QWORD *)&v58 + 1) = v24 & 0xFFFFFFFFFFFFFFFEuLL;
        v24 = (unsigned __int64)&v58;
      }
      v25 = 0;
      if ( *(_QWORD *)v24 )
      {
        v26 = 0LL;
        do
        {
          v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
          if ( !v27 )
            break;
          if ( !(unsigned int)sub_1407623BC(v27) )
            break;
          v26 = ++v25;
        }
        while ( (unsigned __int64)v25 < *(_QWORD *)v24 );
      }
    }
  }
  sub_1406EB3D4(*(void **)(BugCheckParameter2 + 136));
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  sub_14025C678();
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    sub_1402DC0E8((PCUNICODE_STRING)(BugCheckParameter2 + 88), v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v23 )
  {
    sub_1406EB634(BugCheckParameter2, 0);
  }
  else
  {
    v28 = 0;
    v29 = 0;
    if ( !v23 )
      goto LABEL_119;
  }
  v28 = 0;
  v29 = 0;
  if ( (a2 & 1) == 0 )
  {
LABEL_119:
    v35 = Object;
    goto LABEL_74;
  }
  sub_14081BBF8(BugCheckParameter2 + 88, v4, v54 << 12);
  v30 = 0LL;
  if ( Object )
  {
    v31 = sub_140287970((__int64)Object);
    v30 = v31;
    if ( *(_QWORD *)BugCheckParameter2 )
    {
      v64[0] = v31;
      sub_140285FE0(v64, (_QWORD *)v5, 4);
    }
  }
  v32 = sub_14026DFC0(1);
  if ( (unsigned int)sub_1402FDD20(v4) )
  {
    if ( (BYTE4(xmmword_140D06900[0]) & 1) != 0 )
    {
      v50 = sub_14059A6F4(0, 6);
      sub_1405852C0(v4, 0LL, v50, (v23 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    sub_1409835EC(v4, v23);
    v29 = 0;
    v28 = 1;
    goto LABEL_118;
  }
  if ( v5 )
    sub_14081B420(BugCheckParameter2);
  qword_140C4F4D8 = BugCheckParameter2;
  sub_14027E810((__int64)v32, v30, v68, v23, 5, v61);
  v33 = v62;
  v34 = v61[0];
  if ( v30 )
    sub_140336B30(v30, (unsigned __int64)&v56, 4u, 0xFFFFFFFF);
  qword_140C4F4D8 = 0LL;
  _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, v34 - v33);
  v35 = Object;
  v28 = 0;
  v29 = 0;
  if ( !Object )
  {
    sub_1406EBA70();
    if ( !(unsigned int)sub_14024DA70() )
    {
      v51 = (void *)sub_1405B85C4((__int64)v32, (__int64)((v53 << 28) + (v68 << 25)) >> 16);
      if ( v54 != v53 )
      {
        LOBYTE(v52) = 10;
        memset(v51, v52, v54 - v53);
      }
    }
    v29 = 1;
    v28 = 0;
LABEL_118:
    v22 = a2;
    goto LABEL_119;
  }
  v22 = a2;
LABEL_74:
  if ( v65 == 1 )
  {
    if ( v35 )
      sub_1406EBA70();
    if ( (v22 & 1) != 0 )
      sub_14081C984(BugCheckParameter2, v61);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    sub_1402D8C20((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (xmmword_140D06900[0] & 4) != 0 )
      sub_14079D948(
        BugCheckParameter2 + 72,
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v29 )
    sub_14076200C(0LL, v68, (unsigned int)v54);
  v36 = *(void **)(BugCheckParameter2 + 80);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  if ( v5 )
  {
    v37 = *(void **)(v5 + 128);
    if ( v37 )
      sub_140973418(v37);
  }
  if ( Object )
  {
    if ( v5 )
    {
      v38 = *(_QWORD *)(v5 + 56);
      if ( v38 )
        sub_140216E18((__int64)&StartContext, v38);
    }
    v39 = sub_140287970((__int64)Object);
    v40 = v39;
    if ( !v28 && v4 != *(_QWORD *)(*(_QWORD *)v39 + 32LL) )
    {
      sub_1402DBCA8(v4, 1);
      sub_140761FC0(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v5 && v65 && (*(_DWORD *)(v5 + 36) & 0x80u) != 0 )
      sub_14058C0E4(v40);
    sub_14025E274(v40);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
