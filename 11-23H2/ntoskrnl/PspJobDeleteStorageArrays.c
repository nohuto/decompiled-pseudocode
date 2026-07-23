/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140687EA0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x1409B7EA8 (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x1409B7F84 (PspStorageEmptyArray.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1520);
  if ( v1 )
  {
    PspStorageEmptyArray(*(_QWORD *)(a1 + 1520));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArray(v3);
    result = PspFreeStorage(*(PVOID *)(a1 + 1520));
    *(_QWORD *)(a1 + 1520) = 0LL;
  }
  return result;
}
