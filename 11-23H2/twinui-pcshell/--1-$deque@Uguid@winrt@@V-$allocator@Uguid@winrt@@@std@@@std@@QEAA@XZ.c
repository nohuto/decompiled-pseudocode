/*
 * XREFs of ??1?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x1800359FC
 * Callers:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800356C0 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<winrt::guid>::~deque<winrt::guid>(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v5 = v2 - 1;
    a1[4] = v5;
    if ( !v5 )
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
  v6 = a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * a1[2]);
  v7 = *a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[1] = 0LL;
  return std::_Deallocate<16,0>(v7, 16LL);
}
