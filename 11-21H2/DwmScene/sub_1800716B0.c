/*
 * XREFs of sub_1800716B0 @ 0x1800716B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180031D58 @ 0x180031D58 (sub_180031D58.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057E0C @ 0x180057E0C (sub_180057E0C.c)
 *     sub_180057E58 @ 0x180057E58 (sub_180057E58.c)
 *     sub_18006B174 @ 0x18006B174 (sub_18006B174.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18006BC2C @ 0x18006BC2C (sub_18006BC2C.c)
 *     sub_18006BC90 @ 0x18006BC90 (sub_18006BC90.c)
 *     sub_18006C254 @ 0x18006C254 (sub_18006C254.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800716B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  char *v10; // rbx
  char *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int128 v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-21h]
  __int128 v16; // [rsp+50h] [rbp-19h] BYREF
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int128 v18; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v21; // [rsp+90h] [rbp+27h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+2Fh]
  __int64 v23; // [rsp+A0h] [rbp+37h]
  __int64 *v24; // [rsp+D8h] [rbp+6Fh] BYREF

  result = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != result )
  {
    sub_180031D58(&v21, (char **)a3);
    sub_18006C254(v21, v22);
    sub_18006B174(*a2, (__int64)&v16);
    sub_18006C254((__int64 *)v16, *((__int64 **)&v16 + 1));
    v18 = 0LL;
    v19 = 0LL;
    sub_18006BC90(&v24, (_QWORD *)v16, *((_QWORD **)&v16 + 1), (__int64 *)&v18);
    v9 = sub_18006B2C0(*a2);
    v10 = (char *)(v9 + 184);
    v11 = (char *)(v9 + 136);
    *(_QWORD *)&v14 = sub_180011088(0x30uLL);
    v15 = v14 + 48;
    *((_QWORD *)&v14 + 1) = sub_18006BC2C(v11, v10, (_QWORD *)v14);
    v12 = sub_180037388(a1);
    v20 = 0LL;
    sub_180057E0C(v12, (__int64)&qword_1801F56F8, &v20);
    sub_180010910((__int64)&v20);
    v20 = 0LL;
    sub_180057E58(v12, (__int64)&qword_1801F56F8, &v20);
    sub_180010910((__int64)&v20);
    v13 = a5;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, a4, a5);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v14, a4, v13);
    (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v18, a4, v13);
    (*(void (__fastcall **)(__int64, __int64 **, __int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, &v21, a4, v13);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, a4, v13);
    if ( (_QWORD)v14 )
    {
      sub_1800126E8(v14, *((__int64 *)&v14 + 1));
      result = sub_180010884((char *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = 0LL;
      v15 = 0LL;
    }
    if ( (_QWORD)v18 )
    {
      sub_1800126E8(v18, *((__int64 *)&v18 + 1));
      result = sub_180010884((char *)v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( (_QWORD)v16 )
    {
      sub_1800126E8(v16, *((__int64 *)&v16 + 1));
      result = sub_180010884((char *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = 0LL;
      v17 = 0LL;
    }
    if ( v21 )
    {
      sub_1800126E8((__int64)v21, (__int64)v22);
      return sub_180010884((char *)v21, (v23 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return result;
}
