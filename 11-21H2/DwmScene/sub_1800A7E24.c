/*
 * XREFs of sub_1800A7E24 @ 0x1800A7E24
 * Callers:
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_1800A7F94 @ 0x1800A7F94 (sub_1800A7F94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A7E24(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  struct _Mtx_internal_imp_t *v19; // [rsp+90h] [rbp+20h]

  v17 = 0LL;
  v18 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v19 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v5 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a2[1];
    v4 = v19;
  }
  v7 = *a2;
  v15[0] = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v7;
  v15[1] = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v6;
  sub_180010910((__int64)v15);
  if ( &v17 != (__int128 *)a1 )
    sub_1800A7F94(&v17, a1);
  sub_1800126E8(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  Mtx_unlock(v4);
  v9 = *((_QWORD *)&v17 + 1);
  v8 = (char *)v17;
  if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
  {
    do
    {
      v10 = *(__int64 **)v8;
      v11 = **(_QWORD **)v8;
      v14 = 0LL;
      v12 = a2[1];
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v12 = a2[1];
        v9 = *((_QWORD *)&v17 + 1);
      }
      *(_QWORD *)&v14 = *a2;
      *((_QWORD *)&v14 + 1) = v12;
      (*(void (__fastcall **)(__int64 *, _BYTE *, __int128 *))(v11 + 8))(v10, v16, &v14);
      sub_180010910((__int64)v16);
      v8 += 16;
    }
    while ( v8 != (char *)v9 );
    v8 = (char *)v17;
  }
  if ( v8 )
  {
    sub_1800126E8((__int64)v8, v9);
    sub_180010884(v8, (v18 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return sub_180010910((__int64)a2);
}
