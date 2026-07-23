/*
 * XREFs of sub_140773A70 @ 0x140773A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_140773B10 @ 0x140773B10 (sub_140773B10.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 */

__int64 __fastcall sub_140773A70(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a2;
  v10 = 0LL;
  WORD1(v10) = v4;
  LOWORD(v10) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = sub_14077C610((char *)&v10 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    v8 = sub_140773B10(&v10, a2 + 8);
    sub_1402DF554(a4, *((void **)&v10 + 1));
    return v8;
  }
  return result;
}
