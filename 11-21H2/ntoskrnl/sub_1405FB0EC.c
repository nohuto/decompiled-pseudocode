/*
 * XREFs of sub_1405FB0EC @ 0x1405FB0EC
 * Callers:
 *     sub_1405FB01C @ 0x1405FB01C (sub_1405FB01C.c)
 *     sub_1405FB0A0 @ 0x1405FB0A0 (sub_1405FB0A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FB0EC(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _WORD *v5; // r8
  __int64 v7; // r9
  __int16 v8; // cx
  _WORD *v9; // rcx
  __int64 result; // rax

  v5 = a1;
  if ( a2 )
  {
    v7 = a4 - (_QWORD)a1;
    do
    {
      if ( !a5 )
        break;
      v8 = *(_WORD *)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5 = v8;
      --a5;
      ++v5;
      --a2;
    }
    while ( a2 );
  }
  v9 = v5 - 1;
  result = a2 == 0 ? 0x8007007A : 0;
  if ( a2 )
    v9 = v5;
  *v9 = 0;
  return result;
}
