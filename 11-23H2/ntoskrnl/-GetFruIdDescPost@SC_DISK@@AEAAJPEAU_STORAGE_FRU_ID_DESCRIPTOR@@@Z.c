/*
 * XREFs of ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x140675C1C
 * Callers:
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140675C90 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675698 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DED20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x140940500 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_DISK::GetFruIdDescPost(
        struct _UNICODE_STRING *this,
        struct _STORAGE_FRU_ID_DESCRIPTOR *a2,
        unsigned __int8 a3)
{
  char *v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx

  v5 = (char *)SC_ENV::Allocate(a2->IdentifierSize + 1, (unsigned int)a2, a3);
  v6 = v5;
  if ( v5 )
  {
    memmove(v5, a2->Identifier, a2->IdentifierSize);
    v7 = ScAnsiToUnicodeString(v6, this + 18);
    SC_ENV::Free(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
