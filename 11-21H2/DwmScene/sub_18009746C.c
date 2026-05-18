/*
 * XREFs of sub_18009746C @ 0x18009746C
 * Callers:
 *     sub_180096B60 @ 0x180096B60 (sub_180096B60.c)
 *     sub_180096CD8 @ 0x180096CD8 (sub_180096CD8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003DCAC @ 0x18003DCAC (sub_18003DCAC.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall sub_18009746C(__int64 a1, __int64 a2)
{
  _QWORD **v4; // r10
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // eax
  _BYTE *result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]

  sub_18002C460(a2 + 24, (__int64)&v14);
  v4 = *(_QWORD ***)sub_180028460(a2);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 12);
  else
    v6 = 0;
  v7 = *(_QWORD *)(a1 + 136);
  v13 = 0LL;
  v8 = *(_QWORD *)(a1 + 104);
  if ( !v8 )
LABEL_12:
    sub_1800120F4();
  v9 = *(_DWORD *)(v8 + 8);
  do
  {
    if ( !v9 )
      goto LABEL_12;
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
  }
  while ( v10 != v9 );
  v13 = *(_OWORD *)(a1 + 96);
  sub_18003DCAC(v4, (__int64)&v13, v7, v6);
  sub_180010910((__int64)&v13);
  v11 = sub_180028544(a2);
  result = sub_18002BAAC(a1, v11);
  if ( v15 )
    return (_BYTE *)j_LanguageEnumProc(v14);
  return result;
}
