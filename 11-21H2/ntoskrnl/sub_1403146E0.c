/*
 * XREFs of sub_1403146E0 @ 0x1403146E0
 * Callers:
 *     sub_140227360 @ 0x140227360 (sub_140227360.c)
 *     sub_140247A74 @ 0x140247A74 (sub_140247A74.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 * Callees:
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402746C0 @ 0x1402746C0 (sub_1402746C0.c)
 *     sub_140274720 @ 0x140274720 (sub_140274720.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140331CC0 @ 0x140331CC0 (sub_140331CC0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403146E0(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  BOOL v4; // ebx
  int v6; // r12d
  int v8; // ebp
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r14d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned int v25; // ecx
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 *v33; // rbx
  char v34; // cl
  int v35; // r8d
  int v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h] BYREF
  int *v38; // [rsp+40h] [rbp-68h]
  _OWORD v39[2]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 1;
  v38 = a4;
  v37 = a1;
  v6 = 10;
  v8 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 48 * (((unsigned __int64)sub_140317A10(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v36 = 1;
    v12 = *(_QWORD *)v9;
    v6 = 10 - ((a3 & 2) != 0);
    if ( (unsigned int)sub_140317A80(v9)
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8 * ((v9 >> 3) & 0x1FF));
        v15 = v12 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v15 = v12;
        v12 = v15;
        if ( (v14 & 0x42) != 0 )
          v12 = v15 | 0x42;
      }
    }
    v11 = HIBYTE(v12) & 0xF | (16 * ((v12 >> 60) & 7));
    v4 = *(_QWORD *)(v10 + 40) >= 0LL;
    if ( (v11 & 0xF) == 8 )
    {
      sub_1402E599C(v37, a2, v10);
      v11 = sub_14033A410(v16, a2);
    }
  }
  else
  {
    v11 = (*(_BYTE *)v10 >> 1) & 7;
    v36 = 0;
  }
  v17 = 0xFFFFF6FB40000000uLL;
  if ( (a3 & 3) != 0 )
  {
    v20 = v36;
    goto LABEL_45;
  }
  if ( (a3 & 4) != 0 )
  {
    v18 = sub_140317A10(v9);
    v17 = 0xFFFFF6FB40000000uLL;
    v19 = v18 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = v36;
  if ( !v36 )
  {
    if ( !(unsigned int)sub_140229100(v37, v9, v19, 0) )
    {
      *v38 = 0;
      return 0LL;
    }
    goto LABEL_43;
  }
  v22 = *(_QWORD *)v9;
  v23 = 0xFFFFF6FB7DBED000uLL;
  v24 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)sub_140229550() )
    goto LABEL_40;
  v25 = ((unsigned int)dword_140D06880 >> 27) & 3;
  if ( v25 > 1 )
  {
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
  }
  else
  {
    if ( !v25 )
    {
LABEL_38:
      if ( v9 < v23 || v9 > v24 )
      {
LABEL_42:
        *(_QWORD *)v9 = v19;
        goto LABEL_43;
      }
LABEL_40:
      if ( (unsigned int)sub_140229550() )
      {
        *(_QWORD *)v9 = v19;
        sub_1402294F0(v9, v19);
        v8 = 1;
        goto LABEL_45;
      }
      goto LABEL_42;
    }
    if ( v9 >= v17 && v9 <= 0xFFFFF6FB7FFFFFFFuLL && (v22 & 0x80u) == 0LL )
      LOBYTE(v22) = 32;
  }
  if ( (v22 & 0x20) != 0 )
    goto LABEL_38;
  if ( (sub_1402746C0((volatile __int64 *)v9, v19) & 0x20) != 0 )
LABEL_43:
    v8 = 1;
LABEL_45:
  sub_140331CC0(v37, a2, 1, v11, v6, v4);
  if ( v20 )
  {
    v26 = (unsigned __int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v27 = *v26;
    if ( (unsigned int)sub_140317A80(v26)
      && (unsigned int)sub_140229550()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28
                        + 8 * (((unsigned __int64)(((unsigned int)(a2 >> 18) & 0x3FFFFFF8) + 0x40000000) >> 3) & 0x1FF));
        if ( (v29 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v29 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    v37 = v27;
    if ( (unsigned int)sub_140317A80(&v37)
      && (unsigned int)sub_140229550()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v30 = *((_QWORD *)KeGetCurrentThread() + 23);
      v31 = *(_QWORD *)(v30 + 1928);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)&v37 >> 3) & 0x1FF));
        if ( (v32 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v32 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    v33 = (unsigned __int64 *)(48 * ((v27 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( ((*(_DWORD *)v33 >> 4) & 0x3FF) == 0 )
    {
      sub_140274720(v30, a2, v39);
      v34 = 8;
      while ( 1 )
      {
        v35 = *((_DWORD *)v39 + (unsigned __int8)--v34);
        if ( v35 )
          break;
        if ( !v34 )
          goto LABEL_72;
      }
      *v33 = *v33 & 0xFFFFFFFFFFFE000FuLL | (16 * (v35 & 0x3FF | ((unsigned __int64)(v34 & 7) << 10)));
    }
  }
LABEL_72:
  *v38 = v8;
  return 1LL;
}
