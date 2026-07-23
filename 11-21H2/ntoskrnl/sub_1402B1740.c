/*
 * XREFs of sub_1402B1740 @ 0x1402B1740
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140220DF0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402FDBE0 @ 0x1402FDBE0 (sub_1402FDBE0.c)
 * Callees:
 *     sub_140233430 @ 0x140233430 (sub_140233430.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 *     sub_1406327B8 @ 0x1406327B8 (sub_1406327B8.c)
 */

__int64 __fastcall sub_1402B1740(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2, _QWORD *a3)
{
  bool v5; // r12
  unsigned int v6; // ecx
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned int v9; // edi
  signed __int64 v10; // rbp
  int v11; // eax
  int v12; // r11d
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r13d
  __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // esi
  char v22; // bp
  unsigned int v23; // ebp
  __int64 result; // rax
  unsigned int v25; // edi
  unsigned int v26; // esi
  ULONG_PTR v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  ULONG_PTR v30; // r11
  unsigned __int64 v31; // rcx
  ULONG_PTR v32; // rbp
  ULONG_PTR v33; // rdi
  __int64 v34; // rax
  struct _KPRCB *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rdi
  volatile signed __int32 *v42; // r15
  unsigned __int16 *v43; // rax
  unsigned __int16 *v44; // rdi
  __int64 v45; // rax
  void **v46; // rcx
  __int64 v47; // r9
  char v48; // al
  __int64 v49; // r8
  unsigned __int16 *v50; // rdx
  __int64 v51; // rdi
  bool v52; // zf
  char v53; // al
  int v54; // eax
  struct _KPRCB *v55; // r9
  __int64 v56; // r8
  _QWORD *v57; // rax
  int v58; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  unsigned __int8 v63; // cl
  __int64 v64; // r9
  __int64 v65; // r9
  unsigned __int8 v66; // al
  __int64 v67; // r9
  _QWORD *v68; // r9
  __int64 v69; // rcx
  char v70; // al
  int v71; // r8d
  unsigned __int16 **v72; // rdx
  unsigned __int16 *v73; // rdx
  _QWORD *v74; // [rsp+30h] [rbp-78h] BYREF
  __int64 v75; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v76; // [rsp+40h] [rbp-68h]
  struct _KPRCB *v77; // [rsp+48h] [rbp-60h]
  __int64 v78; // [rsp+50h] [rbp-58h]
  volatile signed __int32 *v79; // [rsp+58h] [rbp-50h]
  _QWORD *v80; // [rsp+60h] [rbp-48h]
  __int64 v81; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v83; // [rsp+B0h] [rbp+8h]
  __int64 v84; // [rsp+B8h] [rbp+10h]
  struct _KPRCB *v85; // [rsp+C8h] [rbp+20h]

  v74 = 0LL;
  v5 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 1120);
  v7 = *(_QWORD *)(BugCheckParameter1 + 48);
  v8 = BugCheckParameter1 + 48;
  if ( v7 != BugCheckParameter2 )
  {
    v27 = BugCheckParameter1 + 48;
    v28 = v7 != 0;
    if ( v7 )
      v27 = 0LL;
    if ( !v6
      || (v29 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v29 + 8)
      || (v8 = v29 + 16LL * v6, *(_QWORD *)v8 != BugCheckParameter2) )
    {
      v30 = *(_QWORD *)(BugCheckParameter1 + 16);
      v31 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v30 || (v8 = v30 + 16, v28 >= v31) )
LABEL_87:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v30, 2uLL);
      while ( 1 )
      {
        v32 = v27;
        v33 = v27;
        if ( *(_QWORD *)v8 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v8 )
        {
          if ( ++v28 == v31 )
            goto LABEL_87;
        }
        else
        {
          v27 = v8;
          if ( v33 )
            v27 = v32;
        }
        v8 += 16LL;
        if ( v8 == v30 + 16LL * *(unsigned int *)(v30 + 8) )
          goto LABEL_87;
      }
      *((_BYTE *)KeGetCurrentThread() + 1120) = (__int64)(v8 - v30) >> 4;
    }
  }
  v9 = *(_DWORD *)(v8 + 8) & 7 | (8 * (*(_DWORD *)(v8 + 8) >> 3) - 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 < 8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (v9 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
      goto LABEL_14;
    }
    if ( v10 )
    {
      if ( (v9 & 1) != 0 )
      {
        sub_1402ACD80(v10, 1, 0, 0LL);
        *(_DWORD *)(v8 + 8) &= ~1u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        LOBYTE(v11) = v9;
      }
      if ( (v11 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1444));
        *(_DWORD *)(v8 + 8) &= ~4u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      if ( (v11 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v10);
        *(_DWORD *)(v8 + 8) &= ~2u;
      }
    }
LABEL_14:
    *(_QWORD *)v8 = 0LL;
    v12 = 1;
    v13 = *(_DWORD *)(BugCheckParameter1 + 64);
    v14 = 0LL;
    v83 = *(_DWORD *)(BugCheckParameter1 + 68);
    v75 = 0LL;
    if ( v13 <= 1 )
    {
      if ( *(_DWORD *)(BugCheckParameter1 + 76) )
      {
        sub_140233430((_QWORD **)(BugCheckParameter1 + 40), &v74, &v75);
        --*(_DWORD *)(BugCheckParameter1 + 76);
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
        v15 = v12;
        v13 = *(_DWORD *)(BugCheckParameter1 + 64);
        v14 = v75;
      }
      else
      {
        v15 = *(_DWORD *)(BugCheckParameter1 + 72);
        if ( !v15 )
          goto LABEL_17;
        v57 = *(_QWORD **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        v74 = v57;
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      }
LABEL_18:
      *(_DWORD *)(BugCheckParameter1 + 64) = v13 + v15 - 1;
      if ( !(v13 + v15 - 1) )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v16 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v14 )
      {
        v38 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
        *(_QWORD *)(BugCheckParameter1 + 48) = v14;
        *(_DWORD *)(BugCheckParameter1 + 56) = v38 | 8;
      }
      if ( ((unsigned __int8)v12 & BYTE6(xmmword_140D06900)) != 0 )
      {
        sub_14056E6FC(a3, retaddr);
        v12 = 1;
        goto LABEL_28;
      }
      _m_prefetchw(a3);
      v17 = *a3;
      if ( !*a3 )
      {
        if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        {
LABEL_28:
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v19 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v58 = *(_DWORD *)(v19 + 24) - 1;
              *(_DWORD *)(v19 + 24) = v58;
              if ( !v58 )
              {
                sub_140418E4C(CurrentPrcb);
                v12 = 1;
              }
            }
          }
          v20 = *((unsigned __int8 *)a3 + 16);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
              {
                v60 = KeGetCurrentPrcb();
                v61 = *((_QWORD *)v60 + 4375);
                v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v52 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
                *(_DWORD *)(v61 + 20) &= v62;
                if ( v52 )
                {
                  sub_140418E4C(v60);
                  v12 = 1;
                }
              }
            }
          }
          __writecr8(v20);
          v21 = v12;
          v22 = 2 * (v75 != 0) + 1;
          if ( !v74 )
            goto LABEL_31;
          v39 = KeGetCurrentIrql();
          v81 = v39;
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v39 <= 0xFu )
          {
            v47 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v47 + 20) |= (-1 << (v39 + 1)) & 4;
          }
          v85 = KeGetCurrentPrcb();
          v40 = v74;
          while ( 1 )
          {
            v41 = v40;
            v42 = (volatile signed __int32 *)(v40 + 3);
            v80 = (_QWORD *)*v40;
            sub_1402F3290(v40 + 3);
            *((_DWORD *)v41 + 7) = 1;
            v43 = (unsigned __int16 *)v41[4];
            if ( v43 != (unsigned __int16 *)(v41 + 4) )
              break;
            v51 = (__int64)v85;
LABEL_75:
            _InterlockedAnd(v42, 0xFFFFFF7F);
            v40 = v80;
            if ( v80 == v74 )
            {
              v53 = sub_14035B110(v51, *(_QWORD *)(v51 + 8));
              if ( v16 )
              {
                v21 = 2;
                if ( v53 > (char)v16 )
                  v16 = v53;
              }
              if ( (v22 & 2) != 0 && v21 == 1 )
                v16 = 1;
              sub_1402B0820(v51, 0, v21, v16, v81);
LABEL_31:
              v23 = v83;
              result = 0LL;
              v25 = 0;
              v26 = 65602;
              goto LABEL_32;
            }
          }
          while ( 1 )
          {
            v44 = v43;
            v45 = *(_QWORD *)v43;
            v79 = (volatile signed __int32 *)v45;
            v46 = (void **)*((_QWORD *)v44 + 1);
            if ( *(unsigned __int16 **)(v45 + 8) != v44 || *v46 != v44 )
LABEL_67:
              __fastfail(3u);
            *v46 = (void *)v45;
            *(_QWORD *)(v45 + 8) = v46;
            v48 = *((_BYTE *)v44 + 16);
            switch ( v48 )
            {
              case 1:
                v49 = v44[9];
                v50 = v44;
                v51 = (__int64)v85;
                if ( (unsigned __int8)sub_1402F6BC0(v85, v50, v49, 0LL) )
                {
                  v52 = (*((_DWORD *)v42 + 1))-- == 1;
                  if ( v52 )
                    goto LABEL_75;
                }
                break;
              case 2:
                *((_BYTE *)v44 + 17) = 5;
                v84 = *((_QWORD *)v44 + 3);
                v76 = (_QWORD *)(v84 + 8);
                *(_QWORD *)v44 = 0LL;
                v63 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v63 <= 0xFu )
                {
                  v64 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                  *(_DWORD *)(v64 + 20) |= (-1 << (v63 + 1)) & 4;
                }
                v77 = KeGetCurrentPrcb();
                v65 = *((_QWORD *)v77 + 1);
                v78 = v65;
                if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
                {
                  v66 = sub_14056B1E4(v65);
                  sub_14062DA60(v67, v44, v66);
                }
                sub_1402F3290(v84);
                v68 = v76;
                v69 = v84;
                if ( (_QWORD *)*v68 != v68
                  && *(_DWORD *)(v84 + 40) < *(_DWORD *)(v84 + 44)
                  && (*(_QWORD *)(v78 + 232) != v84 || *(_BYTE *)(v78 + 643) != 15) )
                {
                  v70 = sub_1402F6A70(v77, v84, v44);
                  v69 = v84;
                  if ( v70 )
                  {
                    *(_QWORD *)v44 = 0LL;
                    goto LABEL_127;
                  }
                  v68 = v76;
                }
                v71 = *(_DWORD *)(v69 + 4);
                *(_DWORD *)(v69 + 4) = v71 + 1;
                v72 = *(unsigned __int16 ***)(v69 + 32);
                if ( *v72 != (unsigned __int16 *)(v69 + 24) )
                  goto LABEL_67;
                *(_QWORD *)v44 = v69 + 24;
                *((_QWORD *)v44 + 1) = v72;
                *v72 = v44;
                *(_QWORD *)(v69 + 32) = v44;
                if ( !v71 && (_QWORD *)*v68 != v68 )
                {
                  sub_14035B550(v77, v69);
                  v69 = v84;
                }
LABEL_127:
                _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
                v52 = (*((_DWORD *)v42 + 1))-- == 1;
                v51 = (__int64)v85;
                if ( v52 )
                  goto LABEL_75;
                break;
              case 4:
                *((_BYTE *)v44 + 17) = 5;
                *((_DWORD *)v42 + 1) = 0;
                KeInsertQueueDpc(*((PRKDPC *)v44 + 3), (PVOID)v42, v44);
                v51 = (__int64)v85;
                break;
              default:
                v73 = v44;
                v51 = (__int64)v85;
                sub_1402F6BC0(v85, v73, 256LL, 0LL);
                break;
            }
            v43 = (unsigned __int16 *)v79;
            if ( v79 == v42 + 2 )
              goto LABEL_75;
          }
        }
        v17 = sub_140282C20(a3);
        v12 = 1;
      }
      *a3 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
      goto LABEL_28;
    }
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v23 = *(_DWORD *)(BugCheckParameter1 + 68);
  v26 = 65618;
  v25 = v9 >> 3;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v34 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_52;
      v34 = sub_140282C20(a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v34 + 8), 1uLL);
  }
LABEL_52:
  v35 = KeGetCurrentPrcb();
  v36 = *((_QWORD *)v35 + 4375);
  if ( v36 )
  {
    if ( *((_BYTE *)v35 + 32) <= 1u )
    {
      v54 = *(_DWORD *)(v36 + 24) - 1;
      *(_DWORD *)(v36 + 24) = v54;
      if ( !v54 )
        sub_140418E4C(v35);
    }
  }
  result = (unsigned int)dword_140D06B08;
  v37 = *((unsigned __int8 *)a3 + 16);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v37 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = *((_QWORD *)v55 + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
        v52 = ((unsigned int)result & *(_DWORD *)(v56 + 20)) == 0;
        *(_DWORD *)(v56 + 20) &= result;
        if ( v52 )
          result = sub_140418E4C(v55);
      }
    }
  }
  __writecr8(v37);
LABEL_32:
  __incgsdword(0x8A70u);
  if ( v5 )
    return sub_1406327B8(v26, BugCheckParameter1, v25, v23);
  return result;
}
