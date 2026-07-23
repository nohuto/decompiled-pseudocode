/*
 * XREFs of sub_14052FC00 @ 0x14052FC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404598B2 @ 0x1404598B2 (sub_1404598B2.c)
 *     sub_14052FA14 @ 0x14052FA14 (sub_14052FA14.c)
 */

__int64 __fastcall sub_14052FC00(__int64 a1, char a2, int a3, int a4, int a5)
{
  unsigned int i; // esi
  __int64 *v9; // rbx
  __int64 v10; // rdx

  for ( i = 0; i < *(_DWORD *)(a1 + 304); ++i )
  {
    v9 = (__int64 *)(*(_QWORD *)(a1 + 288) + 16LL * i);
    if ( (*v9 & 1) != 0 && (!a2 || (*v9 & 0x100) != 0) )
    {
      v10 = (unsigned int)sub_14052FA14(HIDWORD(*v9), (*v9 & 4) != 0, a3, a4, a5);
      if ( HIDWORD(*v9) != v10 )
        *v9 = (v10 << 32) | (unsigned int)*v9;
    }
  }
  return sub_1404598B2(a1, 0LL);
}
