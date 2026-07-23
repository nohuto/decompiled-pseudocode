/*
 * XREFs of sub_140291FC0 @ 0x140291FC0
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_140243EC4 @ 0x140243EC4 (sub_140243EC4.c)
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_140247C5C @ 0x140247C5C (sub_140247C5C.c)
 *     sub_140291158 @ 0x140291158 (sub_140291158.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 *     sub_1405A6A10 @ 0x1405A6A10 (sub_1405A6A10.c)
 *     sub_1405A6DAC @ 0x1405A6DAC (sub_1405A6DAC.c)
 *     sub_1405A7608 @ 0x1405A7608 (sub_1405A7608.c)
 *     sub_1405A7A74 @ 0x1405A7A74 (sub_1405A7A74.c)
 */

__int64 __fastcall sub_140291FC0(__int64 a1, signed __int64 a2)
{
  ULONG_PTR v2; // r12
  ULONG_PTR v3; // r11
  ULONG_PTR v4; // r13
  volatile signed __int64 *v6; // rdi
  __int64 v7; // r8
  ULONG_PTR v8; // r14
  signed __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r9
  int v18; // r10d
  signed __int64 v19; // rcx
  int v21; // eax
  char v22; // al
  _BYTE *v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v30; // rcx
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp+8h]
  signed __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  __int64 v33; // [rsp+80h] [rbp+18h]

  v32 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  BugCheckParameter3 = v3;
  v6 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  v33 = v7;
  v8 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
LABEL_2:
    v9 = v32;
    if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v32 & 0x80u) != 0LL )
    {
      if ( (v3 & 1) != 0 )
      {
        v23 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *v23 == 3 || *v23 == 6 )
          return (unsigned int)-1073741819;
LABEL_77:
        KeBugCheckEx(0x50u, v2, v4, v3, 8uLL);
      }
      if ( !sub_140230BA0(v3, 0) )
      {
        v3 = BugCheckParameter3;
        goto LABEL_77;
      }
      return (unsigned int)-1073741819;
    }
    v10 = 0LL;
    v11 = 0;
    if ( (v32 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741819;
    if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 && v3 && v2 < 0xFFFF800000000000uLL && (v3 & 1) == 0 && !sub_140291158(v3) )
    {
      if ( !sub_140230BA0(v3, v10) )
        KeBugCheckEx(0x50u, v2, v4, BugCheckParameter3, 0xFuLL);
      v7 = v33;
      v10 = 0LL;
      v3 = BugCheckParameter3;
    }
    if ( (v4 & 2) == 0 )
    {
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 < 0 )
        {
          if ( !(unsigned int)sub_1405A6DAC(v7, v2) )
            return (unsigned int)-1073741819;
          v27 = ((unsigned __int64)sub_140317A10(&v32) >> 12) & 0xFFFFFFFFFFLL;
          if ( v27 > qword_140C50840 || (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
            return (unsigned int)-1073741819;
          v28 = v9 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (dword_140D06880 & 0x100) != 0 || (dword_140D06880 & 0x200) != 0 )
            v28 |= 0x20uLL;
          sub_14033DBC0(v6, v28);
          if ( (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
          {
            v10 = 1LL;
LABEL_119:
            std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v2, v10, 0LL);
          }
LABEL_33:
          if ( v8 )
          {
            if ( *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
              sub_14045C52A(a1, BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL, v6, v17);
          }
          return v11;
        }
        if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        {
          sub_140247C5C(a1, v9, 5u);
          v3 = BugCheckParameter3;
          v10 = 0LL;
        }
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 && !(unsigned int)sub_1405A6A10(&v32) )
        return (unsigned int)-1073741819;
LABEL_21:
      v17 = (unsigned int)v10;
      v18 = v10;
      v19 = v9;
      if ( (v9 & 0x20) != 0 )
      {
        if ( (!v8 || *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
          && (dword_140D06880 & 0x100) == 0
          && (dword_140D06880 & 0x200) == 0 )
        {
          v17 = 1LL;
        }
      }
      else
      {
        v19 = v9 | 0x20;
        v18 = 1;
      }
      if ( (*(_QWORD *)(a1 + 8) & 2) != 0 )
      {
        if ( (v19 & 0x42) == 0 )
        {
LABEL_28:
          v19 |= 0x62uLL;
LABEL_29:
          if ( (dword_140D06880 & 0x4000000) != 0 )
            _mm_lfence();
          if ( v9 != _InterlockedCompareExchange64(v6, v19, v9) )
            goto LABEL_33;
LABEL_32:
          if ( (_DWORD)v17 && (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
          {
            v30 = *(_QWORD *)(a1 + 56);
            if ( v30 )
              v10 = (unsigned int)sub_140333AA0(v30);
            goto LABEL_119;
          }
          goto LABEL_33;
        }
        if ( (v19 & 0x42) == 0x40 )
        {
          v17 = 1LL;
          goto LABEL_28;
        }
      }
      if ( !v18 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( (v9 & 0x200) != 0 )
    {
      v21 = sub_140316400(v2);
      v11 = v21;
      if ( v21 < 0 )
      {
        sub_1405A7A74(a1, (unsigned int)v21);
        return v11;
      }
      v11 = 274;
      goto LABEL_33;
    }
    if ( (v9 & 0x800) == 0 )
      return (unsigned int)-1073741819;
    if ( v9 >= 0 && (v9 & 0x42) == 0 && (*(_DWORD *)(v7 + 1124) & 0x10) != 0 && v2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
      {
        if ( (*((_BYTE *)CurrentThread + 1385) & 0x10) == 0 )
          return (unsigned int)-1073739997;
      }
      else if ( (*((_BYTE *)CurrentThread + 1385) & 0x20) == 0 )
      {
        v9 = v32;
        v11 = sub_1405A7608(a1, v32);
        if ( (v11 & 0x80000000) != 0 )
          return v11;
        goto LABEL_9;
      }
      v9 = v32;
    }
LABEL_9:
    v12 = ((unsigned __int64)sub_140317A10(&v32) >> 12) & 0xFFFFFFFFFFLL;
    if ( v12 <= qword_140C50840 )
    {
      v13 = 6 * v12;
      if ( _bittest64((const signed __int64 *)(48 * v12 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v14 = 48 * v12 - 0x220000000000LL;
        v15 = *(_QWORD *)(v14 + 16);
        v16 = v14 + 16;
        v33 = 8 * v13 - 0x220000000000LL;
        if ( (unsigned __int64)(v14 + 16) >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
            && (v15 & 1) != 0
            && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            v25 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((v16 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (v26 & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
          v9 = v32;
        }
        if ( (v15 & 1) == 0
          && (!v15 || (!qword_140C50780 || (qword_140C50780 & v15) != 0) && (v15 & 0x400) == 0)
          && (v15 & 4) != 0 )
        {
          sub_14033E534(v14, 1LL);
          v14 = v33;
        }
        if ( *(__int64 *)(v14 + 40) < 0 && (*(_DWORD *)v16 & 0x400LL) != 0 )
          sub_140243EC4(v14);
      }
    }
    v3 = BugCheckParameter3;
    v10 = 0LL;
    goto LABEL_21;
  }
  v22 = *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v22 == 1 )
  {
    sub_1402464E0(v3 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
  }
  else if ( v22 != 3 )
  {
    goto LABEL_2;
  }
  return 0LL;
}
