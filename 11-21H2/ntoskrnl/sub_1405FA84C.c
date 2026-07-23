/*
 * XREFs of sub_1405FA84C @ 0x1405FA84C
 * Callers:
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1405FA84C(__int64 a1, int a2)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  _WORD *v4; // r8
  __int64 v5; // r15
  char *v6; // r14
  __int64 v7; // rbp
  __int16 v8; // ax
  int v9; // edx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // r10
  unsigned __int8 v12; // al
  _WORD v14[28]; // [rsp+0h] [rbp-38h] BYREF
  char v15; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v2) = a2 - 1;
  v3 = *(_DWORD *)(a1 + 856);
  v4 = v14;
  v5 = *(_QWORD *)(a1 + 1032);
  v6 = &v15;
  v7 = *(_QWORD *)(a1 + 1048);
  v8 = *(_WORD *)(a1 + 816) & 0x1FFF;
  v15 = -1;
  v9 = 0;
  v14[0] = v8;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (_DWORD)v2 != *(_DWORD *)(a1 + 788) )
      break;
    LODWORD(v2) = -1;
    --v9;
LABEL_10:
    if ( ++v9 >= v3 )
      goto LABEL_13;
  }
  v10 = *(_WORD *)(v5 + 2 * v2);
  if ( v10 >= 0x4000u )
    goto LABEL_10;
  v11 = v10 & 0x1FFF;
  if ( v11 )
  {
    v12 = *(_BYTE *)(v2 + v7);
    if ( v12 <= (unsigned __int8)*v6 && (v12 < (unsigned __int8)*v6 || v11 <= (unsigned __int16)(*v4 & 0x1FFF)) )
    {
      v6 = (char *)(v2 + v7);
      v4 = (_WORD *)(v5 + 2 * v2);
    }
    goto LABEL_10;
  }
  v4 = (_WORD *)(v5 + 2 * v2);
LABEL_13:
  if ( v4 != v14 )
    return v4;
  return 0LL;
}
