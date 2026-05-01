/*
 * XREFs of RtlQueryResourcePolicy @ 0x18004BD30
 * Callers:
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18004BC90 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     RhpCaptureSnapshots @ 0x180093DA8 (RhpCaptureSnapshots.c)
 * Callees:
 *     RtlpQueryDiskSpeedPolicy @ 0x18004BD98 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlGetNtSystemRoot_0 @ 0x18004F200 (RtlGetNtSystemRoot_0.c)
 *     RtlRunOnceExecuteOnce_0 @ 0x18004F254 (RtlRunOnceExecuteOnce_0.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18009D038 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18009D258 (RtlpQueryDiskWriteConstraintPolicy.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18009D364 (RtlpQueryPhysicalMemoryPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ebx
  __int64 NtSystemRoot_0; // rax
  const wchar_t *v9; // rax

  if ( !a3 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce_0(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
    return RtlpQueryPhysicalMemoryPolicy(a3);
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        NtSystemRoot_0 = RtlGetNtSystemRoot_0();
        return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot_0, a3);
      }
      else
      {
        return 3221225475LL;
      }
    }
    else
    {
      return RtlpQueryDiskSpeedPolicy(a3);
    }
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v9 = L"C:\\data\\programs\\windowsapps";
    else
      v9 = (const wchar_t *)RtlGetNtSystemRoot_0();
    return RtlpQueryDiskSpacePolicy(v9, a3);
  }
}
