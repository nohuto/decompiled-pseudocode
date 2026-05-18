/*
 * XREFs of sub_1800A7B24 @ 0x1800A7B24
 * Callers:
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_1800A7868 @ 0x1800A7868 (sub_1800A7868.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800A7B24(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  struct _Mtx_internal_imp_t *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = sub_180011088(0x100uLL);
  *a1 = v6;
  a1[1] = v6;
  a1[2] = v6 + 256;
  a1[1] = (__int64)sub_1800A7868((_QWORD *)*a1);
  a1[3] = a2;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v7 = (struct _Mtx_internal_imp_t *)(a1 + 6);
  Mtx_init_in_situ((_Mtx_t)(a1 + 6), 2);
  v8 = Mtx_lock((_Mtx_t)(a1 + 6));
  if ( v8 )
    std::_Throw_C_error(v8);
  sub_1800126E8(*a1, a1[1]);
  v9 = (_QWORD *)*a1;
  a1[1] = *a1;
  if ( v9 == (_QWORD *)a1[2] )
  {
    sub_180012720(a1, (__int64)v9, a3);
  }
  else
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v7 = (struct _Mtx_internal_imp_t *)(a1 + 6);
    }
    *v9 = *a3;
    v9[1] = a3[1];
    a1[1] += 16LL;
  }
  Mtx_unlock(v7);
  sub_180010910((__int64)a3);
  return a1;
}
