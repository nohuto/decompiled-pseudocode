/*
 * XREFs of LdrpIsExecutableRelocatedImage @ 0x18008E310
 * Callers:
 *     LdrpProcessMappedModule @ 0x180034AEC (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpIsExecutableRelocatedImage(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  if ( (int)RtlImageNtHeaderEx(3, a1, 0LL, &v5) < 0 )
    return 0LL;
  if ( *(_QWORD *)(v5 + 48) != a1 )
    return 0LL;
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v3, 24LL, 0LL) < 0 )
    return 0LL;
  if ( v3 != a1 )
    return 0LL;
  if ( (v4 & 2) != 0 )
    return 0LL;
  result = 1LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  return result;
}
