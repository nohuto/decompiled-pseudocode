/*
 * XREFs of sub_1800D7DB0 @ 0x1800D7DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D7C38 @ 0x1800D7C38 (sub_1800D7C38.c)
 *     sub_1800D8400 @ 0x1800D8400 (sub_1800D8400.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800D7DB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64); // rdi
  int v11; // ebx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = sub_1800D7C38(a2);
  v7 = v5;
  v13 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      LODWORD(v13) = 2;
    }
    else if ( v6 == 2 )
    {
      LODWORD(v13) = 4;
    }
  }
  else
  {
    LODWORD(v13) = 3;
  }
  v8 = sub_1800C589C(v5, &v14);
  v9 = *v8;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)*v8 + 192LL);
  sub_18000E72C((__int64 *)(a1 + 96));
  v11 = v10(v9, &v13, a1 + 96);
  sub_18000E72C(&v14);
  sub_1800C7750(v7, v11);
  if ( v11 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  sub_1800D8400(a1);
  return 1;
}
