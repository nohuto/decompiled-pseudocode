/*
 * XREFs of RtlLookupElementGenericTable @ 0x180062D10
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180062D58 (FindNodeOrParent.c)
 *     RtlSplay @ 0x180062E00 (RtlSplay.c)
 */

__int64 __fastcall RtlLookupElementGenericTable(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(a1, a2, &v5) != 1 )
    return 0LL;
  v3 = v5;
  *a1 = RtlSplay(v5);
  return v3 + 40;
}
