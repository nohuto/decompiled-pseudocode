/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1406757B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x14067573C (-GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(
        struct _UNICODE_STRING *this,
        int a2,
        struct _STORAGE_FRU_ID_DESCRIPTOR *a3)
{
  unsigned int v3; // r9d
  DWORD Buffer_high; // ecx
  DWORD Size; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  DWORD Version; // ecx

  v3 = 0;
  if ( a2 > 14 )
  {
    v6 = a2 - 21;
    if ( v6 )
    {
      v7 = v6 - 36;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 7 )
            return (unsigned int)SC_DISK::GetFruIdDescPost(this, a3, (unsigned __int8)a3);
        }
        else
        {
          Version = a3[2].Version;
          if ( Version < a3->Version || Version > a3->Size - 1 )
            a3[2].Version = 0;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
    Buffer_high = HIDWORD(this[14].Buffer);
    if ( a3[1].Version != Buffer_high )
      return (unsigned int)-1073739509;
    Size = a3[1].Size;
    if ( Size < Buffer_high || Size % Buffer_high )
      return (unsigned int)-1073739509;
  }
  return v3;
}
