/*
 * XREFs of sub_1405A7D28 @ 0x1405A7D28
 * Callers:
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_14056D1E8 @ 0x14056D1E8 (sub_14056D1E8.c)
 *     sub_1405A9530 @ 0x1405A9530 (sub_1405A9530.c)
 *     sub_1405A95FC @ 0x1405A95FC (sub_1405A95FC.c)
 *     sub_1405A9E34 @ 0x1405A9E34 (sub_1405A9E34.c)
 *     sub_1405A9F00 @ 0x1405A9F00 (sub_1405A9F00.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     sub_140A6A948 @ 0x140A6A948 (sub_140A6A948.c)
 */

__int64 __fastcall sub_1405A7D28(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // rdi
  int v6; // eax
  __int64 result; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // r12
  int v16; // esi
  unsigned __int64 v17; // rbx
  int v18; // edi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // r10d
  char v24; // cl
  char v25; // dl
  char v26; // al
  int v27; // ecx
  char v28; // al
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __int64 v31; // r9
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  BOOL v37; // [rsp+30h] [rbp-A8h]
  char v38; // [rsp+34h] [rbp-A4h]
  int v39; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-9Ch]
  __int64 v41; // [rsp+40h] [rbp-98h]
  unsigned __int64 v42; // [rsp+48h] [rbp-90h]
  __int64 v43; // [rsp+50h] [rbp-88h]
  __int64 v44; // [rsp+58h] [rbp-80h]
  __int64 v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+68h] [rbp-70h] BYREF
  __int128 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+80h] [rbp-58h]
  __int64 v49; // [rsp+88h] [rbp-50h]
  unsigned __int8 v50; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v51; // [rsp+E8h] [rbp+10h]

  v51 = a2;
  v47 = 0LL;
  v46 = 0LL;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 64);
  v39 = 0;
  if ( (v6 & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v10 = 0LL;
  v11 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v12 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v11 + 174));
  v13 = *(_QWORD *)(a1 + 104);
  v48 = v12;
  if ( v13 >= a2 || (v10 = a2 - v13, result = sub_1405A9E34(a1, v12, a2 - v13), (int)result >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
    {
      v21 = 0LL;
      v44 = 0LL;
      v15 = 0LL;
      v20 = 0LL;
LABEL_21:
      v22 = 20LL;
      v43 = 0LL;
      if ( a2 <= 0x14 )
        v22 = a2;
      sub_14024B428(v22 + 1, v22 + 1, (__int64)&v46);
      if ( !HIDWORD(v46) )
        goto LABEL_8;
      v23 = 4;
      v24 = (a5 >> 1) & 2 | 0x35;
      if ( (a5 & 2) == 0 )
        v24 = (a5 >> 1) & 2 | 0x31;
      v25 = v24;
      v26 = v24;
      v27 = *(_DWORD *)(a1 + 64) & 2;
      if ( !v27 )
        v23 = a5;
      v28 = v26 | 0x40;
      v40 = v23;
      if ( (v27 & 2) == 0 )
        v28 = v25;
      v38 = v28;
      v49 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v29 = v5 << 25;
      v30 = 0LL;
      v41 = v29 >> 16;
      v50 = sub_1402CF4F0(v11);
      v32 = a3;
      v33 = a3;
      if ( a3 > a4 )
      {
LABEL_62:
        sub_1402B0CE0(v11, v50);
        v16 = 0;
        goto LABEL_63;
      }
      while ( (v33 & 0x78) == 0 && v33 != v32 )
      {
        if ( sub_1403531F0(v11) || KeShouldYieldProcessor() )
        {
LABEL_37:
          if ( v30 )
            sub_14020D8D0(v11, v30);
          sub_1402B0CE0(v11, v50);
          sub_1402CF4F0(v11);
          goto LABEL_43;
        }
        if ( v30 )
        {
          if ( (unsigned int)sub_140274C80(v11, v30) )
            goto LABEL_37;
LABEL_41:
          if ( (v33 & 0xFFF) != 0 )
            goto LABEL_44;
          sub_14020D8D0(v11, v30);
        }
LABEL_43:
        v30 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LOBYTE(v31) = v50;
        sub_14032CE60(v33, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v31, 0);
LABEL_44:
        if ( (sub_140317A10(v33) & 1) == 0 )
        {
          v34 = v10 - 1;
          if ( v10 != v51 )
            v34 = v10;
          --v51;
          v10 = v34;
          v45 = sub_1405A9530(a1, v48);
          v42 = (unsigned __int64)sub_1402CBF80((unsigned int *)&v46, v45, -1LL);
          v16 = sub_14056D1E8(v49, v21, (__int64)((v42 << 25) - v20) >> 16, v41, v38, &v39);
          v37 = 0;
          if ( sub_140317A80(v42) )
            v37 = sub_140229550() != 0;
          v35 = v42;
          *(_QWORD *)v42 = 0LL;
          if ( v37 )
            sub_1402294F0(v35, 0LL);
          if ( v16 < 0 )
          {
            sub_1405A9F00(v45);
            if ( v16 == -1073740657 )
              v16 = -1073741823;
            if ( v30 )
              sub_14020D8D0(v11, v30);
            sub_1402B0CE0(v11, v50);
LABEL_63:
            sub_140250BDC((__int64)&v46);
            if ( v15 )
              sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v15, 1u);
            if ( v10 )
              sub_140A6A948(a1, v10);
            return (unsigned int)v16;
          }
          sub_1405A95FC(v45, v33, v40);
          v36 = sub_1402CBD10(v33, v45, v40 | 0x80000000);
          sub_1405AA07C(v33, v36, a1, 0, 0);
          v20 = v43;
        }
        v41 += 4096LL;
        v33 += 8LL;
        if ( v33 > a4 )
        {
          if ( v30 )
            sub_14020D8D0(v11, v30);
          goto LABEL_62;
        }
        v21 = v44;
        v32 = a3;
      }
      if ( !v30 )
        goto LABEL_43;
      goto LABEL_41;
    }
    v14 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
    v15 = v14;
    if ( !v14 )
    {
LABEL_8:
      v16 = -1073741670;
      goto LABEL_63;
    }
    v17 = sub_1402CBD10(v14, qword_140C53290, 536870913);
    v18 = 0;
    if ( sub_140317A80(v15) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v19 = (v17 & 1) == 0;
          goto LABEL_15;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v19 = (v17 & 1) == 0;
LABEL_15:
        if ( !v19 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v15 = v17;
    if ( v18 )
      sub_1402294F0(v15, v17);
    v5 = a3;
    v20 = 0LL;
    v21 = (__int64)(v15 << 25) >> 16;
    v44 = v21;
    goto LABEL_21;
  }
  return result;
}
