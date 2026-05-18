/*
 * XREFs of sub_180072C68 @ 0x180072C68
 * Callers:
 *     sub_18002D1B0 @ 0x18002D1B0 (sub_18002D1B0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180024944 @ 0x180024944 (sub_180024944.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18002C3C8 @ 0x18002C3C8 (sub_18002C3C8.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_180073C28 @ 0x180073C28 (sub_180073C28.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072C68(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // r8
  int v10; // r15d
  bool v11; // cl
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  int v14; // r15d
  __int64 v15; // rcx
  _QWORD *i; // rbx
  __int64 v17; // rcx
  __int64 *v18; // r12
  __int64 v19; // rbx
  void **v20; // rax
  __int64 v21; // rax
  bool v22; // cl
  int v23; // r12d
  __int64 *v24; // rax
  __int64 **v25; // r15
  __int64 *v26; // rbx
  void **v27; // rax
  unsigned int v28; // eax
  __int64 *v29; // r15
  __int64 v30; // rcx
  unsigned int v31; // r12d
  __int64 *v32; // rax
  __int64 v33; // rbx
  void **v34; // rax
  __int64 v35[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+40h]
  __int64 v37; // [rsp+C0h] [rbp+50h]

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v7 = sub_180026618(a2);
    v10 = *(_DWORD *)(v9 + 20);
    v37 = v7;
    v11 = (v8[328] & 1) != 0 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 96LL))(a2, 8LL);
    v12 = (_QWORD *)(a1 + 80);
    v13 = v10 & 0xFFFFFFBF;
    v14 = v10 | 0x40;
    if ( !v11 )
      v14 = v13;
    while ( v12 != (_QWORD *)(a1 + 176) )
    {
      *v12 = 0LL;
      v15 = v12[1];
      v12[1] = 0LL;
      if ( v15 )
        sub_180010530(v15);
      v12 += 2;
    }
    for ( i = (_QWORD *)(a1 + 176); i != (_QWORD *)(a1 + 272); i += 2 )
    {
      *i = 0LL;
      v17 = i[1];
      i[1] = 0LL;
      if ( v17 )
        sub_180010530(v17);
    }
    sub_18001085C(v37, v35);
    v18 = (__int64 *)(a1 + 456);
    sub_180011020((_QWORD *)(a1 + 456), v35);
    if ( v35[1] )
      sub_180010530(v35[1]);
    v19 = *v18;
    v20 = (void **)sub_180010DD0(v35, (__int64)"ImageProcessing Input FrameBuffer");
    sub_180029824(v19, v20);
    sub_1800283EC(*v18, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v14, a2);
    v21 = sub_180034094(v37, 1);
    v22 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v21 + 64LL))(v21, &unk_1801D4368, 0LL)
       && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v23 = v14 | 0x100;
    v36 = v22 + 1;
    if ( !v22 )
      v23 = v14;
    v24 = sub_180024944(v37, v35);
    v25 = (__int64 **)(a1 + 472);
    sub_180011020((_QWORD *)(a1 + 472), v24);
    if ( v35[1] )
      sub_180010530(v35[1]);
    v26 = *v25;
    v27 = (void **)sub_180010DD0(v35, (__int64)"ImageProcessing Input DepthBuffer)");
    sub_180029824((__int64)v26, v27);
    sub_18006F6C0(*v25, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v36, v23, a2);
    v28 = sub_180026650(a2);
    v29 = (__int64 *)(a1 + 64);
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 136LL);
    if ( v30 && (unsigned int)sub_18002C3C8(v30, v28) > 1 )
    {
      v31 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
      v32 = sub_180016268(v37, v35);
      sub_180011020((_QWORD *)(a1 + 64), v32);
      if ( v35[1] )
        sub_180010530(v35[1]);
      v33 = *v29;
      v34 = (void **)sub_180010DD0(v35, (__int64)"ImageProcessing Input Texture");
      sub_180029824(v33, v34);
      sub_180055EA0(*v29, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), 0, *(_DWORD *)(a3 + 8), 0, v31, 0LL, 0, a2);
    }
    else
    {
      *(_OWORD *)v35 = 0LL;
      sub_180011020((_QWORD *)(a1 + 64), v35);
      if ( v35[1] )
        sub_180010530(v35[1]);
    }
    return sub_180073C28(a1, a2);
  }
  return result;
}
