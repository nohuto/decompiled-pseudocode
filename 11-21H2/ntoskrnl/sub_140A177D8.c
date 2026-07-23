/*
 * XREFs of sub_140A177D8 @ 0x140A177D8
 * Callers:
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A17600 @ 0x140A17600 (sub_140A17600.c)
 *     sub_140A18114 @ 0x140A18114 (sub_140A18114.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A177D8(
        __int64 a1,
        wchar_t *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  wchar_t *v10; // rsi
  PVOID v11; // rdi
  int v12; // ebx
  _QWORD *v13; // r15
  __int16 v14; // r13
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v8 = -1LL;
  LODWORD(v20) = 0;
  v9 = -1LL;
  v10 = a2;
  v11 = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  if ( (unsigned int)sub_140A18114(a2, a6, a7, (__int64)&v20) != -1073741789 )
  {
    v16 = -1073741595;
LABEL_9:
    sub_1406E0C3C(1LL, (__int64)"AslEnvExpandStrings2");
    return v16;
  }
  if ( v12 != (_DWORD)v20 )
  {
    v11 = sub_14075B444(v15, 2LL * (unsigned int)v20);
    if ( !v11 )
    {
      v16 = -1073741801;
      goto LABEL_9;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v16 = sub_140A18114(v10, a6, v14, (__int64)&v20);
    if ( (v16 & 0x80000000) != 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"AslEnvExpandStrings2");
LABEL_23:
      ExFreePoolWithTag(v11, 0x74705041u);
      return v16;
    }
    v10 = (wchar_t *)v11;
  }
  do
    ++v8;
  while ( v10[v8] );
  v16 = sub_140A17600(a1, v10, v8, a3, v21, v13);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    sub_1406E0C3C(1LL, (__int64)"AslEnvExpandStrings2");
  if ( v11 )
    goto LABEL_23;
  return v16;
}
