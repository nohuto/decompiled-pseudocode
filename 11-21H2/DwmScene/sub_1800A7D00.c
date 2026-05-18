/*
 * XREFs of sub_1800A7D00 @ 0x1800A7D00
 * Callers:
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_1800FA4C4 @ 0x1800FA4C4 (sub_1800FA4C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A7D00(__int64 a1, __int64 a2, __int64 **a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 **v13; // rdx
  __int64 *v14; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  struct _Mtx_internal_imp_t *v17; // [rsp+50h] [rbp+8h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v17 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( sub_1800122C0((_QWORD *)(a1 + 32)) )
  {
    v10 = *a3;
    v11 = **a3;
    v16 = 0LL;
    v12 = v8[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = v8[1];
      v6 = v17;
    }
    *(_QWORD *)&v16 = *v8;
    *((_QWORD *)&v16 + 1) = v12;
    (*(void (__fastcall **)(__int64 *, __int64, __int128 *))(v11 + 8))(v10, a2, &v16);
  }
  else
  {
    v13 = *(__int64 ***)(a1 + 8);
    if ( v13 == *(__int64 ***)(a1 + 16) )
    {
      sub_180012720((__int64 *)a1, (__int64)v13, a3);
    }
    else
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      v14 = a3[1];
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
        v6 = v17;
      }
      *v13 = *a3;
      v13[1] = a3[1];
      *(_QWORD *)(a1 + 8) += 16LL;
    }
    sub_1800FA4C4(a2, v13, v9);
  }
  Mtx_unlock(v6);
  sub_180010910((__int64)a3);
  return a2;
}
