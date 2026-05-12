/*
 * XREFs of ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x1C0010BFC
 * Callers:
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1C000A750 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1C0009F9C (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall SC_DISK::GetFruIdDescPost(struct _UNICODE_STRING *this, struct _STORAGE_FRU_ID_DESCRIPTOR *a2)
{
  char *Pool2; // rax
  char *v5; // rdi
  unsigned int v6; // ebx

  Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(*((_DWORD *)a2 + 2) + 1), 1833984851LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, (char *)a2 + 12, *((unsigned int *)a2 + 2));
    v6 = ScAnsiToUnicodeString(v5, this + 18);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
