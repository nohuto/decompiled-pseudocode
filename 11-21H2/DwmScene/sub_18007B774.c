/*
 * XREFs of sub_18007B774 @ 0x18007B774
 * Callers:
 *     sub_180049E98 @ 0x180049E98 (sub_180049E98.c)
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18007AD1C @ 0x18007AD1C (sub_18007AD1C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007AEAC @ 0x18007AEAC (sub_18007AEAC.c)
 *     sub_18007AF7C @ 0x18007AF7C (sub_18007AF7C.c)
 *     sub_18007B2AC @ 0x18007B2AC (sub_18007B2AC.c)
 *     sub_18007B468 @ 0x18007B468 (sub_18007B468.c)
 *     sub_1800A78A4 @ 0x1800A78A4 (sub_1800A78A4.c)
 *     sub_1800A7B24 @ 0x1800A7B24 (sub_1800A7B24.c)
 *     sub_1800A7C40 @ 0x1800A7C40 (sub_1800A7C40.c)
 *     sub_1800A7D00 @ 0x1800A7D00 (sub_1800A7D00.c)
 *     sub_1800FA4C4 @ 0x1800FA4C4 (sub_1800FA4C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007B774(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-A9h] BYREF
  struct _Mtx_internal_imp_t *v22; // [rsp+30h] [rbp-99h]
  _QWORD v23[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v25[128]; // [rsp+50h] [rbp-79h] BYREF

  v23[0] = a2;
  v23[1] = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v22 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v9 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v9 )
    std::_Throw_C_error(v9);
  v10 = sub_18007B468(a1, a3);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)a1;
  v23[0] = *sub_18007AF7C(&v24, v10);
  while ( v12 != v11 && !sub_18007B2AC(v23, v12) )
    v12 += 128LL;
  v13 = sub_18007AEAC(v12);
  if ( v13 == *(_QWORD *)(a1 + 8) )
  {
    v21 = 0LL;
    v14 = a4[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a4[1];
      v8 = v22;
    }
    *(_QWORD *)&v21 = *a4;
    *((_QWORD *)&v21 + 1) = v14;
    v15 = sub_1800A7B24(v25, v10, &v21);
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    {
      sub_18007AD60((__int64 *)a1, *(_QWORD *)(a1 + 8), v15);
    }
    else
    {
      sub_1800A78A4(*(_QWORD *)(a1 + 8), v15);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_1800A7C40(v25);
    sub_1800FA4C4(a2, v16, v17);
  }
  else
  {
    v18 = sub_18007AD1C(v13);
    v21 = 0LL;
    v19 = a4[1];
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = a4[1];
      v8 = v22;
    }
    *(_QWORD *)&v21 = *a4;
    *((_QWORD *)&v21 + 1) = v19;
    sub_1800A7D00(v18, a2, &v21);
  }
  Mtx_unlock(v8);
  sub_180010910((__int64)a4);
  return a2;
}
