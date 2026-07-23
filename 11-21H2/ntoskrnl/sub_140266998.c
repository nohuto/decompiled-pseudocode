/*
 * XREFs of sub_140266998 @ 0x140266998
 * Callers:
 *     sub_140263404 @ 0x140263404 (sub_140263404.c)
 *     sub_140266644 @ 0x140266644 (sub_140266644.c)
 *     sub_140266C0C @ 0x140266C0C (sub_140266C0C.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_140583F5C @ 0x140583F5C (sub_140583F5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140266998(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 6696);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
