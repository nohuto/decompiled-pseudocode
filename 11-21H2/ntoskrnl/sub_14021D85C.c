/*
 * XREFs of sub_14021D85C @ 0x14021D85C
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140694660 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140694B30 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140694E60 (FsRtlFindInTunnelCacheEx.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall sub_14021D85C(__int64 **a1)
{
  __int64 *result; // rax
  __int64 v3; // r8
  _SLIST_ENTRY *v4; // rcx
  __int64 *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *result;
    v4 = (_SLIST_ENTRY *)(result - 3);
    if ( *(__int64 **)(*result + 8) != result || (v5 = (__int64 *)result[1], (__int64 *)*v5 != result) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    if ( (*(_DWORD *)(&v4[3].Next + 1) & 1) != 0 )
      ExFreePoolWithTag(v4, 0);
    else
      sub_140203D50((__int64)&stru_140CF88C0, v4, v3);
  }
  return result;
}
