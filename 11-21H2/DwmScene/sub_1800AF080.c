/*
 * XREFs of sub_1800AF080 @ 0x1800AF080
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF080(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 68) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  v3 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = *(_QWORD *)(a2 + 744);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(a2 + 744);
    v3 = *(_QWORD *)(a1 + 40);
  }
  v8[0] = v3;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 736);
  v6 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v5;
  v8[1] = v6;
  sub_180010910((__int64)v8);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 752);
  return a1;
}
