/*
 * XREFs of sub_1405AF6F0 @ 0x1405AF6F0
 * Callers:
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 * Callees:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14025CE80 @ 0x14025CE80 (sub_14025CE80.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_1405C4F88 @ 0x1405C4F88 (sub_1405C4F88.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 */

__int64 __fastcall sub_1405AF6F0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        signed int a7,
        unsigned __int64 *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r14
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v14; // r12
  int v15; // esi
  __int64 v16; // rax
  int v17; // r9d
  ULONG_PTR v18; // rax
  __int64 v20; // rcx
  unsigned int v21; // r11d
  __int64 v22; // rdx
  int v23; // edi
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r8
  int v29; // r9d
  unsigned __int64 v30; // r10
  unsigned int v31; // edi
  unsigned int v32; // ebx
  unsigned __int8 CurrentIrql; // r11
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdi
  unsigned __int8 v39; // r11
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v42; // r9
  int v43; // eax
  bool v44; // zf
  _BYTE *v45; // rcx
  unsigned __int8 v46; // al
  unsigned __int8 v47; // di
  struct _KPRCB *v48; // r10
  __int64 v49; // r9
  int v50; // eax
  unsigned int v51; // eax
  int i; // ecx
  int v53; // eax
  __int64 v54; // r9
  int v55; // r8d
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rdi
  __int64 v59; // rbx
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // ebx
  unsigned __int8 v68; // r11
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  __int64 v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  unsigned __int8 v74; // bl
  struct _KPRCB *v75; // r10
  __int64 v76; // r9
  int v77; // eax
  int v78; // r8d
  unsigned __int64 v79; // rbx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  __int64 v82; // r9
  int v83; // eax
  unsigned __int64 v84; // r11
  unsigned __int64 v85; // rbx
  ULONG_PTR v86; // rax
  unsigned __int8 v87; // [rsp+50h] [rbp-198h]
  unsigned __int8 v88; // [rsp+50h] [rbp-198h]
  int v89; // [rsp+58h] [rbp-190h]
  int v90; // [rsp+58h] [rbp-190h]
  __int64 v91; // [rsp+58h] [rbp-190h]
  char v92; // [rsp+60h] [rbp-188h]
  _BYTE *v93; // [rsp+68h] [rbp-180h]
  int v94; // [rsp+70h] [rbp-178h]
  __int64 v95; // [rsp+78h] [rbp-170h]
  int v96; // [rsp+80h] [rbp-168h]
  char v97; // [rsp+88h] [rbp-160h]
  __int64 v98; // [rsp+90h] [rbp-158h]
  __int64 v99; // [rsp+A0h] [rbp-148h]
  unsigned int v101; // [rsp+B0h] [rbp-138h]
  unsigned int v102; // [rsp+B4h] [rbp-134h]
  unsigned __int64 v103; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v104; // [rsp+C0h] [rbp-128h]
  _QWORD *v105; // [rsp+C8h] [rbp-120h]
  unsigned __int64 v106; // [rsp+D0h] [rbp-118h]
  _DWORD v107[2]; // [rsp+D8h] [rbp-110h] BYREF
  _QWORD *v108; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v109; // [rsp+E8h] [rbp-100h]
  __int64 v110; // [rsp+F0h] [rbp-F8h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-F0h]
  _QWORD v112[2]; // [rsp+100h] [rbp-E8h] BYREF
  struct _KTHREAD *v113; // [rsp+110h] [rbp-D8h]
  __int128 v114; // [rsp+118h] [rbp-D0h] BYREF
  __int128 v115; // [rsp+128h] [rbp-C0h]
  __int64 v116; // [rsp+138h] [rbp-B0h]
  __int64 v117; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v118; // [rsp+148h] [rbp-A0h]
  volatile signed __int64 *v119; // [rsp+150h] [rbp-98h]
  _BYTE v120[136]; // [rsp+160h] [rbp-88h] BYREF

  v10 = a4;
  v11 = a3;
  v12 = a2;
  memset(v120, 0, 0x50uLL);
  v112[0] = 0LL;
  v103 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  v98 = 0LL;
  v14 = 0LL;
  v15 = 256;
  v16 = qword_14001C780[v11];
  v95 = v16;
  v116 = v16;
  v17 = a5;
  if ( a5 )
  {
    v93 = v120;
    v120[73] = 1;
    LOBYTE(v14) = (unsigned int)v11 <= 1;
    if ( (unsigned int)v11 > 1 )
    {
      v18 = sub_1403095B0((__int64)&qword_140C534C0, v16);
      v14 = v18;
      if ( !v18 )
        return 1LL;
      v98 = (__int64)(v18 << 25) >> 16;
      v17 = a5;
      CurrentThread = v113;
    }
  }
  else
  {
    v93 = 0LL;
  }
  v20 = *(_QWORD *)(a1 + 16) + 24512 * v12;
  v97 = 17;
  v111 = *a8;
  v118 = v111;
  *a8 = 0LL;
  v104 = 0LL;
  *((_DWORD *)CurrentThread + 345) |= 0x100u;
  v21 = dword_140C507C0[v11];
  v102 = v21;
  v107[1] = v21;
  v22 = v17 + 2 * v10;
  v23 = a6;
  v24 = *(_QWORD **)(v20 + 1072 * v11 + 8 * (a7 + 4 * (a6 + 4 * v22)) + 560);
  v25 = 0;
LABEL_8:
  v101 = v25;
  v112[1] = v24;
  v108 = v24;
  if ( v25 >= v21 )
  {
LABEL_137:
    v32 = v95;
    goto LABEL_138;
  }
  v26 = v24[2];
  v99 = v26;
  v105 = v24;
  v27 = v98;
  do
  {
    while ( 1 )
    {
LABEL_10:
      if ( !v26 || (_QWORD *)*v24 == v24 )
        goto LABEL_136;
      if ( (unsigned int)sub_1405C4F88(a9, v22, 2LL) )
      {
        v31 = 0;
        v32 = v95;
        goto LABEL_139;
      }
      if ( v29 )
      {
        v15 &= ~4u;
        v94 = v15;
      }
      else
      {
        v15 |= 4u;
        v94 = v15;
        CurrentIrql = KeGetCurrentIrql();
        v97 = CurrentIrql;
        __writecr8(v28);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v34 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v34 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
      if ( v30 )
        *(_QWORD *)(v30 + 32) = 0LL;
      v35 = sub_1402CA5E0(a1, 0LL, a3, 1LL, v12, v23, a7, v15, v30);
      v38 = v35;
      v106 = v35;
      v109 = v35;
      if ( !v35 )
      {
        if ( !a5 )
        {
          v39 = v97;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v40 = KeGetCurrentIrql();
              if ( v40 <= 0xFu && (unsigned __int8)v97 <= 0xFu && v40 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v42 = *((_QWORD *)CurrentPrcb + 4375);
                v22 = -1LL << (v97 + 1);
                v43 = ~(unsigned __int16)v22;
                v44 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
                *(_DWORD *)(v42 + 20) &= v43;
                if ( v44 )
                {
                  sub_140418E4C((__int64)CurrentPrcb);
                  v39 = v97;
                }
              }
            }
          }
          __writecr8(v39);
        }
        v23 = a6;
LABEL_136:
        v25 = v101 + 1;
        v24 = v108 + 3;
        v21 = v102;
        goto LABEL_8;
      }
      if ( !a5 )
      {
        v107[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(v107, v22, v36, v37);
          while ( *(__int64 *)(v38 + 24) < 0 );
        }
        v115 = 0LL;
        *(_QWORD *)&v114 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v38 + 0x220000000000LL) >> 4);
        *((_QWORD *)&v114 + 1) = 0x100000001LL;
        LOBYTE(v115) = v97;
        sub_1402BEEA0((__int64)&v114);
        v27 = v98;
        goto LABEL_38;
      }
      v87 = sub_1402F2700(v35);
      v45 = v93;
      if ( !v93[70] )
        break;
      sub_14025CE80((__int64)v93);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 > 0xFu )
        {
          v47 = v87;
        }
        else
        {
          v47 = v87;
          if ( v87 <= 0xFu && v46 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = *((_QWORD *)v48 + 4375);
            v22 = -1LL << (v87 + 1);
            v50 = ~(unsigned __int16)v22;
            v44 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
            *(_DWORD *)(v49 + 20) &= v50;
            if ( v44 )
              sub_140418E4C((__int64)v48);
          }
        }
      }
      else
      {
        v47 = v87;
      }
      __writecr8(v47);
LABEL_38:
      v24 = v105;
      v26 = v99;
      v23 = a6;
    }
    v51 = a3;
    if ( a3 <= 1 )
    {
      v27 = sub_1402C6260((unsigned __int64 *)(a10 + 32LL * a3), a3, qword_14001C780[a3], 0);
      v98 = v27;
      v14 = ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      for ( i = a3; !i; i = 1 )
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v45 = v93;
      v51 = a3;
    }
    *((_QWORD *)v45 + 4) = v14;
    *((_DWORD *)v45 + 16) = v51;
    *((_QWORD *)v45 + 5) = v27;
    *((_QWORD *)v45 + 6) = v27 + (v95 << 12) - 1;
    v53 = sub_14026C61C(4, v38);
    v55 = -1543503872;
    if ( a3 > 1 )
      v55 = -1610612736;
    v56 = sub_1402CBD10(v14, v54, v53 | (unsigned int)v55);
    if ( a3 <= 1 )
    {
      v89 = 0;
      if ( sub_140317A80(v14) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v89 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
LABEL_63:
            if ( (v56 & 1) != 0 )
              v56 |= 0x8000000000000000uLL;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          goto LABEL_63;
        }
      }
      *(_QWORD *)v14 = v56;
      if ( v89 )
        sub_1402294F0(v14, v56);
      v59 = v95;
      goto LABEL_81;
    }
    v57 = v14 + 8 * v95;
    while ( v14 < v57 )
    {
      v58 = v56;
      v90 = 0;
      if ( !sub_140317A80(v14) )
        goto LABEL_76;
      if ( (unsigned int)sub_140229550() )
      {
        v90 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_76;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_76;
      }
      if ( (v56 & 1) != 0 )
        v58 = v56 | 0x8000000000000000uLL;
LABEL_76:
      *(_QWORD *)v14 = v58;
      if ( v90 )
        sub_1402294F0(v14, v58);
      v56 ^= (v56 ^ ((v56 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFFF000LL;
      v14 += 8LL;
    }
    v59 = v95;
    v14 -= 8 * v95;
    v15 = v94;
    LODWORD(v12) = a2;
    v38 = v106;
LABEL_81:
    v119 = (volatile signed __int64 *)(v38 + 24);
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v60 = KeGetCurrentIrql();
        if ( v60 <= 0xFu && v87 <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = *((_QWORD *)v61 + 4375);
          v63 = ~(unsigned __int16)(-1LL << (v87 + 1));
          v44 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
          *(_DWORD *)(v62 + 20) &= v63;
          if ( v44 )
            sub_140418E4C((__int64)v61);
        }
      }
    }
    __writecr8(v87);
    v117 = --v99;
    v96 = 0;
    v64 = v38;
    v91 = v38;
    v65 = v38 + 48 * v59;
    v106 = v65;
    v66 = v98;
    while ( 1 )
    {
      v110 = v66;
      if ( v38 >= v65 )
      {
        v78 = 0;
        goto LABEL_116;
      }
      v67 = sub_1405C573C(a9, v38, v66, 0LL);
      v68 = sub_1402F2700(v91);
      v88 = v68;
      v92 = v93[70];
      if ( v93[71] )
        v67 = 0;
      v96 = v67;
      if ( v93[70] || v67 < 0 )
        break;
      v64 = v91;
      _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v69 = KeGetCurrentIrql();
          if ( v69 <= 0xFu && v68 <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = *((_QWORD *)v70 + 4375);
            v72 = ~(unsigned __int16)(-1LL << (v68 + 1));
            v44 = (v72 & *(_DWORD *)(v71 + 20)) == 0;
            *(_DWORD *)(v71 + 20) &= v72;
            if ( v44 )
            {
              sub_140418E4C((__int64)v70);
              v68 = v88;
            }
            v64 = v91;
          }
        }
      }
      __writecr8(v68);
      v38 += 48LL;
      v109 = v38;
      v66 = v110 + 4096;
      v65 = v106;
    }
    sub_14025CE80((__int64)v93);
    if ( !v92 )
      sub_140226804(v91, 0, 0);
    v64 = v91;
    _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v73 = KeGetCurrentIrql(), v73 <= 0xFu) )
    {
      v74 = v88;
      if ( v88 <= 0xFu && v73 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        v76 = *((_QWORD *)v75 + 4375);
        v77 = ~(unsigned __int16)(-1LL << (v88 + 1));
        v44 = (v77 & *(_DWORD *)(v76 + 20)) == 0;
        *(_DWORD *)(v76 + 20) &= v77;
        if ( v44 )
          sub_140418E4C((__int64)v75);
        v64 = v91;
      }
    }
    else
    {
      v74 = v88;
    }
    __writecr8(v74);
    v78 = 1;
LABEL_116:
    if ( !v78 )
    {
      v79 = (unsigned __int8)sub_1402F2700(v64);
      sub_14025CE80((__int64)v93);
      if ( !v93[70] )
        sub_140226804(v91, 0, 0);
      _InterlockedAnd64(v119, 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v80 = KeGetCurrentIrql();
          if ( v80 <= 0xFu && (unsigned __int8)v79 <= 0xFu && v80 >= 2u )
          {
            v81 = KeGetCurrentPrcb();
            v82 = *((_QWORD *)v81 + 4375);
            v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v79 + 1));
            v44 = (v83 & *(_DWORD *)(v82 + 20)) == 0;
            *(_DWORD *)(v82 + 20) &= v83;
            if ( v44 )
              sub_140418E4C((__int64)v81);
          }
        }
      }
      __writecr8(v79);
    }
    v22 = 0xAAAAAAAAAAAAAAABuLL;
    v84 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v38 - v91) >> 4) + v104;
    v85 = v111;
    if ( v84 > v111 )
      v84 = v111;
    v104 = v84;
    *a8 = v84;
    if ( v96 < 0 )
    {
      v112[0] = 4096LL;
      v103 = (0xAAAAAAAAAAAAB000uLL * ((__int64)(v38 + 0x220000000000LL) >> 4)) | 1;
      MmMarkPhysicalMemoryAsBad((int *)&v103, v112);
      v84 = v104;
    }
    if ( v84 >= v85 )
      goto LABEL_137;
    v27 = v98;
    v24 = v105;
    v26 = v99;
    v23 = a6;
  }
  while ( a3 <= 1 );
  v32 = v95;
  sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v14, v95);
  v86 = sub_1403095B0((__int64)&qword_140C534C0, v95);
  v14 = v86;
  if ( v86 )
  {
    v27 = (__int64)(v86 << 25) >> 16;
    v98 = v27;
    *((_QWORD *)v93 + 4) = v86;
    v24 = v105;
    v26 = v99;
    goto LABEL_10;
  }
LABEL_138:
  v31 = 1;
LABEL_139:
  *((_DWORD *)v113 + 345) &= ~0x100u;
  if ( a5 && a3 > 1 )
  {
    if ( v14 )
      sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v14, v32);
  }
  return v31;
}
