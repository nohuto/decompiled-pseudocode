/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C008B640
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C008B7F4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D9738 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D9A48 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi

  if ( !*((_QWORD *)gpTypeIsolation + 6) )
    return 0LL;
  v2 = NSInstrumentation::CTypeIsolation<909312,3552>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  if ( !a1 && !(unsigned __int8)AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 3520) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(v3);
    return 0LL;
  }
  return (struct PDEV *)v4;
}
