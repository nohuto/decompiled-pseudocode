/*
 * XREFs of SepMandatoryToDiscretionary @ 0x1402A45A8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMandatoryToDiscretionary(_DWORD *a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0xFDFFFFFF;
  if ( a1[2] && (v2 & *a1) != v2 )
    return 3221225506LL;
  else
    return 0LL;
}
