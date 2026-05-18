/*
 * XREFs of sub_1800A78A4 @ 0x1800A78A4
 * Callers:
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007AEB8 @ 0x18007AEB8 (sub_18007AEB8.c)
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     sub_1800A77CC @ 0x1800A77CC (sub_1800A77CC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A78A4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax

  sub_1800A77CC((_QWORD *)a1, *(char **)a2, *(char **)(a2 + 8));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(a2 + 40);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v5 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
