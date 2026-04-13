/*
 * XREFs of ?_Tidy@?$_Yarn@_W@std@@AEAAXXZ @ 0x180062734
 * Callers:
 *     ??1?$_Yarn@D@std@@QEAA@XZ @ 0x1800530B8 (--1-$_Yarn@D@std@@QEAA@XZ.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180053638 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18006E77C (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800D02E0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<wchar_t>::_Tidy(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
