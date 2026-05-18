/*
 * XREFs of sub_18007D834 @ 0x18007D834
 * Callers:
 *     sub_18007D97C @ 0x18007D97C (sub_18007D97C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18007C3B4 @ 0x18007C3B4 (sub_18007C3B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18007D834(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h]

  sub_18007C3B4((__int64 *)&v17, a1 + 40);
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = a5[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = *a5;
  a2[1] = a5[1];
  v9 = *((_QWORD *)&v17 + 1);
  v10 = (_QWORD *)v17;
  if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
  {
    do
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*v10 + 16LL))(
                         *v10,
                         v16,
                         a3,
                         a4,
                         a2);
      v12 = *v11;
      v13 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v15[0] = *a2;
      *a2 = v12;
      v15[1] = a2[1];
      a2[1] = v13;
      sub_180010910((__int64)v15);
      sub_180010910((__int64)v16);
      v10 += 2;
    }
    while ( v10 != (_QWORD *)v9 );
    v9 = *((_QWORD *)&v17 + 1);
    v10 = (_QWORD *)v17;
  }
  if ( v10 )
  {
    sub_1800126E8((__int64)v10, v9);
    sub_180010884((char *)v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = 0LL;
    v18 = 0LL;
  }
  sub_180010910((__int64)a5);
  return a2;
}
