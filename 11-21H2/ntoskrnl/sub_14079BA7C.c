/*
 * XREFs of sub_14079BA7C @ 0x14079BA7C
 * Callers:
 *     sub_1406BEFA0 @ 0x1406BEFA0 (sub_1406BEFA0.c)
 *     sub_1406E3D54 @ 0x1406E3D54 (sub_1406E3D54.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140921510 @ 0x140921510 (sub_140921510.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079BA7C(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        char a4,
        int *a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  void *v11; // r12
  unsigned int v12; // edx
  __int64 v13; // rax
  const void *v14; // rsi
  unsigned int v15; // r15d
  unsigned int v16; // edi
  __int64 v17; // rcx
  int v18; // edi
  unsigned int v19; // edx
  unsigned int v20; // edi
  int v21; // eax
  void *v22; // rdi
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  int v28; // [rsp+90h] [rbp+50h]

  v7 = BugCheckParameter4;
  v28 = -1;
  v27 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v27 + 4);
  v11 = 0LL;
  v25 = v12;
  v26 = 0LL;
  sub_140AB4534((char *)&v25 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter3, v7, &v27);
  else
    v13 = sub_1407C9820(BugCheckParameter3);
  v14 = (const void *)v13;
  v15 = -4 - *(_DWORD *)(v13 - 4);
  v16 = a3 + 4;
  if ( v16 <= -*(_DWORD *)(v13 - 4) )
  {
    v17 = a7;
    *a5 = v7;
    *a6 = v13;
    *(_DWORD *)v17 = v27;
    *(_WORD *)(v17 + 4) = WORD2(v27);
    sub_140AB4534((char *)&v27 + 4);
    sub_140AB4534((char *)&v27 + 4);
    return 0;
  }
  v19 = 0x4000;
  v20 = (v16 + 7) & 0xFFFFFFF8;
  v21 = 0;
  while ( v20 > v19 )
  {
    v19 *= 2;
    ++v21;
  }
  if ( !v21 )
    v19 = v20;
  if ( v19 <= 0x100000 )
  {
    v18 = sub_14079C920(BugCheckParameter3, (__int64)&v26, (__int64)&v25);
    if ( v18 >= 0 )
    {
      v22 = v26;
      memmove(v26, v14, v15);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v27);
      else
        sub_1407C97C0(BugCheckParameter3, &v27);
      if ( a4 )
        sub_14079BD98(BugCheckParameter3, v7);
      *a5 = v28;
      v23 = a7;
      *a6 = (__int64)v22;
      *(_DWORD *)v23 = v25;
      *(_WORD *)(v23 + 4) = WORD2(v25);
      sub_140AB4534((char *)&v25 + 4);
      v25 = 0xFFFFFFFFLL;
      sub_140AB4534((char *)&v25 + 4);
      v18 = 0;
      goto LABEL_25;
    }
    v11 = v26;
  }
  else
  {
    v18 = -1073741670;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v27);
    else
      sub_1407C97C0(BugCheckParameter3, &v27);
  }
LABEL_25:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v25);
    else
      sub_1407C97C0(BugCheckParameter3, &v25);
  }
  return (unsigned int)v18;
}
