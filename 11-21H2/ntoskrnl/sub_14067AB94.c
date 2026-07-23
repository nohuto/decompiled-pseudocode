/*
 * XREFs of sub_14067AB94 @ 0x14067AB94
 * Callers:
 *     sub_14067A98C @ 0x14067A98C (sub_14067A98C.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     sub_140941588 @ 0x140941588 (sub_140941588.c)
 *     sub_140946900 @ 0x140946900 (sub_140946900.c)
 *     sub_14094C79C @ 0x14094C79C (sub_14094C79C.c)
 *     sub_140B1131C @ 0x140B1131C (sub_140B1131C.c)
 *     sub_140B1244C @ 0x140B1244C (sub_140B1244C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14067AB94(_WORD *a1, unsigned int a2, int *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // r9d

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  v5 = (_DWORD)v3 - (_DWORD)a1;
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
