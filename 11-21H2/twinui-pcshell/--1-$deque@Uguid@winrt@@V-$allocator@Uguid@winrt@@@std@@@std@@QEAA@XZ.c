/*
 * XREFs of ??1?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x18001B718
 * Callers:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18001B538 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<winrt::guid>::~deque<winrt::guid>(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(_QWORD *)(a1[1] + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 16LL);
  }
  v5 = a1[1];
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8 * a1[2]);
  v6 = *a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[1] = 0LL;
  return std::_Deallocate<16,0>(v6, 16LL);
}
