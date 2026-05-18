/*
 * XREFs of sub_18007B468 @ 0x18007B468
 * Callers:
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007B468(__int64 a1, unsigned __int64 a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // eax
  char v6; // dl
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdi

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 104);
  v5 = Mtx_lock((_Mtx_t)(a1 + 104));
  v6 = 0;
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v7 = *(__int64 **)(a1 + 200);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  while ( *((_BYTE *)v9 + 25) == v6 )
  {
    if ( v9[4] >= a2 )
    {
      v7 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( *((_BYTE *)v7 + 25) != v6 || a2 < v7[4] || v7 == v8 )
  {
    Mtx_unlock(v2);
    return a2;
  }
  else
  {
    v10 = v7[5];
    Mtx_unlock(v2);
    return v10;
  }
}
