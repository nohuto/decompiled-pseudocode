/*
 * XREFs of sub_1C001A194 @ 0x1C001A194
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 *     sub_1C0022E5C @ 0x1C0022E5C (sub_1C0022E5C.c)
 *     sub_1C00356B8 @ 0x1C00356B8 (sub_1C00356B8.c)
 *     sub_1C00382BC @ 0x1C00382BC (sub_1C00382BC.c)
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 *     sub_1C0061148 @ 0x1C0061148 (sub_1C0061148.c)
 *     sub_1C0061200 @ 0x1C0061200 (sub_1C0061200.c)
 *     sub_1C0062370 @ 0x1C0062370 (sub_1C0062370.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 *     DeferredRoutine @ 0x1C00630A0 (DeferredRoutine.c)
 * Callees:
 *     sub_1C0004AE0 @ 0x1C0004AE0 (sub_1C0004AE0.c)
 *     sub_1C001A278 @ 0x1C001A278 (sub_1C001A278.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C001A194(__int64 a1, char a2)
{
  KIRQL v4; // bp
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = KfRaiseIrql(2u);
  }
  v6 = sub_1C001A278(a1 + 656);
  v7 = v6;
  if ( v6 && !sub_1C0004AE0(*(_QWORD *)(a1 + 664), v6, &v9) )
  {
    LOBYTE(v8) = a2;
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, __int64))(a1 + 648))(*(_QWORD *)(a1 + 640), v7 - 120, &v9, v8);
  }
  if ( !v5 )
    KeLowerIrql(v4);
}
