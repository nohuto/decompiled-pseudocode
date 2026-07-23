/*
 * XREFs of sub_1405A9744 @ 0x1405A9744
 * Callers:
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14033F3EC @ 0x14033F3EC (sub_14033F3EC.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D39C @ 0x14056D39C (sub_14056D39C.c)
 *     sub_14056D45C @ 0x14056D45C (sub_14056D45C.c)
 *     sub_14056D68C @ 0x14056D68C (sub_14056D68C.c)
 *     sub_1405A94F4 @ 0x1405A94F4 (sub_1405A94F4.c)
 *     sub_1405A9FCC @ 0x1405A9FCC (sub_1405A9FCC.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     sub_140931B88 @ 0x140931B88 (sub_140931B88.c)
 */

__int64 __fastcall sub_1405A9744(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        _QWORD *a11)
{
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  unsigned int v19; // r12d
  int v20; // edx
  int v21; // ecx
  unsigned __int64 v22; // rsi
  int v23; // ebx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rdx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  ULONG_PTR v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v43; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h]
  unsigned int v47; // [rsp+64h] [rbp-9Ch]
  __int64 v48; // [rsp+68h] [rbp-98h]
  unsigned __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h]
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v53; // [rsp+90h] [rbp-70h]
  _QWORD *v54; // [rsp+98h] [rbp-68h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-60h]
  _DWORD *v56; // [rsp+A8h] [rbp-58h]
  _QWORD v57[24]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = a10;
  v51 = a3;
  v14 = a4;
  v54 = a11;
  v44 = a4;
  v56 = a9;
  memset(v57, 0, 0xB8uLL);
  v15 = *(_DWORD *)(a3 + 64);
  if ( (v15 & 1) == 0 )
  {
    v16 = *(_QWORD *)(a3 + 72);
    v17 = a5 - v14 + 1;
    v49 = v17;
    if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
    {
      *a9 = 4;
      result = 0LL;
    }
    else
    {
      result = sub_140931B88(a1, a2, (unsigned int)&v44, (unsigned int)&v49, a6, (__int64)a9);
      if ( (int)result < 0 )
        return result;
      v17 = v49;
      v14 = v44;
    }
    *v53 = v14;
    *v54 = v17;
    return result;
  }
  LOBYTE(v19) = 0;
  v20 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return 3221225541LL;
  }
  else
  {
    if ( (v15 & 2) == 0 || (*(_DWORD *)(a3 + 72) & 1) == 0 )
      return 3221225496LL;
    if ( a8 < 0 )
    {
      if ( a8 == 0x80000000 && !a6 )
      {
        LOBYTE(v19) = 8;
LABEL_15:
        v21 = a7;
        goto LABEL_30;
      }
      return 3221225541LL;
    }
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a8 == 0x10000000 && !a6 )
      {
        LOBYTE(v19) = 0x80;
        goto LABEL_15;
      }
      return 3221225541LL;
    }
  }
  v21 = a7;
  if ( a7 <= 7 )
  {
    if ( (a7 & 5) == 5 )
      return 3221225541LL;
    v19 = (a7 & 4 | 2) >> 1;
    if ( (a7 & 2) != 0 )
      LOBYTE(v19) = v19 | 4;
  }
  else if ( a7 != 24 || v20 )
  {
    return 3221225541LL;
  }
LABEL_30:
  v22 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = v22;
  v49 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = 0xFFFFFFFFLL;
  v23 = 0;
  v24 = 0LL;
  v41 = -1LL;
  v42 = 0;
  v45 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  if ( !v20 )
  {
    v21 = v21 & 2 | 4;
    a7 = v21;
  }
  LODWORD(v57[0]) = 1;
  WORD2(v57[0]) = 0;
  LODWORD(v57[1]) = 20;
  v57[2] = 0LL;
  v57[3] = 0LL;
  v46 = v20 != 0 ? 2 : 4;
  v25 = sub_1402CBD10(v22, -1LL, v21 | 0x80000000);
  v26 = sub_1402CF4F0(v45);
  v27 = v49;
  v28 = v46;
  v40 = v26;
  v29 = 0;
  v30 = v44 & 0xFFFFFFFFFFFFF000uLL;
  v47 = 0;
  v52 = v44 & 0xFFFFFFFFFFFFF000uLL;
  while ( 2 )
  {
    v44 = v30;
    v31 = v22;
    v43 = v22;
    if ( v22 > v27 )
      goto LABEL_70;
    do
    {
      if ( (v31 & 0x78) != 0 || v31 == v22 )
      {
        if ( v24 )
          goto LABEL_46;
      }
      else
      {
        if ( sub_1403531F0(v45) || KeShouldYieldProcessor() )
          goto LABEL_40;
        if ( v24 )
        {
          if ( !(unsigned int)sub_140274C80(v45, v24) )
          {
            v31 = v43;
LABEL_46:
            if ( (v31 & 0xFFF) != 0 )
              goto LABEL_50;
            goto LABEL_47;
          }
LABEL_40:
          sub_1405A94F4((__int64)v57, v41, a8);
          v41 = -1LL;
          if ( v24 )
          {
            sub_14020D8D0(v45, v24);
            v24 = 0LL;
          }
          sub_1402B0CE0(v45, v40);
          sub_1402CF4F0(v45);
        }
      }
LABEL_47:
      sub_1405A94F4((__int64)v57, v41, a8);
      v41 = -1LL;
      if ( v24 )
        sub_14020D8D0(v45, v24);
      v24 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(v32) = v40;
      sub_14032CE60(v43, 0LL, (*(_DWORD *)(v51 + 48) >> 12) & 0x7F, v32, 0);
      v31 = v43;
LABEL_50:
      if ( !v47 )
      {
        v50 = sub_140317A10(v31);
        if ( (v50 & 1) == 0 )
          goto LABEL_62;
        v33 = v43;
        if ( v43 == v22 )
        {
          v34 = sub_140317A10((unsigned __int64)&v50);
          v33 = v43;
          v35 = (*(_DWORD *)(48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
          v48 = v35;
LABEL_66:
          v38 = v41;
          goto LABEL_67;
        }
LABEL_65:
        v35 = v48;
        goto LABEL_66;
      }
      if ( v47 != v46 - 1 )
      {
        if ( v47 == 1 )
        {
          v42 = sub_14056D39C();
          v23 = v42;
          if ( v42 < 0 )
          {
LABEL_62:
            v23 = -1073741800;
            goto LABEL_73;
          }
        }
        else
        {
          sub_14056D45C(v44, v19);
          sub_14056D68C();
        }
        v33 = v43;
        goto LABEL_65;
      }
      v50 = sub_140317A10(v31);
      v36 = v50;
      v37 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFFLL;
      sub_1405A9FCC(48 * v37 - 0x220000000000LL, a7);
      v25 = (v37 << 12) | v25 & 0xFFF0000000000FFFuLL;
      sub_1405AA07C(v43, v25, v51, 1, 0);
      if ( (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 || sub_14033F3EC(v36, v25) )
        sub_1402CF280((__int64)v57, v44, 1LL, 0);
      v38 = v44;
      v23 = v42;
      v22 = v55;
      v33 = v43;
      v35 = v48;
      v41 = v44;
LABEL_67:
      v44 += 4096LL;
      v31 = v33 + 8;
      v43 = v31;
    }
    while ( v31 <= v49 );
    v42 = v23;
    v48 = v35;
    v41 = v38;
    if ( v23 >= 0 )
    {
      v29 = v47;
      v27 = v49;
      v28 = v46;
LABEL_70:
      v47 = ++v29;
      if ( v29 < v28 )
      {
        v30 = v52;
        continue;
      }
      v23 = v42;
    }
    break;
  }
LABEL_73:
  sub_1405A94F4((__int64)v57, v41, a8);
  if ( v24 )
    sub_14020D8D0(v45, v24);
  sub_1402B0CE0(v45, v40);
  if ( v23 >= 0 )
  {
    *v56 = dword_140016150[(unsigned int)v48];
    v39 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v52 + 4096;
    *v53 = v52;
    v23 = 0;
    *v54 = v39;
  }
  return (unsigned int)v23;
}
