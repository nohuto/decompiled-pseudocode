/*
 * XREFs of PmNameFromGuid @ 0x1C000FAB4
 * Callers:
 *     ?PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z @ 0x1C000F5EC (-PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 */

char __fastcall PmNameFromGuid(__int64 a1, __int64 a2, char *a3)
{
  int v5; // edx
  char *v6; // r8
  unsigned __int64 v7; // rcx
  char result; // al

  memset(a3, 0, 0x48uLL);
  sprintf_s(
    a3,
    0x48uLL,
    "%08x-%04x-%04x-%02x%02x%02x%02x%02x%02x%02x%02x",
    *(_DWORD *)a1,
    *(unsigned __int16 *)(a1 + 4),
    *(unsigned __int16 *)(a1 + 6),
    *(unsigned __int8 *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 9),
    *(unsigned __int8 *)(a1 + 10),
    *(unsigned __int8 *)(a1 + 11),
    *(unsigned __int8 *)(a1 + 12),
    *(unsigned __int8 *)(a1 + 13),
    *(unsigned __int8 *)(a1 + 14),
    *(unsigned __int8 *)(a1 + 15));
  v5 = 70;
  v6 = a3 + 70;
  do
  {
    v7 = (unsigned int)v5;
    v5 -= 2;
    v7 >>= 1;
    result = a3[v7];
    *v6 = result;
    v6 -= 2;
    a3[v7] = 0;
  }
  while ( v5 > 1 );
  return result;
}
