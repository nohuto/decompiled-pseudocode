/*
 * XREFs of sub_1406F884C @ 0x1406F884C
 * Callers:
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140281A3C @ 0x140281A3C (sub_140281A3C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 *     sub_1406C9990 @ 0x1406C9990 (sub_1406C9990.c)
 *     sub_1406FC03C @ 0x1406FC03C (sub_1406FC03C.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 *     sub_1409AD258 @ 0x1409AD258 (sub_1409AD258.c)
 *     sub_1409E7418 @ 0x1409E7418 (sub_1409E7418.c)
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 */

__int64 __fastcall sub_1406F884C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  bool v8; // al
  int v9; // edi
  _DWORD *v10; // rax
  int v11; // ebx
  int v12; // ebp
  bool v13; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  void *v20; // rbx
  __int64 *v21; // r8
  bool v22; // di
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28[7]; // [rsp+20h] [rbp-38h] BYREF
  char v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2512);
  v28[0] = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v19 = sub_1406FC03C(a2);
    v20 = (void *)v19;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 52LL) & 0x80000) == 0 )
    {
      v21 = qword_140039C90;
      if ( v9 )
        v21 = qword_140038608;
      sub_1409E8BEC(1LL, (unsigned int)(v9 != 0) + 1, v21, a1);
      if ( v9 )
      {
        ObfDereferenceObject(v20);
        return 3221225506LL;
      }
    }
    ObfDereferenceObject(v20);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  v10 = (_DWORD *)sub_140281A3C(a3);
  if ( (*(_DWORD *)(a1 + 2512) & 4) != 0 && (!v10 || (*v10 & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 2516) & 0x200000) == 0 )
    goto LABEL_7;
  v22 = 0;
  if ( v10 )
    v22 = (*(_BYTE *)v10 & 0x40) != 0;
  v23 = sub_140281750(a3);
  LOBYTE(v24) = v22;
  v25 = v23;
  v26 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  LOBYTE(v26) = *(_BYTE *)(v26 + 76) & 1;
  v27 = sub_1409AD258(a1, v26, v24, v23 + 88);
  sub_140280D08(a3, v25);
  if ( v27 >= 0 )
  {
LABEL_7:
    v11 = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)v11;
    v29 = 0;
    v15 = sub_140281750(a3);
    v11 = sub_1407248C0(v15, v28, &v29, 0LL);
    if ( v11 < 0 )
    {
      v11 = -1073741790;
    }
    else
    {
      v16 = v28[0];
      if ( (unsigned int)sub_1406C9990(v28[0]) <= 0x1000 && !sub_1402FBE30(v16) )
        v11 = -1073741790;
      LOBYTE(v17) = v29;
      sub_140722890(v16, v17, v15, v18);
      if ( v11 != -1073741790 )
        goto LABEL_16;
    }
    sub_1409E7418((unsigned int)(v12 != 0) + 1, a1, v15 + 88);
    if ( !v12 )
      v11 = 0;
LABEL_16:
    sub_140280D08(a3, v15);
    return (unsigned int)v11;
  }
  return (unsigned int)v27;
}
