/*
 * XREFs of SepMandatoryToDiscretionary @ 0x1402296C0
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMandatoryToDiscretionary(_DWORD *a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0xFDFFFFFF;
  if ( a1[2] )
    return v2 != (v2 & *a1) ? 0xC0000022 : 0;
  else
    return 0LL;
}
