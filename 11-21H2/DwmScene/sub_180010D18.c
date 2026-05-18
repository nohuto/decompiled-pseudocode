/*
 * XREFs of sub_180010D18 @ 0x180010D18
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_1800E2680 @ 0x1800E2680 (sub_1800E2680.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011350 @ 0x180011350 (sub_180011350.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18002BB38 @ 0x18002BB38 (sub_18002BB38.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180010D18(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int128 v17; // [rsp+28h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+48h] [rbp-18h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v5 = Mtx_lock((_Mtx_t)(a1 + 512));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = _std_type_info_hash(&qword_1801EABF8);
  v7 = *(__int64 **)(a1 + 496);
  v8 = (__int64 *)v7[1];
  v9 = v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( v8[4] >= v6 )
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( *((_BYTE *)v9 + 25) || v6 < v9[4] || v9 == v7 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v10 = v9[12];
    if ( !v10 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 16LL))(v10, v19);
    sub_180011350(&v17, v19);
    *(_OWORD *)a2 = v17;
    v17 = 0LL;
    sub_180010910((__int64)&v17);
    sub_180010910((__int64)v19);
  }
  Mtx_unlock(v4);
  v12 = *a2;
  v18 = 0LL;
  v13 = *(_QWORD *)(a1 + 16);
  if ( !v13 )
LABEL_21:
    sub_1800120F4(v11, v13, v12);
  v14 = *(_DWORD *)(v13 + 8);
  do
  {
    if ( !v14 )
      goto LABEL_21;
    v11 = (unsigned int)(v14 + 1);
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v11, v14);
  }
  while ( v15 != v14 );
  v18 = *(_OWORD *)(a1 + 8);
  sub_18002BB38(v12, &v18);
  sub_180010910((__int64)&v18);
  return a2;
}
