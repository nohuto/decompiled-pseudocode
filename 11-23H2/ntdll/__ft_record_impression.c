/*
 * XREFs of __ft_record_impression @ 0x18009FE20
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x18009F7A0 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     __ft_marker_array_record_impression @ 0x18009FCB4 (__ft_marker_array_record_impression.c)
 */

__int64 __fastcall _ft_record_impression(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx

  RtlAcquireSRWLockExclusive(&qword_180185F70);
  v6 = _ft_marker_array_record_impression(_ft_g_api_info, a1, a2, a3);
  RtlReleaseSRWLockExclusive(&qword_180185F70);
  return v6;
}
