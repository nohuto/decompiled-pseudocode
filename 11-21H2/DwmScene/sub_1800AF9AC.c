/*
 * XREFs of sub_1800AF9AC @ 0x1800AF9AC
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF9AC(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // eax
  __int64 *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000C8D4(a1 + 8, 256LL, 6LL);
  sub_18000C8D4(a1 + 1544, 256LL, 6LL);
  sub_18000C8D4(a1 + 3080, 256LL, 6LL);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  v6 = 0;
  v7 = a1 - a3 + 2888;
  do
  {
    v8 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v8, v6) )
    {
      v9 = (__int64 *)(a3 + 200);
      v10 = 16LL;
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          v11 = *v9;
        }
        v13[0] = *(__int64 *)((char *)v9 + v7 - 8);
        *(__int64 *)((char *)v9 + v7 - 8) = *(v9 - 1);
        v13[1] = *(__int64 *)((char *)v9 + v7);
        *(__int64 *)((char *)v9 + v7) = v11;
        sub_180010910((__int64)v13);
        v9 += 2;
        --v10;
      }
      while ( v10 );
    }
    ++v6;
    v7 += 256LL;
  }
  while ( v6 < 6 );
  return a1;
}
