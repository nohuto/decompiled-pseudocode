/*
 * XREFs of sub_140417AE0 @ 0x140417AE0
 * Callers:
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140417AE0(__int64 a1)
{
  int *v2; // rdi
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  const void *v6; // rdx
  __int64 result; // rax

  v2 = (int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x10) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
      if ( v4 != -2147483626 && (v4 & 0xC0000000) != 0xC0000000 )
      {
        v5 = *(void **)(a1 + 112);
        v6 = *(const void **)(a1 + 24);
        if ( v5 != v6 )
          memmove(v5, v6, *(_QWORD *)(a1 + 56));
      }
    }
    v3 = *v2;
    if ( (*v2 & 0x20) != 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      *(_QWORD *)(a1 + 24) = 0LL;
      v3 = *v2;
    }
  }
  result = v3 & 0xFFFFFFCF;
  *v2 = result;
  return result;
}
