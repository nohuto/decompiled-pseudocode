/*
 * XREFs of sub_18007B520 @ 0x18007B520
 * Callers:
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180033EF0 @ 0x180033EF0 (sub_180033EF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007B520(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 *v12; // rcx
  volatile signed __int32 *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 *v17; // r10
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  _Mtx_t v19; // [rsp+58h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v19 = (_Mtx_t)(a1 + 24);
  v7 = Mtx_lock((_Mtx_t)(a1 + 24));
  v8 = 0LL;
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( !(_DWORD)v4 )
    goto LABEL_13;
  v9 = (v3 << 32) | v4;
  v18 = v9;
  v10 = *(__int64 **)(a1 + 184);
  v11 = (__int64 *)v10[1];
  v12 = v10;
  while ( !*((_BYTE *)v11 + 25) )
  {
    if ( v11[4] >= v9 )
    {
      v12 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  if ( !*((_BYTE *)v12 + 25) && v9 >= v12[4] && v12 != v10 )
  {
    v8 = v12[5];
LABEL_13:
    Mtx_unlock(v6);
    return v8;
  }
  v14 = (volatile signed __int32 *)sub_18001DE70(a1 + 216);
  v16 = v15 | (unsigned int)_InterlockedIncrement(v14);
  *(_QWORD *)sub_180033EF0(v17, &v18) = v16;
  Mtx_unlock(v19);
  return v16;
}
