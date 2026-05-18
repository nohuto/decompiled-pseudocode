/*
 * XREFs of sub_1800A7A24 @ 0x1800A7A24
 * Callers:
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_1800A7868 @ 0x1800A7868 (sub_1800A7868.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800A7A24(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = sub_180011088(0x100uLL);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v6 + 256;
  *(_QWORD *)(a1 + 8) = sub_1800A7868(*(_QWORD **)a1);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v7 = a3[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v8 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    __debugbreak();
  }
  sub_1800126E8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  Mtx_unlock((_Mtx_t)(a1 + 48));
  sub_180010910((__int64)a3);
  return a1;
}
