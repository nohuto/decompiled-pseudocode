/*
 * XREFs of sub_14069498C @ 0x14069498C
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x140694730 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140694880 (RtlFindUnicodePrefix.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_14069498C(__int64 a1, unsigned __int16 *a2)
{
  _QWORD *v3; // rax
  unsigned __int16 *v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int16 v10; // r11
  unsigned __int16 v11; // bx
  unsigned int v12; // r10d
  unsigned __int16 *v13; // r15
  unsigned __int16 *v14; // r12

  v3 = sub_140347DB0();
  v6 = *v4 >> 1;
  v7 = v3[154];
  v8 = *a2 >> 1;
  if ( (_DWORD)v6 == 1 && **((_WORD **)v4 + 1) == 92 && v8 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v9 = *v4 >> 1;
  if ( (unsigned int)v6 >= v8 )
    v9 = *a2 >> 1;
  if ( v5 > v9 )
    v5 = v9;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v10 = *(_WORD *)(*((_QWORD *)v4 + 1) + 2LL * v12);
      v11 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v12);
      if ( v10 != v11 )
        break;
      if ( ++v12 >= v5 )
        goto LABEL_7;
    }
LABEL_11:
    if ( v12 >= v9 )
      goto LABEL_20;
    goto LABEL_12;
  }
LABEL_7:
  if ( v12 != v5 )
    goto LABEL_11;
  v13 = (unsigned __int16 *)(*((_QWORD *)v4 + 1) + 2LL * v12);
  v14 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v12);
  if ( v12 >= v9 )
    goto LABEL_20;
  while ( 1 )
  {
    v10 = *v13++;
    v11 = *v14++;
    if ( v10 != v11 )
    {
      sub_1403477B0(v7, v10);
      v11 = sub_1403477B0(v7, v11);
      if ( v10 != v11 )
        break;
    }
    if ( ++v12 >= v9 )
      goto LABEL_11;
  }
LABEL_12:
  if ( v10 == 92 )
    return 0LL;
  if ( v11 == 92 )
    return 3LL;
  if ( v10 < v11 )
    return 0LL;
  if ( v10 > v11 )
    return 3LL;
LABEL_20:
  if ( (unsigned int)v6 < v8 )
    return *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v6) == 92;
  if ( (unsigned int)v6 > v8 )
    return 3LL;
  return 2LL;
}
