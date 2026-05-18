/*
 * XREFs of sub_1800D1A20 @ 0x1800D1A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800D040C @ 0x1800D040C (sub_1800D040C.c)
 *     sub_1800D0508 @ 0x1800D0508 (sub_1800D0508.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D1A20(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 *result; // rax
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  if ( *a3 )
  {
    result = sub_1800D0508(*a3, &v17, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *result;
  }
  else
  {
    v14 = 0LL;
    result = &v13;
    v8 = 2;
    v9 = 0LL;
  }
  v15 = v9;
  v10 = result[1];
  v16 = v10;
  *result = 0LL;
  result[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
      result = (__int64 *)sub_180010530(v14);
  }
  if ( (v8 & 1) != 0 && v18 )
    result = (__int64 *)sub_180010530(v18);
  if ( v9 )
  {
    v19 = *sub_1800D040C(v9, &v13);
    result = (__int64 *)sub_18000E72C(&v13);
  }
  else
  {
    v19 = 0LL;
  }
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      if ( v12 == 1 )
        result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144)
                                                                                          + 128LL))(
                              *(_QWORD *)(a1 + 144),
                              a4,
                              1LL,
                              &v19);
    }
    else
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 176LL))(
                            *(_QWORD *)(a1 + 144),
                            a4,
                            1LL,
                            &v19);
    }
  }
  else
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 56LL))(
                          *(_QWORD *)(a1 + 144),
                          a4,
                          1LL,
                          &v19);
  }
  if ( v10 )
    return (__int64 *)sub_180010530(v10);
  return result;
}
