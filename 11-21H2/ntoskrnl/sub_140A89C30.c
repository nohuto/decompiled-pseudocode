/*
 * XREFs of sub_140A89C30 @ 0x140A89C30
 * Callers:
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A81E5C @ 0x140A81E5C (sub_140A81E5C.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 */

__int64 sub_140A89C30()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rsi
  __int64 v3; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  v0 = 0;
  v6 = 0;
  sub_140A89D58();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)sub_140A81E5C() )
    {
      v2 = i[6];
      if ( sub_140359DE0((__int64)v2) || RtlImageNtHeaderEx(1u, v2, 0LL, &OutHeaders) >= 0 )
      {
        v3 = sub_140A9A588(i + 11);
        v4 = (void *)v3;
        if ( !v3 )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = sub_140A89AB0(v3, i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v4, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return (unsigned int)v0;
}
