/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00DB530
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00DB490 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@V-$CTypeIsola.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA@XZ @ 0x1C00DB1C8 (--1-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<909312,3552>::~CTypeIsolation<909312,3552>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
