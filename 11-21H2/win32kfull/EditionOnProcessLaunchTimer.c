/*
 * XREFs of EditionOnProcessLaunchTimer @ 0x1C007B140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::ClearTable @ 0x1C010F008 (_anonymous_namespace_--ClearTable.c)
 */

__int64 EditionOnProcessLaunchTimer()
{
  PEPROCESS **v0; // rdi
  __int64 v1; // rbx
  PEPROCESS *i; // rax
  LONGLONG TimeQuadPart; // rax
  int v4; // edx
  int v5; // r8d
  PEPROCESS *v6; // rcx

  v0 = (PEPROCESS **)gppiStarting;
  v1 = MEMORY[0xFFFFF78000000014] - 300000000LL;
LABEL_2:
  for ( i = *v0; i; *v0 = i )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*i);
    v6 = *v0;
    if ( v1 <= TimeQuadPart )
    {
      v0 = (PEPROCESS **)(v6 + 46);
      goto LABEL_2;
    }
    *((_DWORD *)v6 + 3) &= 0xFFFFFEBF;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        25,
        4,
        2,
        25,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
        (char)*v0);
    }
    i = (PEPROCESS *)(*v0)[46];
  }
  return anonymous_namespace_::ClearTable();
}
