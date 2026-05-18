/*
 * XREFs of sub_18005F020 @ 0x18005F020
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18003174C @ 0x18003174C (sub_18003174C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18005F020(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // r12
  __int64 i; // rdi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  struct _Mtx_internal_imp_t *v19; // [rsp+70h] [rbp+30h]

  v19 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(_QWORD *)(a1 + 72);
  for ( i = *(_QWORD *)(a1 + 64); i != v5; i += 16LL )
  {
    v18 = 0LL;
    v7 = *(_QWORD *)(i + 8);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v18 = *(_OWORD *)i;
          break;
        }
      }
    }
    v10 = sub_180016240(&v18, a2);
    sub_180010910((__int64)&v18);
    if ( v10 )
      break;
  }
  if ( sub_18003174C(i) == *(_QWORD *)(a1 + 72) )
  {
    v17 = 0LL;
    v11 = a2[1];
    v12 = 0LL;
    v13 = 0LL;
    if ( v11 )
    {
      v12 = *a2;
      *(_QWORD *)&v17 = *a2;
      *((_QWORD *)&v17 + 1) = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
      v13 = v11;
    }
    v14 = *(_QWORD **)(a1 + 72);
    if ( v14 == *(_QWORD **)(a1 + 80) )
    {
      sub_180011198((__int64 *)(a1 + 64), (__int64)v14, &v17);
      v15 = *((_QWORD *)&v17 + 1);
    }
    else
    {
      *v14 = v12;
      v14[1] = v13;
      v15 = 0LL;
      *((_QWORD *)&v17 + 1) = 0LL;
      *(_QWORD *)(a1 + 72) += 16LL;
    }
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
  }
  return Mtx_unlock(v19);
}
