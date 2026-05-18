/*
 * XREFs of sub_18005F4C0 @ 0x18005F4C0
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18003EE90 @ 0x18003EE90 (sub_18003EE90.c)
 *     sub_1800601A0 @ 0x1800601A0 (sub_1800601A0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall sub_18005F4C0(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *i; // rcx
  __int64 *v8; // rax
  __int64 *v9; // r9
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v6 = *(_QWORD **)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 40); i != v6 && !sub_180016240(i, a2); i += 2 )
    ;
  v8 = (__int64 *)sub_18001287C((__int64)i);
  if ( v8 != v9 )
  {
    sub_18003EE90(v8 + 2, v9, v8);
    sub_180010910(*(_QWORD *)(a1 + 48) - 16LL);
    *(_QWORD *)(a1 + 48) -= 16LL;
    v10 = a2[1];
    v12 = 0LL;
    if ( v10 )
    {
      *(_QWORD *)&v12 = *a2;
      *((_QWORD *)&v12 + 1) = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
    }
    sub_1800601A0(a1 + 88, &v12);
    if ( *((_QWORD *)&v12 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  return Mtx_unlock(v2);
}
