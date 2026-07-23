/*
 * XREFs of sub_140A99E14 @ 0x140A99E14
 * Callers:
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A81ABC @ 0x140A81ABC (sub_140A81ABC.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 */

__int64 __fastcall sub_140A99E14(ULONG_PTR a1, int a2)
{
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  if ( !*((_DWORD *)qword_140D57500 + 8196) && *((int *)qword_140D57500 + 8282) <= 1024 && !a2 && *(_DWORD *)(a1 + 40) )
  {
    sub_140A99A38(byte_140C0D9CC, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    sub_1405FFA20(0xC4u, 0x100AuLL, *(_QWORD *)a1, a1, 0LL, byte_140C0D9CC);
  }
  v3 = qword_140D57500;
  --*((_QWORD *)qword_140D57500 + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)a1 >> 12;
  result = 1023 * (v6 / 0x3FF);
  v8 = 16 * (v6 % 0x3FF);
  v9 = 2 * (v6 % 0x3FF + 1026);
  if ( *(_QWORD *)(v8 + v3[2050]) != v8 + v3[2050] )
    return sub_140A81ABC(&v3[v9], *(_QWORD *)a1, 2288LL);
  v3[v9] = 0LL;
  v3[v9 + 1] = 0LL;
  return result;
}
