/*
 * XREFs of sub_140693F00 @ 0x140693F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 */

__int64 __fastcall sub_140693F00(__int64 a1, __int64 *a2)
{
  char v3; // cl
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 && v3 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    v6 = *(_QWORD *)v5;
    a2 = &v6;
  }
  return sub_140217B04(v3, a2, a1);
}
