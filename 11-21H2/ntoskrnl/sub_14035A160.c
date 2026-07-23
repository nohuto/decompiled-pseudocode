/*
 * XREFs of sub_14035A160 @ 0x14035A160
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 */

__int64 __fastcall sub_14035A160(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  char v7; // al
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  v14 = 0;
  v7 = 0;
  v8 = a5;
  v9 = *(_QWORD **)(a1 + 56);
  if ( (a2 & 1) != 0 )
    v7 = 2;
  BYTE1(v15) = v7;
  result = BYTE2(v15);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v15) = result;
  while ( v9 )
  {
    sub_14035A424((_DWORD)v9 - 24, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
    result = v9[1];
    v12 = v9;
    if ( result )
    {
      v13 = *(__int64 **)result;
      v9 = (_QWORD *)v9[1];
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v13;
          v9 = v13;
          v13 = (__int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v12 )
          break;
        v12 = v9;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 17) )
    return sub_14035A424(a1, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
  return result;
}
