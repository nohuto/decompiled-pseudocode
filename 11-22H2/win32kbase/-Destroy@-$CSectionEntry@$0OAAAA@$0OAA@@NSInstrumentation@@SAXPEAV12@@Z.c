/*
 * XREFs of ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D1DBC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34 (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D1CE4 (-Create@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA@XZ @ 0x1C00D34C8 (--1-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D1748 (--1-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<917504,3584>::Destroy(_QWORD *P)
{
  NSInstrumentation::CSectionEntry<917504,3584>::~CSectionEntry<917504,3584>(P);
  ExFreePoolWithTag(P, 0);
}
