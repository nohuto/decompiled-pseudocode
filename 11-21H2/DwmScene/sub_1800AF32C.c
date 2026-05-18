/*
 * XREFs of sub_1800AF32C @ 0x1800AF32C
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF32C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderState::`vftable';
  v3 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = *(_QWORD *)(a2 + 712);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a2 + 712);
    v3 = *(_QWORD *)(a1 + 40);
  }
  v7[0] = v3;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 704);
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v4;
  v7[1] = v5;
  sub_180010910((__int64)v7);
  return a1;
}
