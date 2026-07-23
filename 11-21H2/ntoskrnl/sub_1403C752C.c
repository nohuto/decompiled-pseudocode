/*
 * XREFs of sub_1403C752C @ 0x1403C752C
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     sub_140208BA0 @ 0x140208BA0 (sub_140208BA0.c)
 */

__int64 __fastcall sub_1403C752C(_WORD *a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int16 v7; // cx
  __int64 v8; // r10
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  result = sub_140208BA0((__int64)a1, &v10, &v9);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    v6 = 0x7FFFLL;
    result = 0LL;
    v7 = 0;
    if ( !v9 )
      goto LABEL_16;
    v8 = v10 - (_QWORD)a2;
    do
    {
      if ( !v6 )
        break;
      if ( !*a2 )
        break;
      *(_WORD *)((char *)a2 + v8) = *a2;
      --v6;
      ++a2;
      ++v7;
      --v5;
    }
    while ( v5 );
    if ( !v5 && v6 )
    {
LABEL_16:
      if ( *a2 )
        result = 2147483653LL;
    }
    *a1 = 2 * v7;
  }
  return result;
}
