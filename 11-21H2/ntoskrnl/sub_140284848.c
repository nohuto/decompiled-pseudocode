/*
 * XREFs of sub_140284848 @ 0x140284848
 * Callers:
 *     CcCopyWriteWontFlush @ 0x140229E10 (CcCopyWriteWontFlush.c)
 *     sub_140253510 @ 0x140253510 (sub_140253510.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140284848(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *i; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  if ( byte_140C54C58 != 1 )
    return 0LL;
  v3 = a1[5];
  if ( !v3 || (v4 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    v5 = a1[2];
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 8);
    else
      v6 = a1[1];
    for ( i = (__int64 *)qword_140C49B30; i != &qword_140C49B30; i = (__int64 *)*i )
    {
      if ( *(i - 1) == v6 )
      {
        v8 = i + 24;
        v9 = (_QWORD *)*v8;
        if ( (_QWORD *)*v8 == v8 )
          return 0LL;
        result = v9 - 74;
        v10 = *(v9 - 70);
        while ( v10 != a2 )
          ;
        return result;
      }
    }
    return 0LL;
  }
  return *(_QWORD **)(v4 + 592);
}
