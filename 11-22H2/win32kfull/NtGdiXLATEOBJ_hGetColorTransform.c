/*
 * XREFs of NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02CE300
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     BRUSHOBJ_hGetColorTransform @ 0x1C0265010 (BRUSHOBJ_hGetColorTransform.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 */

struct UMPDOBJ *__fastcall NtGdiXLATEOBJ_hGetColorTransform(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v4; // rbx
  BRUSHOBJ *v5; // rax
  HANDLE ColorTransform; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 109);
    v5 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)result, a1);
    if ( v5 )
      ColorTransform = BRUSHOBJ_hGetColorTransform(v5);
    --*((_DWORD *)v4 + 109);
    return (struct UMPDOBJ *)ColorTransform;
  }
  return result;
}
