/*
 * XREFs of sub_180025FA0 @ 0x180025FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800268CC @ 0x1800268CC (sub_1800268CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180025FA0(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  _QWORD *v5; // rdx

  LOBYTE(v4) = sub_180011DE0(a2);
  if ( (_BYTE)v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 48LL))(*v5);
    v4 = sub_1800268CC(a1);
    *(_DWORD *)(*a2 + 104LL) = v4;
  }
  return v4;
}
