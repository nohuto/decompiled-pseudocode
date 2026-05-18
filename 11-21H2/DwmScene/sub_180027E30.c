/*
 * XREFs of sub_180027E30 @ 0x180027E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800288E8 @ 0x1800288E8 (sub_1800288E8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180027E30(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  _QWORD *v5; // rdx

  LOBYTE(v4) = sub_1800122C0(a2);
  if ( (_BYTE)v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 48LL))(*v5);
    v4 = sub_1800288E8(a1);
    *(_DWORD *)(*a2 + 104LL) = v4;
  }
  return v4;
}
