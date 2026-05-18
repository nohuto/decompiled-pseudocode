/*
 * XREFs of sub_1800AF520 @ 0x1800AF520
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AF520(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000C8D4(a1 + 8, 192LL, 6LL);
  sub_18000C8D4(a1 + 1160, 192LL, 6LL);
  sub_18000C8D4(a1 + 2312, 192LL, 6LL);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0;
  v7 = (_QWORD *)(a1 + 2320);
  v8 = a3 - a1 - 2320;
  do
  {
    v9 = *(_DWORD *)(a1 + 3464);
    if ( _bittest(&v9, v6) )
    {
      v10 = v7;
      v11 = 12LL;
      do
      {
        v12 = *(_QWORD *)((char *)v10 + v8 + 8);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v12 = *(_QWORD *)((char *)v10 + v8 + 8);
        }
        v14[0] = *(v10 - 1);
        *(v10 - 1) = *(_QWORD *)((char *)v10 + v8);
        v14[1] = *v10;
        *v10 = v12;
        sub_180010910((__int64)v14);
        v10 += 2;
        --v11;
      }
      while ( v11 );
    }
    ++v6;
    v7 += 24;
    v8 -= 192LL;
  }
  while ( v6 < 6 );
  return a1;
}
