/*
 * XREFs of sub_18007B2D0 @ 0x18007B2D0
 * Callers:
 *     sub_1800280E8 @ 0x1800280E8 (sub_1800280E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18007AD1C @ 0x18007AD1C (sub_18007AD1C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007AEAC @ 0x18007AEAC (sub_18007AEAC.c)
 *     sub_18007AF7C @ 0x18007AF7C (sub_18007AF7C.c)
 *     sub_18007B2AC @ 0x18007B2AC (sub_18007B2AC.c)
 *     sub_1800A78A4 @ 0x1800A78A4 (sub_1800A78A4.c)
 *     sub_1800A7A24 @ 0x1800A7A24 (sub_1800A7A24.c)
 *     sub_1800A7C40 @ 0x1800A7C40 (sub_1800A7C40.c)
 *     sub_1800A7E24 @ 0x1800A7E24 (sub_1800A7E24.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007B2D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-99h] BYREF
  struct _Mtx_internal_imp_t *v18; // [rsp+30h] [rbp-89h]
  _QWORD v19[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v21[128]; // [rsp+50h] [rbp-69h] BYREF

  v19[1] = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v7 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)a1;
  v19[0] = *sub_18007AF7C(&v20, a3);
  while ( v9 != v8 && !sub_18007B2AC(v19, v9) )
    v9 += 128LL;
  v10 = sub_18007AEAC(v9);
  if ( v10 == *(_QWORD *)(a1 + 8) )
  {
    v17 = 0LL;
    v11 = a2[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a2[1];
      v6 = v18;
    }
    *(_QWORD *)&v17 = *a2;
    *((_QWORD *)&v17 + 1) = v11;
    v12 = sub_1800A7A24(v21, a3, &v17);
    v13 = *(_QWORD *)(a1 + 8);
    if ( v13 == *(_QWORD *)(a1 + 16) )
    {
      sub_18007AD60((__int64 *)a1, *(_QWORD *)(a1 + 8), v12);
    }
    else
    {
      sub_1800A78A4(v13, v12);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_1800A7C40(v21);
  }
  else
  {
    v14 = sub_18007AD1C(v10);
    v17 = 0LL;
    v15 = a2[1];
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = a2[1];
      v6 = v18;
    }
    *(_QWORD *)&v17 = *a2;
    *((_QWORD *)&v17 + 1) = v15;
    sub_1800A7E24(v14, &v17);
  }
  Mtx_unlock(v6);
  return sub_180010910((__int64)a2);
}
