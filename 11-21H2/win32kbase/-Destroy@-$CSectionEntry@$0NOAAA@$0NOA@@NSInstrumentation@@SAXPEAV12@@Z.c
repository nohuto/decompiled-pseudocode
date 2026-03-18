/*
 * XREFs of ?Destroy@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9DD8
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D9A48 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D9CFC (-Create@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA@XZ @ 0x1C00DB1C8 (--1-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D9760 (--1-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<909312,3552>::Destroy(_QWORD *P)
{
  NSInstrumentation::CSectionEntry<909312,3552>::~CSectionEntry<909312,3552>(P);
  ExFreePoolWithTag(P, 0);
}
