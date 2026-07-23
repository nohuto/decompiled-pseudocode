/*
 * XREFs of sub_14021D8B4 @ 0x14021D8B4
 * Callers:
 *     sub_14021D754 @ 0x14021D754 (sub_14021D754.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140694B30 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14021D8B4(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx

  if ( a2 )
  {
    v3 = *a2;
    v4 = (_QWORD *)(a1 + 24);
    if ( *(__int64 **)(*a2 + 8) != a2 )
      __fastfail(3u);
    *v4 = v3;
    v4[1] = a2;
    *(_QWORD *)(v3 + 8) = v4;
    *a2 = (__int64)v4;
  }
  else if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    ExFreePoolWithTag((PVOID)a1, 0);
  }
  else
  {
    sub_140203D50((__int64)&stru_140CF88C0, (_SLIST_ENTRY *)a1, a3);
  }
}
