/*
 * XREFs of sub_1800D2460 @ 0x1800D2460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180054B0C @ 0x180054B0C (sub_180054B0C.c)
 *     sub_1800CF894 @ 0x1800CF894 (sub_1800CF894.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800D2460(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rbx
  int v8; // edi
  int v9; // edi
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF

  v15 = 0LL;
  if ( *a3 )
  {
    sub_180054B0C(*a3, &v13, *(_DWORD *)(a1 + 88));
    sub_1800CF894(&v11, &v13);
    v7 = *(_QWORD *)(v11 + 184);
    v10 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v15 = v7;
    sub_18000E72C(&v10);
    if ( v12 )
      sub_180010530(v12);
    if ( v14 )
      sub_180010530(v14);
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 )
    {
      if ( v9 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v15);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v15);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v15);
  }
}
