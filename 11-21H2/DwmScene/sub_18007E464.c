/*
 * XREFs of sub_18007E464 @ 0x18007E464
 * Callers:
 *     sub_18002F830 @ 0x18002F830 (sub_18002F830.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180026640 @ 0x180026640 (sub_180026640.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E410 @ 0x18005E410 (sub_18005E410.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18007F9C0 @ 0x18007F9C0 (sub_18007F9C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E464(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE *v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // r8
  int v10; // edi
  bool v11; // cl
  __int64 *v12; // rbx
  unsigned int v13; // eax
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *i; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  bool v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned int v34; // edi
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int128 v40; // [rsp+50h] [rbp-30h] BYREF
  __int64 v41; // [rsp+60h] [rbp-20h] BYREF
  __int64 v42; // [rsp+68h] [rbp-18h]
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v8 = (__int64 *)sub_18002850C(a2);
    v10 = *(_DWORD *)(v9 + 20);
    v11 = (v7[328] & 1) != 0 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(a2, 8LL);
    v12 = (__int64 *)(a1 + 80);
    v13 = v10 & 0xFFFFFFBF;
    v14 = v10 | 0x40;
    if ( !v11 )
      v14 = v13;
    while ( v12 != (__int64 *)(a1 + 176) )
    {
      v15 = *v12;
      *v12 = 0LL;
      *(_QWORD *)&v40 = v15;
      v16 = v12[1];
      v12[1] = 0LL;
      *((_QWORD *)&v40 + 1) = v16;
      sub_180010910((__int64)&v40);
      v12 += 2;
    }
    for ( i = (__int64 *)(a1 + 176); i != (__int64 *)(a1 + 272); i += 2 )
    {
      v18 = *i;
      *i = 0LL;
      *(_QWORD *)&v40 = v18;
      v19 = i[1];
      i[1] = 0LL;
      *((_QWORD *)&v40 + 1) = v19;
      sub_180010910((__int64)&v40);
    }
    sub_180010EC0((__int64)v8, &v40);
    v20 = *((_QWORD *)&v40 + 1);
    v41 = *(_QWORD *)(a1 + 456);
    v21 = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(a1 + 456) = v40;
    v42 = v21;
    v40 = 0LL;
    *(_QWORD *)(a1 + 464) = v20;
    sub_180010910((__int64)&v41);
    sub_180010910((__int64)&v40);
    v22 = *(_QWORD *)(a1 + 456);
    v43 = 0LL;
    v44 = 15LL;
    LOBYTE(v41) = 0;
    sub_180012190(&v41, "ImageProcessing Input FrameBuffer", 0x21uLL);
    sub_18002BC44(v22, &v41);
    sub_18002A240(*(_QWORD *)(a1 + 456), *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v14, a2);
    v23 = sub_180036808((__int64)v8, 1);
    v24 = (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v23 + 64LL))(
            v23,
            &qword_1801F83D8,
            0LL)
       && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v25 = sub_180026640(v8, &v40);
    v26 = *v25;
    v27 = v25[1];
    *v25 = 0LL;
    v25[1] = 0LL;
    v41 = *(_QWORD *)(a1 + 472);
    v28 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(a1 + 472) = v26;
    v42 = v28;
    *(_QWORD *)(a1 + 480) = v27;
    sub_180010910((__int64)&v41);
    sub_180010910((__int64)&v40);
    v29 = *(_QWORD *)(a1 + 472);
    v43 = 0LL;
    v44 = 15LL;
    LOBYTE(v41) = 0;
    sub_180012190(&v41, "ImageProcessing Input DepthBuffer)", 0x22uLL);
    sub_18002BC44(v29, &v41);
    v30 = v14 | 0x100;
    if ( !v24 )
      v30 = v14;
    sub_18007A618(*(__int64 **)(a1 + 472), *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v24 + 1, v30, a2);
    v31 = sub_180028544(a2);
    v32 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 136LL);
    if ( v32
      && ((sub_18005E29C(v32, &v41, v31), !v41) ? (v33 = 0) : (v33 = sub_18005E410(v41)),
          sub_180010910((__int64)&v41),
          v33 > 1) )
    {
      v34 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
      v35 = sub_180017558(v8, &v40);
      v36 = *v35;
      v37 = v35[1];
      *v35 = 0LL;
      v35[1] = 0LL;
      v41 = *(_QWORD *)(a1 + 64);
      v38 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) = v36;
      v42 = v38;
      *(_QWORD *)(a1 + 72) = v37;
      sub_180010910((__int64)&v41);
      sub_180010910((__int64)&v40);
      v39 = *(_QWORD *)(a1 + 64);
      v43 = 0LL;
      v44 = 15LL;
      LOBYTE(v41) = 0;
      sub_180012190(&v41, "ImageProcessing Input Texture", 0x1DuLL);
      sub_18002BC44(v39, &v41);
      sub_18005D70C(
        *(_QWORD *)(a1 + 64),
        *(_DWORD *)a3,
        *(_DWORD *)(a3 + 4),
        0,
        *(_DWORD *)(a3 + 8),
        0,
        v34,
        0LL,
        0,
        a2);
    }
    else
    {
      v41 = *(_QWORD *)(a1 + 64);
      v42 = *(_QWORD *)(a1 + 72);
      v40 = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      sub_180010910((__int64)&v41);
      sub_180010910((__int64)&v40);
    }
    return sub_18007F9C0(a1, a2);
  }
  return result;
}
