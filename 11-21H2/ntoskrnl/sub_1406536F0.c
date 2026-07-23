/*
 * XREFs of sub_1406536F0 @ 0x1406536F0
 * Callers:
 *     sub_140653104 @ 0x140653104 (sub_140653104.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140652C64 @ 0x140652C64 (sub_140652C64.c)
 */

__int64 __fastcall sub_1406536F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, _WORD *a5)
{
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rdx

  v6 = a4;
  if ( !qword_140C10CD0 )
    return 3221225485LL;
  result = sub_14042A5E0(qword_140C10CD8, &xmmword_140C10CA0);
  if ( (int)result >= 0 )
  {
    sub_140652C64(0LL, 0, 0x68u);
    v8 = (unsigned __int16)*a5;
    if ( (int)v8 <= v6 - 1 )
    {
      *(_BYTE *)(v8 + a3) = 0;
      *a5 = v8 + 1;
    }
    return 261LL;
  }
  return result;
}
