/*
 * XREFs of sub_1800FB440 @ 0x1800FB440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall sub_1800FB440(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 **v9; // r8
  __int64 *v10; // rdx
  __int64 *i; // rcx
  __int64 *j; // r8
  __int64 *v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rdx

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v5 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v6 = *(__int64 **)(a1 + 96);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( *((_DWORD *)v8 + 8) >= a2 )
    {
      v6 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) && a2 >= *((_DWORD *)v6 + 8) && v6 != v7 )
  {
    v9 = (__int64 **)v6[2];
    v10 = v6;
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
    }
    else
    {
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        ;
    }
    v13 = sub_18002ABBC((_QWORD *)(a1 + 96), v10);
    v14 = (__int64 *)v13[12];
    if ( v14 )
    {
      v15 = *v14;
      LOBYTE(v15) = v14 != v13 + 5;
      (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 32))(v14, v15);
      v13[12] = 0LL;
    }
    sub_180010884((char *)v13, 0x68uLL);
  }
  return Mtx_unlock(v2);
}
