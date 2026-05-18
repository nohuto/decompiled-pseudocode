/*
 * XREFs of sub_1800913B8 @ 0x1800913B8
 * Callers:
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18002BB38 @ 0x18002BB38 (sub_18002BB38.c)
 *     sub_180091984 @ 0x180091984 (sub_180091984.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800913B8(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int128 v16; // [rsp+28h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-18h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v5 = Mtx_lock((_Mtx_t)(a1 + 512));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = _std_type_info_hash(&qword_1801EB588);
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
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 16LL))(v10, v18);
    sub_180091984(&v16, v18);
    *(_OWORD *)a2 = v16;
    v16 = 0LL;
    sub_180010910((__int64)&v16);
    sub_180010910((__int64)v18);
  }
  Mtx_unlock(v4);
  v11 = *a2;
  v17 = 0LL;
  v12 = *(_QWORD *)(a1 + 16);
  if ( !v12 )
LABEL_21:
    sub_1800120F4();
  v13 = *(_DWORD *)(v12 + 8);
  do
  {
    if ( !v13 )
      goto LABEL_21;
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
  }
  while ( v14 != v13 );
  v17 = *(_OWORD *)(a1 + 8);
  sub_18002BB38(v11, (__int64 *)&v17);
  sub_180010910((__int64)&v17);
  return a2;
}
