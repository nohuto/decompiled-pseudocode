/*
 * XREFs of sub_140319160 @ 0x140319160
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 * Callees:
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_14024129C @ 0x14024129C (sub_14024129C.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140375150 @ 0x140375150 (sub_140375150.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405A5FCC @ 0x1405A5FCC (sub_1405A5FCC.c)
 *     sub_1405AB064 @ 0x1405AB064 (sub_1405AB064.c)
 *     sub_1405AB0FC @ 0x1405AB0FC (sub_1405AB0FC.c)
 */

unsigned __int64 __fastcall sub_140319160(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 **a3,
        _DWORD *a4,
        _WORD *a5)
{
  _WORD *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned int v11; // esi
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rbx
  int v29; // r8d
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  _WORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // esi
  unsigned int v37; // r8d
  int v38; // edx
  __int64 v39; // r9
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v6 = *(_QWORD *)a2;
  v42 = 0LL;
  a5 = 0LL;
  *v5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v33 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 8 * ((a2 >> 3) & 0x1FF));
      v35 = v6 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v6;
      v6 = v35;
      if ( (v34 & 0x42) != 0 )
        v6 = v35 | 0x42;
    }
  }
  v11 = *(_DWORD *)(BugCheckParameter2 + 48);
  v12 = v11 & 0x70;
  if ( (_DWORD)v12 == 48 && (v11 & 0x6200000) != 0x4200000 )
  {
    *v5 = sub_1405AB064(v6, 0xFFFFF6FB7DBED000uLL, v12, 0xFFFFF6FB7DBED7F8uLL);
    return sub_1405AB0FC(BugCheckParameter2, v6);
  }
  if ( (v6 & 1) != 0 )
  {
    v13 = (v6 >> 12) & 0xFFFFFFFFFFLL;
    v14 = 6 * v13;
    if ( (_DWORD)v12 == 16 )
    {
      if ( v13 <= qword_140C50840 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        *v5 = (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) >> 43) & 0x3FF;
      v36 = (v11 >> 7) & 0x1F;
      if ( (v6 & 0x18) == 8 )
      {
        v36 |= 0x18u;
      }
      else if ( (v6 & 0x10) != 0 )
      {
        v36 |= 8u;
      }
      return v36;
    }
    else if ( (_DWORD)v12 == 64 && sub_1402433D0(a2) )
    {
      v37 = 4;
      if ( (v6 & 0x800) == 0 )
        v37 = 1;
      v38 = v11 & 0xC00;
      if ( (v11 & 0x380) != 0 && v38 == 3072 )
      {
        v37 |= 0x18u;
      }
      else if ( v38 == 1024 )
      {
        v37 |= 8u;
      }
      return v37;
    }
    else
    {
      v15 = *(_QWORD *)(8 * v14 - 0x220000000000LL + 40);
      *v5 = ((unsigned __int64)v15 >> 43) & 0x3FF;
      if ( (v15 & 0x10000000000LL) != 0 )
      {
        result = sub_1405A5FCC(BugCheckParameter2, v6);
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
          *a4 = 0;
      }
      else if ( v15 < 0 )
      {
        v17 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
        v18 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL
          && v17 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v39 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v40 & 0x20) != 0 )
              v18 |= 0x20uLL;
            if ( (v40 & 0x42) != 0 )
              v18 |= 0x42uLL;
          }
        }
        result = (v18 >> 60) & 7;
        if ( (_DWORD)result )
        {
          if ( (*(_QWORD *)v17 & 0x18) == 8 )
          {
            return (unsigned int)result | 0x18;
          }
          else if ( (*(_QWORD *)v17 & 0x10) != 0 )
          {
            return (unsigned int)result | 8;
          }
        }
        else
        {
          v19 = (*(_DWORD *)(8 * v14 - 0x220000000000LL + 16) >> 5) & 0x1F;
          if ( *(__int64 *)(8 * v14 - 0x220000000000LL + 8) > 0 )
          {
            return (unsigned int)dword_140015AB0[v19];
          }
          else
          {
            v20 = *((_QWORD *)KeGetCurrentThread() + 23);
            if ( *(_QWORD *)(v20 + 1264) )
            {
              if ( sub_140234F14(v20, *(_QWORD *)(8 * v14 - 0x220000000000LL + 8) | 0x8000000000000000uLL) )
                LODWORD(v19) = dword_140015AB0[v19];
            }
            return (unsigned int)v19;
          }
        }
      }
      else
      {
        return (*(_DWORD *)(8 * v14 - 0x220000000000LL + 16) >> 5) & 0x1F;
      }
    }
    return result;
  }
  if ( (v6 & 0x400) == 0 )
  {
    if ( (v6 & 0x800) != 0 && (v21 = sub_140315D60(a2, 0LL, 2)) != 0 )
    {
      v22 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
      if ( (*(_DWORD *)(v22 + 4) & 0x100) != 0 )
        v22 = **(_QWORD **)(v22 + 16624);
      *v5 = *(_WORD *)v22;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      *v5 = **(_WORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
    }
    v23 = (v6 >> 5) & 0x1F;
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
      *a4 = 0;
    return (unsigned int)v23;
  }
  if ( sub_1402806A0(v6) )
  {
    v23 = (v6 >> 5) & 0x1F;
    if ( (v11 & 0x200000) == 0 )
    {
      *v5 = **(_WORD **)(qword_140C51F48 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v24 = (unsigned __int64)((__int64)(a2 << 25) >> 16) >> 12;
      v25 = (__int64 *)sub_140319600(BugCheckParameter2, v24, 4LL, &a5);
      if ( !v25 )
        return 0LL;
      v26 = *(_QWORD **)(BugCheckParameter2 + 120);
      if ( (__int64)v26 < 0
        && v24
         - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) > (unsigned __int64)(*v26 - 1LL) >> 12 )
      {
        return 0LL;
      }
      if ( !*(_QWORD *)(*(_QWORD *)a5 + 64LL) && (*(_DWORD *)(*(_QWORD *)a5 + 56LL) & 0x2000) == 0 )
      {
        if ( (int)sub_14026FA0C((unsigned __int64)v25, (__int64)v26, &v42, 0LL) < 0 )
        {
          *a3 = v25;
          return 256LL;
        }
        LOBYTE(v27) = 2;
        v28 = *v25;
        sub_140334790(v42, v27);
        if ( !v28 )
          return 0LL;
      }
    }
    return (unsigned int)v23;
  }
  if ( sub_1402802DC(v6) )
  {
    v32 = **(_WORD ***)(((v30 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
LABEL_47:
    *v5 = *v32;
    return (unsigned int)dword_140015AB0[(unsigned int)sub_140375150(v30)];
  }
  v31 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v31 + 1264) )
  {
    v41 = sub_140234F14(v31, v30);
    if ( v41 )
    {
      v32 = *(_WORD **)(v41[7] + 24LL);
      goto LABEL_47;
    }
  }
  if ( v29 != 32 || (v11 & 0xF80) != 0x380 )
    KeBugCheckEx(0x1Au, 0x41202uLL, a2, v6, BugCheckParameter2);
  *v5 = **(_WORD **)(qword_140C51F48 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
  return sub_14024129C(BugCheckParameter2, v30);
}
