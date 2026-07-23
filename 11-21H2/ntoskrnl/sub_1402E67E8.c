/*
 * XREFs of sub_1402E67E8 @ 0x1402E67E8
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_14024C4D8 @ 0x14024C4D8 (sub_14024C4D8.c)
 *     sub_14025191C @ 0x14025191C (sub_14025191C.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405A5FCC @ 0x1405A5FCC (sub_1405A5FCC.c)
 *     sub_1405A6840 @ 0x1405A6840 (sub_1405A6840.c)
 *     sub_1405AB0FC @ 0x1405AB0FC (sub_1405AB0FC.c)
 *     sub_14097D244 @ 0x14097D244 (sub_14097D244.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402E67E8(ULONG_PTR BugCheckParameter1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v6; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *MappedSystemVa; // r12
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // r8
  char v14; // dl
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned __int64 v25; // r13
  char v26; // dl
  __int64 v27; // r15
  ULONG_PTR v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  unsigned int v39; // ebx
  PVOID v40; // r15
  unsigned int v42; // ebx
  unsigned int v43; // eax
  __int64 v44; // r13
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  char v47; // r12
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int64 v51; // r12
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r10
  int v56; // eax
  char v57; // r11
  ULONG_PTR v58; // r10
  __int64 v59; // r8
  __int64 v60; // r15
  __int64 v61; // r11
  __int64 v62; // rbx
  bool v63; // zf
  __int64 v64; // r11
  struct _MDL *v65; // rax
  struct _MDL *v66; // r15
  char v67; // dl
  int v68; // r8d
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // r11
  __int64 v72; // r11
  __int64 v73; // r13
  int v74; // ebx
  unsigned __int64 v75; // rsi
  int v76; // r8d
  bool v77; // cl
  char v78; // bl
  __int64 v79; // rcx
  __int64 v80; // rsi
  __int64 v81; // rax
  unsigned __int64 v82; // r12
  PMDL v83; // rcx
  unsigned __int64 v84; // r13
  PVOID v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rsi
  ULONG_PTR v89; // rdx
  unsigned __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // rsi
  char v93; // [rsp+30h] [rbp-1C8h]
  __int64 v94; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v95; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR v96; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v98; // [rsp+58h] [rbp-1A0h]
  _BYTE *v99; // [rsp+60h] [rbp-198h]
  unsigned __int64 v100; // [rsp+70h] [rbp-188h]
  __int64 v101; // [rsp+78h] [rbp-180h]
  unsigned int v102; // [rsp+80h] [rbp-178h] BYREF
  __int64 v103; // [rsp+88h] [rbp-170h]
  __int64 v104; // [rsp+90h] [rbp-168h] BYREF
  __int64 v105; // [rsp+98h] [rbp-160h]
  _BYTE *v106; // [rsp+A0h] [rbp-158h]
  ULONG_PTR v107; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v108; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v109; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  ULONG_PTR v111; // [rsp+C8h] [rbp-130h]
  void *v112; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v113; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v114; // [rsp+E0h] [rbp-118h]
  char v115[8]; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v116; // [rsp+F0h] [rbp-108h]
  _OWORD v117[3]; // [rsp+F8h] [rbp-100h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v112 = (void *)a3;
  v6 = BugCheckParameter1;
  v107 = BugCheckParameter1;
  v113 = BugCheckParameter1;
  v114 = a3;
  v104 = 0LL;
  v108 = 0LL;
  memset(v117, 0, sizeof(v117));
  v7 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v98 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 > 8 )
  {
    v65 = (struct _MDL *)sub_1402828F0(
                           64,
                           8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                           0x20206D4Du);
    v66 = v65;
    P = v65;
    if ( v65 )
    {
      v65->Next = 0LL;
      v65->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
      v65->MdlFlags = 0;
      v65->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      v65->ByteOffset = a3 & 0xFFF;
      v65->ByteCount = a4;
      v67 = *((_BYTE *)CurrentThread + 562);
      sub_14029C5B0(v65, v67 != 0, 1);
      if ( (v66->MdlFlags & 5) != 0 )
        MappedSystemVa = v66->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v66, 0, MmCached, 0LL, 0, 0x40000010u);
      v106 = MappedSystemVa;
      v99 = MappedSystemVa;
      if ( MappedSystemVa )
      {
        v11 = 1LL;
        v6 = v107;
        goto LABEL_7;
      }
      MmUnlockPages(v66);
      ExFreePoolWithTag(v66, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v8);
  P = 0LL;
  MappedSystemVa = Src;
  v99 = Src;
  v106 = Src;
  v11 = 1LL;
LABEL_7:
  if ( *((_QWORD *)CurrentThread + 23) != v6 )
  {
    sub_14030D5C0(v6);
    v11 = 1LL;
    v7 = 1;
  }
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = v6 + 1664;
  v94 = v6 + 1664;
  v14 = 17;
  v93 = 17;
  v15 = 0LL;
  v95 = 0LL;
  v16 = 0LL;
  v96 = 0LL;
  v102 = 0;
  v17 = v98;
  v18 = a2;
  while ( 1 )
  {
    v19 = 0LL;
    v105 = 0LL;
    v7 &= ~4u;
    v20 = *MappedSystemVa;
    v100 = *MappedSystemVa;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFuLL )
      goto LABEL_53;
    v21 = v20 >> 12;
    v116 = v20 >> 12;
    if ( !v12 )
      goto LABEL_247;
    if ( v21 < (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
      || v21 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
    {
      if ( v16 )
      {
        sub_14024C4D8(0LL, v16, v14);
        v96 = 0LL;
        v14 = v93;
        v13 = v94;
      }
      if ( v14 != 17 )
      {
        if ( v15 )
        {
          sub_14020D8D0(v13, v15);
          v15 = 0LL;
          v95 = 0LL;
          v14 = v93;
        }
        sub_1402B0CE0(v94, v14);
        v93 = 17;
      }
      sub_14030EA70((PVOID)v12);
      v12 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( !v12 )
    {
LABEL_247:
      v12 = sub_14030E7C0(v20, 2LL, &v102);
      BugCheckParameter2 = v12;
      if ( !v12 )
        break;
    }
    if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
      || (v20 & 0xFFFFFFFFFFFFF000uLL) == qword_140C50678 && qword_140C50678 )
    {
      v20 = v100;
      if ( (*(_DWORD *)(v107 + 2172) & 1) == 0 )
        v7 |= 4u;
    }
    v22 = v7 & 0xFFFFFFEF;
    v7 = v7 & 0xFFFFFFEF | 0x10;
    if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x10 )
      v7 = v22;
LABEL_19:
    v7 &= ~2u;
    if ( (v7 & 0x10) == 0 )
    {
      if ( (v23 = *(_DWORD *)(v12 + 48), (v23 & 0x200000) != 0)
        && ((v24 = (v23 >> 19) & 3, (v23 & 0x800000) != 0) || v24 >= 2)
        && v24 >= 2
        || (*(_DWORD *)(v12 + 48) & 0x200000) == 0 && (*(_DWORD *)(v12 + 64) & 0x1000000) != 0
        || (*(_BYTE *)(v12 + 48) & 0x70) == 0x30 && (unsigned __int64)sub_14097D244(v12) >= 0x200 )
      {
        v7 |= 2u;
      }
    }
    if ( (v7 & 2) != 0 && v93 != 17 )
    {
      if ( v15 )
      {
        sub_14020D8D0(v94, v15);
        v15 = 0LL;
        v95 = 0LL;
      }
      sub_1402B0CE0(v94, v93);
      v93 = 17;
    }
    v25 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v111 = v25;
    v26 = v93;
    if ( v93 != 17 )
    {
      if ( (((_BYTE)v25 + 8) & 0x78) == 0 && (unsigned int)sub_1403531F0(v94) || KeShouldYieldProcessor() )
      {
        if ( v15 )
        {
          sub_14020D8D0(v94, v15);
          v15 = 0LL;
          v95 = 0LL;
        }
        sub_1402B0CE0(v94, v93);
        v26 = 17;
        v93 = 17;
      }
      else
      {
        v26 = v93;
      }
    }
    v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v101 = v27;
    while ( 1 )
    {
      if ( v26 == 17 )
        v93 = sub_1402CF4F0(v94);
      v28 = -1LL;
      v103 = -1LL;
      v19 = 0LL;
      v105 = 0LL;
      if ( v15 == v27 )
      {
        v29 = v25;
        v108 = v25;
      }
      else
      {
        if ( v15 )
          sub_14020D8D0(v94, v15);
        v95 = sub_14027D6E0(v94, v25, &v108);
        v29 = v108;
      }
      v30 = sub_140317A10(v29);
      v31 = v30;
      if ( !v30 )
      {
        if ( (v7 & 0x10) != 0 )
          goto LABEL_131;
        v38 = 0LL;
        v32 = v7 & 2;
        if ( (v7 & 2) == 0 )
        {
          v15 = v95;
          goto LABEL_97;
        }
        v11 = 1LL;
        goto LABEL_39;
      }
      v11 = 1LL;
      if ( (v30 & 1) == 0 || (v30 & 0x80u) == 0LL )
      {
        if ( v95 != v101 )
        {
          if ( (unsigned int)sub_1405A6840(v94, v29, (unsigned int)&v104, a2, v93) )
          {
            v15 = 0LL;
            v95 = 0LL;
            goto LABEL_135;
          }
          v19 = v105;
          v11 = 1LL;
        }
        v32 = v7 & 2;
LABEL_39:
        v33 = v100;
        goto LABEL_40;
      }
      v28 = (v30 >> 12) & 0xFFFFFFFFFFLL;
      v103 = v28;
      v68 = -1;
      while ( v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = (__int64)(v29 << 25) >> 16;
        ++v68;
      }
      v69 = 1LL;
      v33 = v100;
      v70 = v100 >> 12;
      while ( v68 )
      {
        v28 += v69 * (v70 & 0x1FF);
        v70 >>= 9;
        v69 <<= 9;
        --v68;
      }
      v19 = 8388609LL;
      v105 = 8388609LL;
      v32 = v7 & 2;
LABEL_40:
      v34 = v103;
      if ( v103 != -1 )
        goto LABEL_78;
      if ( v32 )
      {
        v12 = BugCheckParameter2;
        v15 = v95;
        v20 = v100;
        goto LABEL_19;
      }
      v15 = v95;
      if ( v95 != ((v33 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        MappedSystemVa = v99;
        v12 = BugCheckParameter2;
        goto LABEL_50;
      }
      v35 = sub_140317A10(v25);
      v36 = v35;
      v31 = v35;
      v109 = v35;
      v37 = 1LL;
      if ( (v35 & 1) != 0 )
      {
        v19 |= 1uLL;
        v42 = *(_DWORD *)(BugCheckParameter2 + 48);
        v43 = v7 & 0xFFFFFFF7;
        v7 |= 8u;
        if ( (v42 & 0x70) != 0x40 )
          v7 = v43;
        v28 = (v36 >> 12) & 0xFFFFFFFFFFLL;
        if ( (v7 & 0x18) == 0 )
        {
          v34 = v103;
LABEL_78:
          v44 = 48 * v28;
          v111 = 48 * v28 - 0x220000000000LL;
          v45 = v111;
          v103 = v111;
          if ( (*(_QWORD *)(v111 + 40) & 0x10000000000LL) != 0 )
          {
            v82 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v34 != -1LL )
              v82 = v34;
            v45 = 48 * v82 - 0x220000000000LL;
            v103 = v45;
          }
          v46 = *(_QWORD *)(v45 + 40);
          v47 = sub_140273234(v45);
          v51 = v19 & 0xFFFFFFFFF8C07FFFuLL | HIWORD(v46) & 0x8000 | ((sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v48 - v49) >> 4))[1] & 0x3F | ((unsigned __int64)(v47 & 7) << 8)) << 16);
          v52 = v111;
          if ( (*(_BYTE *)(v111 + 35) & 0x40) != 0 || sub_140273354(v111) )
            v51 |= 0x80000000uLL;
          v53 = *(_QWORD *)(v52 + 40);
          LOBYTE(v50) = (v53 & 0x10000000000LL) == 0;
          if ( ((unsigned __int8)v50 & ((v51 & 0x800000) == 0)) != 0 )
          {
            v11 = 1LL;
            if ( (((unsigned __int64)v53 >> 60) & 7) != 1 )
            {
              if ( (sub_14033A410(v50, v100) & 0xF) == 8 )
                v51 |= 0x400000uLL;
              if ( *(__int64 *)(v52 + 40) < 0 )
              {
                v56 = sub_1402E9768(v54, v55, v52);
                v19 = v51 & 0xFFFFFFFFFFFF8001uLL | (2 * (v57 & 7 | (8LL * (dword_140016150[v56] & 0x7FF))));
                v12 = BugCheckParameter2;
                if ( (v7 & 4) != 0
                  || (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) == 0
                  && sub_140319600(BugCheckParameter2, v116, 0LL, v115) == (*(_QWORD *)(v52 + 8) | 0x8000000000000000uLL) )
                {
                  v19 |= 0x40000000uLL;
                }
                goto LABEL_90;
              }
              v19 = v51 & 0xFFFFFFFFFFFF8001uLL | (16LL * (dword_140016150[(*(_DWORD *)(v52 + 16) >> 5) & 0x1F] & 0x7FF));
              v12 = BugCheckParameter2;
              MappedSystemVa = v99;
              v15 = v95;
              v14 = v93;
              v13 = v94;
              v16 = v96;
              v18 = a2;
              if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
                v19 &= 0xFFFFFFF0FFFFFFFFuLL;
LABEL_52:
              v17 = v98;
              goto LABEL_53;
            }
            if ( v53 >= 0 )
            {
              v83 = MemoryDescriptorList;
              if ( !MemoryDescriptorList )
                goto LABEL_234;
              v84 = 0xAAAAAAAAAAAAAAABuLL * (v44 >> 4);
              while ( v83 )
              {
                v85 = v83->MappedSystemVa;
                if ( v84 >= (unsigned __int64)v85 )
                {
                  if ( (PVOID)(v84 - (unsigned __int64)v85) < v83->StartVa )
                    break;
                  v83 = *(PMDL *)&v83->Size;
                }
                else
                {
                  v83 = v83->Next;
                }
              }
              if ( v83 )
              {
                v86 = (*(_DWORD *)(v52 + 16) >> 5) & 0x1F;
                v12 = BugCheckParameter2;
              }
              else
              {
LABEL_234:
                v87 = v31;
                v12 = BugCheckParameter2;
                v86 = sub_1405AB0FC(BugCheckParameter2, v87);
              }
              v88 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)(16 * dword_140016150[v86])) & 0x7FF0;
              if ( (*(_DWORD *)(v12 + 48) & 0x2200000) == 0x2200000 )
                v88 &= 0xFFFFFFF0FFFFFFFFuLL;
              v19 = v88 | 0x400000;
              MappedSystemVa = v99;
              v15 = v95;
              goto LABEL_50;
            }
          }
          v89 = v31;
          v12 = BugCheckParameter2;
          v90 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)(16
                                                                * dword_140016150[(unsigned int)sub_1405A5FCC(
                                                                                                  BugCheckParameter2,
                                                                                                  v89)])) & 0x7FF0;
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
            v90 &= 0xFFFFFFF0FFFFFFFFuLL;
          v19 = v90 | 0x400000;
          v91 = v19;
          MappedSystemVa = v99;
          v15 = v95;
          v11 = 1LL;
          v13 = v94;
          v16 = v96;
          if ( *(__int64 *)(v103 + 40) < 0 )
          {
            LOBYTE(v92) = 7;
            if ( (*(_QWORD *)(v103 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v92 = *(_QWORD *)(v103 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v19 = v91 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v92 & 7 | 0x20000000));
          }
LABEL_51:
          v14 = v93;
          v18 = a2;
          goto LABEL_52;
        }
        v73 = 48 * v28 - 0x220000000000LL;
        if ( v28 <= qword_140C50840
          && ((*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
          && ((*(_BYTE *)(v73 + 35) & 0x40) != 0 || sub_140273354(48 * v28 - 0x220000000000LL)) )
        {
          v19 |= 0x80000000uLL;
        }
        if ( (v7 & 0x10) != 0 )
        {
          v74 = (v42 >> 7) & 0x1F;
          if ( (v37 & (v31 >> 4)) != 0 || (v31 & 8) == 0 )
          {
            if ( (v37 & (v31 >> 4)) != 0 )
              v74 |= 8u;
          }
          else
          {
            v74 |= 0x18u;
          }
          v75 = v19 & 0xFFFFFFFFFFC0FFFFuLL | ((sub_1402C1550(v28)[1] & 0x3F) << 16) | 0x400001;
        }
        else if ( sub_1402433D0(v111) )
        {
          v76 = v42 & 0xC00;
          v77 = (v42 & 0x380) != 0;
          v74 = (v31 & 0x800) != 0 ? 4 : 1;
          if ( v77 && v76 == 3072 )
          {
            v74 |= 0x18u;
          }
          else if ( v76 == 1024 )
          {
            v74 |= 8u;
          }
          v75 = ((unsigned int)v19 ^ (*((_DWORD *)sub_1402C1550(v28) + 2) << 16)) & 0x3F0000 ^ (unsigned __int64)v19;
        }
        else
        {
          v78 = sub_140273234(48 * v28 - 0x220000000000LL);
          v75 = v19 & 0xFFFFFFFFF8C0FFFFuLL | ((sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v79 + 0x220000000000LL) >> 4))[1] & 0x3F | ((unsigned __int64)(v78 & 7) << 8)) << 16);
          v74 = (*(_DWORD *)(v73 + 16) >> 5) & 0x1F;
          if ( !_bittest64((const signed __int64 *)(v73 + 40), 0x28u) && *(__int64 *)(v73 + 8) > 0 )
          {
            v80 = v75 | 0x8000;
            LOBYTE(v81) = 7;
            if ( (*(_QWORD *)(v73 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v81 = *(_QWORD *)(v73 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v75 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(2 * v81)) & 0xE;
            v74 = dword_140015AB0[v74];
          }
        }
        v19 = ((unsigned __int16)v75 ^ (unsigned __int16)(16 * dword_140016150[v74])) & 0x7FF0 ^ v75;
LABEL_131:
        v12 = BugCheckParameter2;
LABEL_90:
        MappedSystemVa = v99;
LABEL_91:
        v15 = v95;
        goto LABEL_49;
      }
      if ( (v35 & 0x400) != 0 )
      {
        v38 = v35;
        v58 = BugCheckParameter2;
        goto LABEL_100;
      }
      if ( (v35 & 0x800) == 0 )
        break;
      v71 = sub_140315D60(v25);
      if ( v71 )
      {
        sub_14025191C(0xAAAAAAAAAAAAAAABuLL * ((v71 + 0x220000000000LL) >> 4), (__int64)&v104);
        _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v19 = v105;
LABEL_48:
        MappedSystemVa = v99;
        v12 = BugCheckParameter2;
        goto LABEL_49;
      }
LABEL_135:
      v27 = v101;
      v26 = v93;
    }
    if ( (unsigned int)sub_1402E76C0(&v109) )
    {
      v19 = v19 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      goto LABEL_48;
    }
    v38 = v31;
    if ( v31 )
      goto LABEL_48;
LABEL_97:
    v58 = BugCheckParameter2;
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) != 0 && (v7 & 4) == 0 )
    {
      MappedSystemVa = v99;
      v12 = BugCheckParameter2;
LABEL_49:
      v11 = 1LL;
LABEL_50:
      v13 = v94;
      v16 = v96;
      goto LABEL_51;
    }
LABEL_100:
    v59 = 0LL;
    if ( (v7 & 4) != 0 )
    {
      v59 = qword_140C50670;
      if ( (v100 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        v59 = qword_140C50668;
      goto LABEL_103;
    }
    if ( (*(_DWORD *)(v58 + 48) & 0x200000) != 0 )
    {
      v31 = v38;
      if ( qword_140C50780 )
      {
        if ( (v38 & 0x10) != 0 )
          goto LABEL_191;
        v31 = v38 & ~qword_140C50780;
      }
LABEL_192:
      v60 = (__int64)v31 >> 16;
    }
    else
    {
      v59 = sub_140319600(v58, v100 >> 12, 0LL, v115);
      if ( v31 && !sub_1402806A0(v31) )
      {
        if ( !qword_140C50780 )
          goto LABEL_192;
        if ( (v31 & 0x10) == 0 )
        {
          v31 &= ~qword_140C50780;
          goto LABEL_192;
        }
LABEL_191:
        v31 &= ~0x10uLL;
        goto LABEL_192;
      }
LABEL_103:
      v60 = v59;
    }
    if ( !v60 )
      goto LABEL_48;
    v19 |= 0x8000uLL;
    v105 = v19;
    if ( v60 == v59 )
    {
      v19 |= 0x40000000uLL;
      v105 = v19;
    }
    if ( ((v60 ^ v96) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v15 )
      {
        sub_14020D8D0(v94, v15);
        v15 = 0LL;
        v95 = 0LL;
      }
      v96 = sub_14024C4D8(v60, v96, v93);
      goto LABEL_135;
    }
    v61 = sub_1402738F0((unsigned __int64 *)v60, 0LL);
    v62 = *(_QWORD *)v60;
    v109 = *(_QWORD *)v60;
    if ( v61 )
    {
      sub_14025191C(0xAAAAAAAAAAAAAAABuLL * ((v61 + 0x220000000000LL) >> 4), (__int64)&v104);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v105;
      goto LABEL_131;
    }
    if ( (v62 & 0x400) != 0 || (v62 & 0x800) != 0 || !sub_140273A80(v62) )
      goto LABEL_131;
    if ( (unsigned int)sub_1402E76C0(&v109) )
    {
      v19 = v19 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      goto LABEL_131;
    }
    MappedSystemVa = v99;
    v12 = BugCheckParameter2;
    v11 = 1LL;
    v14 = v93;
    v13 = v94;
    v17 = v98;
    v16 = v96;
    v18 = a2;
    v63 = v62 == 0;
    v15 = v95;
    if ( v63 )
      v19 = 0LL;
LABEL_53:
    if ( (v18 & 0x40000000) != 0 )
    {
      if ( ((unsigned __int8)v19 & (unsigned __int8)v11) != 0 )
      {
        if ( (v19 & 0x40000000) != 0 )
          v19 = v19 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v19 & 0x40000000) != 0 )
      {
        v19 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v19;
    MappedSystemVa += 2;
    v99 = MappedSystemVa;
    v106 = MappedSystemVa;
    v17 -= v11;
    v98 = v17;
    if ( !v17 )
    {
      v39 = 0;
      goto LABEL_59;
    }
  }
  v39 = v102;
  if ( v102 != -1073741558 )
    goto LABEL_91;
LABEL_59:
  if ( v93 != 17 )
  {
    if ( v95 )
      sub_14020D8D0(v94, v95);
    sub_1402B0CE0(v94, v93);
  }
  if ( v96 )
    sub_14024C4D8(0LL, v96, 17);
  if ( v12 )
    sub_14030EA70((PVOID)v12);
  if ( (v7 & 1) != 0 )
    sub_1402D0930((__int64)v117, 0LL);
  v40 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v40, 0);
  }
  else
  {
    memmove(v112, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v39;
}
