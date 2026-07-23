/*
 * XREFs of sub_1405E80B0 @ 0x1405E80B0
 * Callers:
 *     sub_1403718A8 @ 0x1403718A8 (sub_1403718A8.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E8DF8 @ 0x1405E8DF8 (sub_1405E8DF8.c)
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 *     sub_1405EA650 @ 0x1405EA650 (sub_1405EA650.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F1C10 @ 0x1405F1C10 (sub_1405F1C10.c)
 *     sub_1405F22DC @ 0x1405F22DC (sub_1405F22DC.c)
 *     sub_1405F26CC @ 0x1405F26CC (sub_1405F26CC.c)
 *     RtlGetNtGlobalFlags @ 0x1409BA690 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall sub_1405E80B0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r14
  __int16 v7; // bx
  char v8; // di
  _DWORD *v10; // r15
  char v11; // r12
  unsigned __int64 v12; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 **v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 **v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  char v35; // r10
  int v36; // edx
  SIZE_T v37; // rdi
  SIZE_T v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // r14
  __int64 v41; // rdi
  unsigned __int64 v42; // r14
  int v43; // r9d
  int v44; // eax
  int v45; // edx
  __int64 v46; // rdi
  char v47; // bl
  void *v48; // r8
  unsigned __int64 v49; // rdx
  _OWORD *v50; // rax
  unsigned __int64 v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 *v57; // rax
  char v58; // [rsp+20h] [rbp-108h]
  char v59; // [rsp+40h] [rbp-E8h]
  int v60; // [rsp+48h] [rbp-E0h]
  __int64 *v61; // [rsp+58h] [rbp-D0h]
  __int64 v62; // [rsp+58h] [rbp-D0h]
  __int64 *v63; // [rsp+60h] [rbp-C8h]
  __int64 v64; // [rsp+68h] [rbp-C0h]
  __int64 v65; // [rsp+98h] [rbp-90h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-88h]
  __int64 v67; // [rsp+A8h] [rbp-80h]
  __int64 v68; // [rsp+B0h] [rbp-78h]
  __int64 v69; // [rsp+B8h] [rbp-70h]
  __int64 v70; // [rsp+C0h] [rbp-68h]
  __int64 v71; // [rsp+C8h] [rbp-60h]
  __int64 v72; // [rsp+D0h] [rbp-58h]
  __int64 v73; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-40h]
  char v76; // [rsp+138h] [rbp+10h]
  unsigned __int64 v78; // [rsp+148h] [rbp+20h] BYREF

  v78 = a4;
  v76 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v67 = 0LL;
  v60 = 1;
  v68 = 0LL;
  a5 = 0;
  v10 = 0LL;
  v71 = 0LL;
  v65 = 0LL;
  v70 = 0LL;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v60 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v78 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v78 = v15;
    }
    v12 = v15 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v78 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    a5 = 1;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v51 = v6 + 48;
      v78 = v51 + 8;
      if ( (unsigned int)sub_140351BF4(
                           (v51 + 4103) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376)) )
      {
        v70 = (sub_140363220(1) & 0xF) << 12;
        v53 = sub_1405EA650(v52, &v78, v70, &v65);
        v54 = (_QWORD *)v53;
        v71 = v53;
        if ( v53 )
        {
          v55 = v78;
          *(_WORD *)(v53 + 56) = v78 - v7;
          *(_BYTE *)(v53 + 58) = v11 | 2;
          *(_QWORD *)(v53 + 32) = v55;
          *(_QWORD *)(v53 + 40) = v65;
          *(_BYTE *)(v53 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v55;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v53 + 59) = *(_BYTE *)(v53 + 56) ^ *(_BYTE *)(v53 + 57) ^ *(_BYTE *)(v53 + 58);
            *(_DWORD *)(v53 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v56 = a1 + 272;
          v57 = *(__int64 **)(a1 + 280);
          if ( *v57 == a1 + 272 )
          {
            *v54 = v56;
            v54[1] = v57;
            *v57 = (__int64)v54;
            *(_QWORD *)(a1 + 280) = v54;
          }
          else
          {
            sub_1405F1BBC(13, 0, v56, 0, *v57, 0LL);
          }
          v10 = v54 + 8;
        }
        else
        {
          v10 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_114;
      }
    }
    goto LABEL_113;
  }
  v72 = a1 + 336;
  v16 = sub_1405F22DC(a1, v12);
  v73 = v16;
  if ( a1 + 336 == v16 )
  {
LABEL_40:
    v26 = sub_1405E9C3C(a1);
    v17 = v26;
    v66 = v26;
    if ( v26 )
    {
      v27 = v26 + 16;
      v28 = *(_QWORD *)(v26 + 16);
      v62 = v28;
      v29 = *(__int64 **)(v26 + 24);
      v63 = v29;
      v30 = *v29;
      v31 = *(_QWORD *)(v28 + 8);
      if ( *v29 != v31 || v30 != v27 )
      {
        sub_1405F1BBC(13, a1, v27, v31, v30, 0LL);
        goto LABEL_114;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
      v32 = *(__int64 ***)(a1 + 312);
      if ( v32 )
      {
        v33 = *(unsigned __int16 *)(v17 + 8);
        while ( 1 )
        {
          v34 = *((unsigned int *)v32 + 2);
          if ( v33 < v34 )
            break;
          if ( !*v32 )
          {
            LODWORD(v33) = v34 - 1;
            break;
          }
          v32 = (__int64 **)*v32;
        }
        sub_1405F26CC(a1, (_DWORD)v32, v27, v27, v33, *(unsigned __int16 *)(v17 + 8));
        v28 = v62;
        v29 = v63;
      }
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
LABEL_50:
      v35 = *(_BYTE *)(v17 + 10);
      v59 = v35;
      v36 = v60;
      if ( !v60 && (v35 & 4) != 0 )
      {
        v37 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
        if ( (v35 & 2) != 0 && v37 > 4 )
          v37 = 16LL * *(unsigned __int16 *)(v17 + 8) - 36;
        v38 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v37, 0xFEEEFEEE);
        if ( v38 != v37 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v17,
            (const void *)(v17 + v38 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v35 = v59;
        v36 = 0;
      }
      v67 = v17;
      if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
      {
        sub_1405F1BBC(3, a1, v17, 0, 0LL, 0LL);
        goto LABEL_114;
      }
      *(_BYTE *)(v17 + 10) = v11;
      v39 = *(unsigned __int16 *)(v17 + 8) - v12;
      v68 = v39;
      *(_WORD *)(v17 + 8) = v12;
      v40 = v6 - a3;
      v74 = v40;
      v41 = 16 * v12;
      if ( v40 >= 0x3F )
      {
        *(_QWORD *)(v41 + v17) = v40;
        *(_BYTE *)(v17 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v17 + 15) = v40;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          ++*(_WORD *)(v17 + 8);
          v42 = v40 + 16;
          v75 = v42;
          if ( v42 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16 * (v12 + 1)) = v42;
            *(_BYTE *)(v17 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v42;
          }
        }
        else
        {
          v43 = v36 ^ 1;
          v44 = *(unsigned __int8 *)(v17 + 14);
          if ( (_BYTE)v44 )
            v45 = (v17 & 0xFFFF0000) + ((1 - v44) << 16);
          else
            v45 = a1;
          v58 = v43;
          LOBYTE(v43) = v35;
          if ( !(unsigned __int8)sub_1405E8DF8(a1, v45, (int)v41 + (int)v17, v43, v58, v12, v39) )
            goto LABEL_114;
        }
      }
      v10 = (_DWORD *)(v17 + 16);
      v46 = 16LL * *(unsigned __int16 *)(v17 + 8);
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
        v46 -= 8LL;
      if ( v60 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v47 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v47 = 0;
        }
        if ( (v76 & 8) != 0 )
          memset(v10, 0, v46 - 8);
        goto LABEL_115;
      }
      if ( (v76 & 8) != 0 )
      {
        memset((void *)(v17 + 16), 0, v46 - 8);
LABEL_92:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(__m128i *)((char *)v10 + a3) = _mm_load_si128((const __m128i *)&xmmword_14001C750);
          *(_BYTE *)(v17 + 10) |= 4u;
        }
        *(_BYTE *)(v17 + 11) = 0;
        if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v17 + 15) == 4 )
            v50 = (_OWORD *)(v17 - 32);
          else
            v50 = (_OWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
          *v50 = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_114;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_92;
      v48 = (void *)(v17 + 16);
      v69 = v17 + 16;
      v49 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      if ( !v49 )
        goto LABEL_92;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        if ( !--v49 )
          goto LABEL_92;
        v48 = (void *)(v17 + 20);
        v69 = v17 + 20;
      }
      memset64(v48, 0xBAADF00DBAADF00DuLL, v49 >> 1);
      if ( (v49 & 1) != 0 )
        *((_DWORD *)v48 + v49 - 1) = -1163005939;
      goto LABEL_92;
    }
LABEL_113:
    v10 = 0LL;
    goto LABEL_114;
  }
  v17 = v16 - 16;
  v66 = v16 - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
      sub_1405F1C10(a1, v17);
  }
  v18 = *(unsigned __int16 *)(v17 + 8);
  if ( v18 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v19 = *(_QWORD *)(v17 + 16);
  v64 = v19;
  v20 = *(__int64 **)(v17 + 24);
  v61 = v20;
  v21 = *v20;
  v22 = *(_QWORD *)(v19 + 8);
  if ( *v20 == v22 && v21 == v17 + 16 )
  {
    *(_QWORD *)(a1 + 192) -= v18;
    v23 = *(__int64 ***)(a1 + 312);
    if ( v23 )
    {
      v24 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( v24 < v25 )
          break;
        if ( !*v23 )
        {
          LODWORD(v24) = v25 - 1;
          break;
        }
        v23 = (__int64 **)*v23;
      }
      sub_1405F26CC(a1, (_DWORD)v23, (_DWORD)v20, v17 + 16, v24, *(unsigned __int16 *)(v17 + 8));
      v19 = v64;
      v20 = v61;
    }
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    goto LABEL_50;
  }
  sub_1405F1BBC(13, a1, v17 + 16, v22, v21, 0LL);
LABEL_114:
  v47 = a5;
LABEL_115:
  if ( v47 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
