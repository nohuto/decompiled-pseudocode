/*
 * XREFs of ?PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z @ 0x1C000F5EC
 * Callers:
 *     ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0 (-PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmNameFromGuid @ 0x1C000FAB4 (PmNameFromGuid.c)
 */

struct _PARTITION_EXTENSION *__fastcall PmFindPartitionById(struct _DEVICE_EXTENSION *a1, unsigned __int16 *a2)
{
  char v2; // bl
  char *v3; // rsi
  char *v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v7; // rdx
  _BYTE Source1[80]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  v3 = (char *)a1 + 896;
  v4 = (char *)*((_QWORD *)a1 + 112);
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v5 = (unsigned __int64)(v4 - 144);
    memset(Source1, 0, 0x4CuLL);
    PmNameFromGuid(v4 + 72, v7, Source1);
    if ( RtlCompareMemory(Source1, a2, 0x48uLL) == 72 )
    {
      v2 = 1;
      return (struct _PARTITION_EXTENSION *)(v5 & -(__int64)(v2 != 0));
    }
    v4 = *(char **)v4;
  }
  return (struct _PARTITION_EXTENSION *)(v5 & -(__int64)(v2 != 0));
}
