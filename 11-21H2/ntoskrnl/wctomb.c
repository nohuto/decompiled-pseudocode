/*
 * XREFs of wctomb @ 0x1403E3970
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E38B4 @ 0x1403E38B4 (sub_1403E38B4.c)
 */

int __cdecl wctomb(char *MbCh, wchar_t WCh)
{
  int v2; // ebx
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = -1;
  v4 = -1;
  if ( !(unsigned int)sub_1403E38B4((ULONG *)&v4, MbCh, dword_140C094C4, WCh) )
    return v4;
  return v2;
}
