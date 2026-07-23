/*
 * XREFs of ntoskrnl_27 @ 0x1407AF450
 * Callers:
 *     NtQueryLicenseValue @ 0x1407AF180 (NtQueryLicenseValue.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SLQueryLicenseValueInternal @ 0x14080F564 (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r11

  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D534F0 )
    return qword_140D534F0(v6, v9, v5, v7, v8, a5);
  else
    return SLQueryLicenseValueInternal(v6, v9, v5, v7, v8, a5);
}
