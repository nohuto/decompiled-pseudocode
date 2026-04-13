/*
 * XREFs of ??0locale@std@@QEAA@AEBV01@@Z @ 0x180052088
 * Callers:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

std::locale *__fastcall std::locale::locale(std::locale *this, const struct std::locale *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
