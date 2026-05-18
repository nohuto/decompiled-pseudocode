/*
 * XREFs of sub_1800A7958 @ 0x1800A7958
 * Callers:
 *     sub_18007AF24 @ 0x18007AF24 (sub_18007AF24.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_1800A7868 @ 0x1800A7868 (sub_1800A7868.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A7958(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = sub_180011088(0x100uLL);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v2 + 256;
  *(_QWORD *)(a1 + 8) = sub_1800A7868(*(_QWORD **)a1);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v3 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  sub_1800126E8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
