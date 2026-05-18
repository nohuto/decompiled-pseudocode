/*
 * XREFs of sub_1800B4528 @ 0x1800B4528
 * Callers:
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 *     sub_18007F724 @ 0x18007F724 (sub_18007F724.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18003D56C @ 0x18003D56C (sub_18003D56C.c)
 *     sub_1800B3008 @ 0x1800B3008 (sub_1800B3008.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800B4528(__int64 *a1, _QWORD **a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = sub_18003D56C(*a2, &v15);
  v14 = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v14 = *(_OWORD *)v3;
        break;
      }
    }
  }
  v7 = v16;
  if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 8LL))(v7, v4, v3);
  if ( sub_1800122C0(&v14) )
  {
    v8 = sub_1800B3008(v14, &v17);
    v9 = *v8;
    v10 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    *a1 = v9;
    v11 = (volatile signed __int32 *)a1[1];
    a1[1] = v10;
    if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = v18;
    if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  sub_180010910((__int64)&v14);
  return a1;
}
