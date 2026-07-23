/*
 * XREFs of sub_140582708 @ 0x140582708
 * Callers:
 *     sub_140B2359C @ 0x140B2359C (sub_140B2359C.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

__int64 sub_140582708()
{
  __int64 v0; // rdi
  PVOID *i; // rbx
  int v2; // esi
  unsigned __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v0 = sub_1406F5B50();
  --*(_WORD *)(v0 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (unsigned int)sub_14027B080((unsigned __int64)i[6]) != 1 )
    {
      v2 = 0;
      do
      {
        v2 = sub_140760B20((_DWORD)i, v2, 128, 0, (__int64)&v4, (__int64)&v5);
        if ( v4 )
          sub_140312BB0((__int64)i, v4, v5, 2);
      }
      while ( v2 );
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800(v0);
  return sub_1406F5AF0(v0);
}
