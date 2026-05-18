/*
 * XREFs of sub_18003FCC8 @ 0x18003FCC8
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003FCC8(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *result; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1800436D4(a1);
  v4 = a1[5];
  if ( (v4 - a1[4]) >> 4 )
  {
    v5 = *(_QWORD *)(v4 - 8);
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *(_QWORD *)(v4 - 8);
    }
    v6 = *(_QWORD *)(v4 - 16);
    v18[0] = v6;
    v18[1] = v5;
    sub_1800436D4(v6);
    v7 = a2[1];
    v8 = 0LL;
    v9 = 0LL;
    if ( v7 )
    {
      v8 = *a2;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
      v9 = v7;
    }
    *(_QWORD *)(v6 + 128) = v8;
    v10 = *(volatile signed __int32 **)(v6 + 136);
    *(_QWORD *)(v6 + 136) = v9;
    if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *a2;
    sub_1800436D4(*a2);
    v12 = 0LL;
    v13 = 0LL;
    if ( v5 )
    {
      v13 = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
      v12 = v6;
    }
    *(_QWORD *)(v11 + 112) = v12;
    v14 = *(volatile signed __int32 **)(v11 + 120);
    *(_QWORD *)(v11 + 120) = v13;
    if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    sub_180010910((__int64)v18);
  }
  v15 = (_QWORD *)a1[5];
  if ( v15 == (_QWORD *)a1[6] )
    return sub_180012720(a1 + 4, (__int64)v15, a2);
  *v15 = 0LL;
  v15[1] = 0LL;
  v16 = a2[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *v15 = *a2;
  result = (_QWORD *)a2[1];
  v15[1] = result;
  a1[5] += 16LL;
  return result;
}
