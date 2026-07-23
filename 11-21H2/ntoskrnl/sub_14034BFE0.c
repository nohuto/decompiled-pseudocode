/*
 * XREFs of sub_14034BFE0 @ 0x14034BFE0
 * Callers:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14034D4E0 @ 0x14034D4E0 (sub_14034D4E0.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_1403513D8 @ 0x1403513D8 (sub_1403513D8.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_14036E5F0 @ 0x14036E5F0 (sub_14036E5F0.c)
 *     sub_14036E8E0 @ 0x14036E8E0 (sub_14036E8E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

__int64 __fastcall sub_14034BFE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  _RTL_RB_TREE *v6; // r12
  unsigned int v10; // r14d
  unsigned __int64 v12; // rbx
  unsigned int v13; // r11d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // r14d
  int v21; // eax
  int v22; // r10d
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  ULONG_PTR v25; // rdi
  int v26; // edx
  ULONG_PTR v27; // rdx
  unsigned int i; // r10d
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned __int16 v32; // cx
  ULONG_PTR v33; // r8
  __int64 v34; // r14
  unsigned __int16 v35; // dx
  ULONG_PTR v36; // r8
  int v37; // r8d
  unsigned int v38; // r9d
  unsigned int v39; // r8d
  unsigned __int64 v40; // r8
  unsigned int v41; // edx
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r11
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  BOOLEAN v50; // al
  unsigned __int64 v51; // rax
  bool v53; // zf
  int v54; // eax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  int *v57; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v59; // r14
  __int64 v60; // rcx
  unsigned int v61; // edx
  unsigned __int64 v62; // r8
  __int16 v63; // ax
  unsigned __int64 v64; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v66; // al
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r10
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  int v71; // r11d
  ULONG_PTR v72; // r8
  struct _KTHREAD *v73; // r10
  __int64 v74; // r8
  char *v75; // r14
  __int64 v76; // rdx
  int v77; // r8d
  struct _KTHREAD *v78; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v83; // r9
  int v84; // eax
  int v85; // [rsp+30h] [rbp-78h]
  __int64 v86; // [rsp+38h] [rbp-70h]
  struct _KTHREAD *v87; // [rsp+38h] [rbp-70h]
  __int64 v88; // [rsp+40h] [rbp-68h]
  unsigned __int64 v89; // [rsp+48h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-58h]
  int BugCheckParameter2a; // [rsp+50h] [rbp-58h]
  unsigned __int8 v92; // [rsp+68h] [rbp-40h]
  __int64 v93; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v94; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v95; // [rsp+C0h] [rbp+18h]
  int v96; // [rsp+C8h] [rbp+20h]

  v6 = (_RTL_RB_TREE *)(a1 + 16);
  v10 = WORD1(qword_140C5A5C0) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v12 = 0LL;
  v13 = a3 - a2;
  v14 = (a3 - a2 + 4127) & 0xFFFFF000;
  v15 = ((a3 + 16 * (((unsigned int)a3 ^ (unsigned int)qword_140C5A5C0 ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000) - v14;
  if ( v14 >= (((_DWORD)a3 + 16 * (((unsigned int)a3 ^ (unsigned int)qword_140C5A5C0 ^ *(_DWORD *)a3) >> 16) - (_DWORD)a2) & 0xFFFFF000) )
    v15 = 0;
  *(_QWORD *)(a1 + 56) -= (v15 >> 12)
                        + (unsigned int)((16
                                        * (((unsigned int)a3 ^ (unsigned int)qword_140C5A5C0 ^ *(_DWORD *)a3) >> 16)
                                        + (unsigned __int64)(a3 & 0xFFF)
                                        + 4095) >> 12)
                        - (unsigned int)(((unsigned __int64)(16
                                                           * (((unsigned int)a3 ^ (unsigned int)qword_140C5A5C0 ^ *(_DWORD *)a3) >> 16))
                                        + 4095) >> 12)
                        - (unsigned __int16)(a3 ^ qword_140C5A5C0 ^ *(_WORD *)a3);
  v16 = v10 - a4;
  if ( v16 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v17 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v18 = 16 * v17;
    if ( (unsigned int)(16 * v17) < 0x20 )
    {
      a4 += v17;
      v16 -= v17;
    }
    else if ( (v18 & 0xFFFFFFC0) == 0 && v18 != 32 )
    {
      ++a4;
      --v16;
    }
  }
  if ( 16 * v16 < 0x20 )
    a4 += v16;
  v93 = 0x1000000000000LL;
  v19 = 0LL;
  if ( 16 * v16 >= 0x20 )
    v19 = v16;
  v20 = v19;
  LODWORD(v95) = v19;
  v21 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(qword_140C5A5C0) ^ 1;
  v22 = (unsigned __int8)(qword_140C5A5C0 ^ (v13 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v22;
  if ( !(_DWORD)v19 )
    v21 = 16 * a4;
  v23 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v13 - 1 + v21) >> 12))) & (-1LL << (v13 >> 12));
  v24 = (v23 ^ *(_QWORD *)(a2 + 16)) & v23;
  v93 = v24;
  if ( v24 )
  {
    v53 = (a5 & 1) == 0;
    v54 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v22 | 0x200;
    v85 = v54;
    if ( v53 )
    {
      sub_14034F7F0(*(unsigned int *)(a1 + 8), a6);
      v24 = v93;
    }
    _BitScanForward64(&v55, v24);
    v89 = (0x101010101010101LL
         * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    LODWORD(v93) = v55;
    v86 = a2 + (unsigned int)((_DWORD)v55 << 12);
    _BitScanReverse64(&v56, v24);
    LODWORD(v94) = v56 - v55 + 1;
    v96 = (_DWORD)v94 << 12;
    v57 = (int *)(a2 + 24);
    v88 = ((1LL << v94) - 1) << v55;
    if ( *(_DWORD *)(a1 + 8) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v57 = (int *)(a2 + 24);
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v24 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v19 + 20);
        *(_DWORD *)(v19 + 20) = v24;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        sub_140461A66(v57, CurrentIrql);
      else
        sub_14030F870(v57, CurrentIrql, v24, v19);
      v92 = CurrentIrql;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v92 = 0;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v57, 0LL);
      CurrentIrql = 0;
    }
    v96 = sub_14042A5E0(a1 ^ *(_QWORD *)(a1 + 128), v86);
    if ( v96 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= v88;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v89);
      CurrentIrql = v92;
      v96 = 0;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v81 = KeGetCurrentIrql();
          if ( v81 <= 0xFu && CurrentIrql <= 0xFu && v81 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v83 = *((_QWORD *)CurrentPrcb + 4375);
            CurrentIrql = v92;
            v84 = ~(unsigned __int16)(-1LL << (v92 + 1));
            v53 = (v84 & *(_DWORD *)(v83 + 20)) == 0;
            *(_DWORD *)(v83 + 20) &= v84;
            if ( v53 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 24);
      v73 = KeGetCurrentThread();
      v87 = v73;
      if ( (unsigned __int64)(a2 + 24 - qword_140C50630) < 0x8000000000LL )
      {
        v80 = sub_140287F30(*((_QWORD *)v73 + 23));
        v73 = v87;
        v74 = v80;
      }
      else
      {
        v74 = 0xFFFFFFFFLL;
      }
      _disable();
      v75 = (char *)v73 + 1696;
      v76 = 0LL;
      do
      {
        if ( (*(_QWORD *)v75 & 0x7FFFFFFFFFFFFFFCLL) == ((a2 + 24) & 0x7FFFFFFFFFFFFFFCLL)
          && v75[18]
          && (*(_DWORD *)v75 & 1) == 0
          && *((_DWORD *)v75 + 2) == (_DWORD)v74 )
        {
          v75[18] = 0;
          if ( *(__int64 *)v75 < 0 )
          {
            *v75 |= 2u;
            _enable();
            sub_14034EE30(v75, v76, v74);
            _disable();
            v73 = v87;
          }
          v77 = *((_DWORD *)v75 + 22);
          *((_DWORD *)v75 + 22) = 0;
          v75[17] = 0;
          *(_QWORD *)v75 = 0LL;
          *((_BYTE *)v73 + 792) |= 1 << v75[16];
          _enable();
          if ( v77 )
            sub_14022B568((ULONG_PTR)v73, a2 + 24, v77);
          goto LABEL_123;
        }
        v76 = (unsigned int)(v76 + 1);
        v75 += 96;
      }
      while ( (unsigned int)v76 < 6 );
      if ( (*((_DWORD *)v73 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v73, a2 + 24, (unsigned int)v74, 0LL);
      _enable();
LABEL_123:
      v78 = KeGetCurrentThread();
      v53 = (*((_WORD *)v78 + 243))++ == 0xFFFF;
      if ( v53 && *((struct _KTHREAD **)v78 + 19) != (struct _KTHREAD *)((char *)v78 + 152) )
        KiCheckForKernelApcDelivery();
    }
    v20 = v95;
    if ( v96 < 0 )
    {
      v20 = v95 + a4;
      a4 = 0;
    }
    if ( !v85 )
      sub_14036E550(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(qword_140C5A5C0) ^ a4 ^ WORD1(a3);
  if ( v20 )
  {
    v25 = 16LL * a4 + a3;
    v93 = 0LL;
    if ( a4 )
      LOWORD(v26) = a4;
    else
      v26 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(*(_QWORD *)v25) ^ HIDWORD(v25);
    LODWORD(v93) = (v20 << 16) | (unsigned __int16)v93;
    HIDWORD(v93) = (unsigned __int16)v26 | 0x10000;
    *(_QWORD *)v25 = v93 ^ qword_140C5A5C0 ^ v25;
    v27 = v25 + 16LL * v20;
    *(_DWORD *)(v25 + 8) = (unsigned __int8)(qword_140C5A5C0 ^ v25 ^ ((unsigned int)(v25 - a2) >> 12));
    if ( v27 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      LODWORD(v93) = 0;
      HIDWORD(v93) = (unsigned __int16)v20;
      *(_WORD *)(v27 + 4) = WORD2(v27) ^ WORD2(qword_140C5A5C0) ^ v20;
    }
    for ( i = 0; ; i = v31 )
    {
      v29 = a2 + 48;
      LODWORD(v93) = i;
      v30 = (qword_140C5A5C0 ^ v25 ^ *(_QWORD *)v25) >> 32;
      v31 = ((unsigned int)qword_140C5A5C0 ^ (unsigned int)v25 ^ *(_DWORD *)v25) >> 16;
      LODWORD(v94) = v31;
      v96 = v31;
      *(_BYTE *)(v25 + 6) = BYTE6(qword_140C5A5C0) ^ BYTE6(v25);
      if ( (_WORD)v30 )
      {
        BugCheckParameter2 = v25 - 16LL * (unsigned __int16)v30;
        v95 = qword_140C5A5C0 ^ BugCheckParameter2 ^ *(_QWORD *)BugCheckParameter2;
        if ( (v95 & 0xFF000000000000LL) == 0 )
        {
          sub_1403513D8(a1, a2, v25 - 16LL * (unsigned __int16)v30, v29);
          v29 = a2 + 48;
          v25 = BugCheckParameter2;
          i = v93;
          v31 += WORD1(v95);
          v96 = v31;
        }
      }
      v32 = *(_WORD *)(a2 + 32);
      v33 = v25 + 16LL * v31;
      if ( v33 < v29 + 16 * (unsigned __int64)v32 )
      {
        v34 = qword_140C5A5C0 ^ v33 ^ *(_QWORD *)v33;
        if ( (v34 & 0xFF000000000000LL) == 0 )
        {
          sub_1403513D8(a1, a2, v33, v29);
          v32 = *(_WORD *)(a2 + 32);
          v29 = a2 + 48;
          i = v93;
          v96 += WORD1(v34);
        }
        v31 = v96;
      }
      v35 = v32;
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v36 = v25 + 16LL * v31;
        if ( v36 < v29 + 16 * (unsigned __int64)v32 )
        {
          v95 = qword_140C5A5C0 ^ v36 ^ *(_QWORD *)v36;
          if ( (v95 & 0xFF000000000000LL) == 0 )
          {
            sub_1403513D8(a1, a2, v36, v29);
            v29 = a2 + 48;
            v35 = *(_WORD *)(a2 + 32);
            i = v93;
            v31 += WORD1(v95);
          }
        }
      }
      if ( (_DWORD)v94 != v31 )
      {
        v72 = v25 + 16LL * v31;
        *(_WORD *)(v25 + 2) = WORD1(qword_140C5A5C0) ^ v31 ^ WORD1(v25);
        v35 = *(_WORD *)(a2 + 32);
        if ( v72 < v29 + 16 * (unsigned __int64)v35 )
        {
          LODWORD(v93) = 0;
          HIDWORD(v93) = (unsigned __int16)v31;
          *(_WORD *)(v72 + 4) = WORD2(qword_140C5A5C0) ^ WORD2(v72) ^ v31;
          v35 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v31 == v35 )
      {
        sub_14036E8E0(a1, a2);
        return a4;
      }
      if ( v31 <= i )
        break;
      v37 = *(unsigned __int16 *)(v25 + 2);
      v94 = (unsigned int)v25;
      v38 = (v25 - a2 + 4127) & 0xFFFFF000;
      v39 = (v25 + 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v25) ^ v37) - a2) & 0xFFFFF000;
      if ( v38 >= v39 )
        break;
      v68 = *(_QWORD *)(a2 + 16) & (-1LL << (v38 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
      BugCheckParameter2a = v68;
      if ( v39 - v38 < 0x1000 )
        break;
      if ( !v68 )
        break;
      v69 = (0x101010101010101LL
           * ((((v68 - ((v68 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v68 - ((v68 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v68 - ((v68 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v68 - ((v68 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v95 = v69;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v70 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v70 <= 8 )
          v70 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v69 <= v70 )
          break;
      }
      v71 = v94 ^ ((unsigned int)(v25 - a2) >> 12);
      v93 = 0x1000000000000LL;
      *(_BYTE *)(v25 + 6) = BYTE6(qword_140C5A5C0) ^ BYTE6(v25) ^ 1;
      v53 = (a5 & 1) == 0;
      *(_DWORD *)(v25 + 8) = (unsigned __int8)(qword_140C5A5C0 ^ v71) | 0x200;
      if ( v53 )
      {
        sub_14034F7F0(*(unsigned int *)(a1 + 8), a6);
        sub_14036E5F0(a1, a2, BugCheckParameter2a, v95, 0);
        sub_14036E550(a1, *(unsigned int *)(a1 + 8), a6);
      }
      else
      {
        sub_14036E5F0(a1, a2, v68, v69, 0);
      }
      *(_DWORD *)(v25 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
      goto LABEL_38;
    if ( ((v25 + 32) & 0xFFF) == 0 )
      goto LABEL_38;
    v40 = (v25 + 4111) & 0xFFFFFFFFFFFFF000uLL;
    v41 = WORD1(qword_140C5A5C0) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2);
    if ( v40 - v25 >= 16 * (unsigned __int64)v41 )
      goto LABEL_38;
    v59 = v40 - 32;
    LOWORD(v96) = v40 - 32;
    v60 = (__int64)(v40 - 32 - v25) >> 4;
    v61 = v41 - v60;
    *(_WORD *)(v25 + 2) = WORD1(qword_140C5A5C0) ^ v60 ^ WORD1(v25);
    *(_OWORD *)v59 = 0LL;
    *(_OWORD *)(v59 + 16) = 0LL;
    *(_WORD *)(v59 + 2) = v61;
    v62 = v40 - 32 + 16LL * v61;
    *(_WORD *)(v59 + 4) = v60;
    *(_QWORD *)v59 ^= qword_140C5A5C0 ^ v59;
    if ( v62 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      LODWORD(v93) = 0;
      HIDWORD(v93) = (unsigned __int16)v61;
      LOWORD(v96) = v59;
      *(_WORD *)(v62 + 4) = WORD2(qword_140C5A5C0) ^ WORD2(v62) ^ v61;
    }
    LODWORD(v93) = 0;
    v94 = 0LL;
    v63 = sub_14034D4E0(v59, a2, &v93, &v94);
    v64 = ((v94 - ((v94 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v94 - ((v94 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL * ((v64 + (v64 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v59 = qword_140C5A5C0 ^ v96 ^ (v93
                                           + v63
                                           - ((0x101010101010101LL * ((v64 + (v64 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    Root = (unsigned __int64)v6->Root;
    if ( ((__int64)v6->Min & 1) == 0 )
    {
LABEL_81:
      v66 = 0;
      if ( !Root )
        goto LABEL_105;
      while ( 1 )
      {
        if ( ((unsigned int)qword_140C5A5C0 ^ *(_DWORD *)v59 ^ (unsigned int)v59) >= ((unsigned int)qword_140C5A5C0 ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
        {
          v67 = *(_QWORD *)(Root + 8);
          if ( ((__int64)v6->Min & 1) != 0 )
          {
            if ( !v67 )
              goto LABEL_92;
            v67 ^= Root;
          }
          if ( !v67 )
          {
LABEL_92:
            v66 = 1;
            goto LABEL_105;
          }
        }
        else
        {
          v67 = *(_QWORD *)Root;
          if ( ((__int64)v6->Min & 1) != 0 )
          {
            if ( !v67 )
              goto LABEL_104;
            v67 ^= Root;
          }
          if ( !v67 )
            goto LABEL_104;
        }
        Root = v67;
      }
    }
    if ( Root )
    {
      Root ^= (unsigned __int64)v6;
      goto LABEL_81;
    }
    Root = 0LL;
LABEL_104:
    v66 = 0;
LABEL_105:
    RtlRbInsertNodeEx(v6, (PRTL_BALANCED_NODE)Root, v66, (PRTL_BALANCED_NODE)(v59 + 8));
LABEL_38:
    v42 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2));
    v43 = (v25 - a2 + 4127) & 0xFFFFF000;
    v44 = ((v25 & 0xFFF) + v42 + 4095) >> 12;
    v45 = (unsigned __int64)(v42 + 4095) >> 12;
    v46 = (v42 + v25 - a2) & 0xFFFFF000;
    if ( v43 < v46 )
    {
      v47 = v46 - v43;
      v48 = *(_QWORD *)(a2 + 16) & (-1LL << (v43 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v46 - 1) >> 12)));
    }
    else
    {
      v47 = 0;
      v48 = 0LL;
    }
    v49 = v48 - ((v48 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v49 & 0x3333333333333333LL)
                                            + ((v49 >> 2) & 0x3333333333333333LL)
                                            + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v25 = qword_140C5A5C0 ^ v25 ^ (v44
                                           + (v47 >> 12)
                                           - v45
                                           - ((0x101010101010101LL
                                             * (((v49 & 0x3333333333333333LL)
                                               + ((v49 >> 2) & 0x3333333333333333LL)
                                               + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    if ( ((__int64)v6->Min & 1) == 0 )
    {
      v12 = (unsigned __int64)v6->Root;
      goto LABEL_42;
    }
    if ( v6->Root )
    {
      v12 = (unsigned __int64)v6->Root ^ (unsigned __int64)v6;
LABEL_42:
      v50 = 0;
      if ( !v12 )
        goto LABEL_55;
      while ( 1 )
      {
        if ( (*(_DWORD *)v25 ^ (unsigned int)qword_140C5A5C0 ^ (unsigned int)v25) >= ((unsigned int)qword_140C5A5C0 ^ *(_DWORD *)(v12 - 8) ^ ((_DWORD)v12 - 8)) )
        {
          v51 = *(_QWORD *)(v12 + 8);
          if ( ((__int64)v6->Min & 1) != 0 )
          {
            if ( !v51 )
              goto LABEL_53;
            v51 ^= v12;
          }
          if ( !v51 )
          {
LABEL_53:
            v50 = 1;
            goto LABEL_55;
          }
        }
        else
        {
          v51 = *(_QWORD *)v12;
          if ( ((__int64)v6->Min & 1) != 0 )
          {
            if ( !v51 )
              break;
            v51 ^= v12;
          }
          if ( !v51 )
            break;
        }
        v12 = v51;
      }
    }
    v50 = 0;
LABEL_55:
    RtlRbInsertNodeEx(v6, (PRTL_BALANCED_NODE)v12, v50, (PRTL_BALANCED_NODE)(v25 + 8));
  }
  return a4;
}
