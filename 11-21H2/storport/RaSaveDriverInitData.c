/*
 * XREFs of RaSaveDriverInitData @ 0x1C008E090
 * Callers:
 *     StorPortInitialize @ 0x1C003F980 (StorPortInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall RaSaveDriverInitData(__int64 a1, unsigned int *a2)
{
  _QWORD *Pool; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  Pool = (_QWORD *)RaidAllocatePool(64LL, 224LL, 1229480274LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( !Pool )
    return 3221225495LL;
  memmove(Pool, a2, *a2);
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v5 + 26;
  if ( *(_QWORD *)(v8 + 8) != a1 + 96 )
    __fastfail(3u);
  *v9 = v8;
  v5[27] = v7;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = v9;
  return 0LL;
}
