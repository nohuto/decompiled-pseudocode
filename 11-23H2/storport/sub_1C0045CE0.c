/*
 * XREFs of sub_1C0045CE0 @ 0x1C0045CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

void __fastcall sub_1C0045CE0(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // r9
  KIRQL v3; // r10

  v1 = sub_1C000E2EC(a1);
  if ( v1 )
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)v1 + 536) + 48 * v2 + 24), v3);
}
