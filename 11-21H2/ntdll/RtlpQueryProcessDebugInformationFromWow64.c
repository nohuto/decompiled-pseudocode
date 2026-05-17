/*
 * XREFs of RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E4340
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlCreateQueryDebugBuffer @ 0x180002080 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800022D0 (RtlDestroyQueryDebugBuffer.c)
 */

__int64 __fastcall RtlpQueryProcessDebugInformationFromWow64(unsigned int a1, unsigned int *a2)
{
  HANDLE *QueryDebugBuffer; // rax
  HANDLE *v6; // rbx
  int ProcessDebugInformation; // edi
  __int64 v8; // rsi

  if ( ((a1 - 1024) & 0xFFFFFBFF) != 0 )
    return 3221225485LL;
  QueryDebugBuffer = RtlCreateQueryDebugBuffer(0);
  v6 = QueryDebugBuffer;
  if ( QueryDebugBuffer )
  {
    v8 = *((_QWORD *)a2 + 1);
    QueryDebugBuffer[20] = (HANDLE)*(unsigned int *)(v8 + 80);
    ProcessDebugInformation = RtlQueryProcessDebugInformation((void *)*a2, a1, (__int64)QueryDebugBuffer);
    if ( ProcessDebugInformation >= 0 )
    {
      *(_DWORD *)(v8 + 80) = *((_DWORD *)v6 + 40);
      *(_DWORD *)(v8 + 84) = *((_DWORD *)v6 + 42);
    }
    RtlDestroyQueryDebugBuffer(v6);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)ProcessDebugInformation;
}
