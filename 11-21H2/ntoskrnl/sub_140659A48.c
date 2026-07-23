/*
 * XREFs of sub_140659A48 @ 0x140659A48
 * Callers:
 *     PsQuerySyscallProviderInformation @ 0x1406591D0 (PsQuerySyscallProviderInformation.c)
 * Callees:
 *     sub_1406597D0 @ 0x1406597D0 (sub_1406597D0.c)
 */

__int64 __fastcall sub_140659A48(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  _QWORD *v7; // rdx
  __int64 i; // rbp
  __int64 v9; // rax

  v3 = *a2;
  v4 = 0LL;
  v7 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    v9 = sub_1406597D0(a1, v7);
    if ( !v9 )
      break;
    if ( (*(_DWORD *)(v9 + 1124) & 0x40000008) == 0 )
    {
      if ( v4 < v3 )
        *(_QWORD *)(a3 + 8 * v4) = *(_QWORD *)(v9 + 1088);
      ++v4;
    }
    v7 = (_QWORD *)v9;
  }
  *a2 = v4;
  return v3 < v4 ? 0x80000005 : 0;
}
