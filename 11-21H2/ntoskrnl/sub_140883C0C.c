/*
 * XREFs of sub_140883C0C @ 0x140883C0C
 * Callers:
 *     sub_1409F1DF4 @ 0x1409F1DF4 (sub_1409F1DF4.c)
 *     sub_1409F1FF4 @ 0x1409F1FF4 (sub_1409F1FF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140883C0C(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  int v5; // edx

  v2 = *(_DWORD *)(a1 + 32);
  v3 = -1;
  if ( v2 )
  {
    do
    {
      v5 = (int)(v2 - v3) / 2 + v3;
      if ( a2 >= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5) )
      {
        v3 += (int)(v2 - v3) / 2;
        v5 = v2;
      }
      v2 = v5;
    }
    while ( v3 + 1 != v5 );
  }
  return v2;
}
