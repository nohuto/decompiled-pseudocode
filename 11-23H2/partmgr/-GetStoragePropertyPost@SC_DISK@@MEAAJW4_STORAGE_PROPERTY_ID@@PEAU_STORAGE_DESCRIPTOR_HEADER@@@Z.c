/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1C000A750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x1C0010BFC (-GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(ULONG *this, int a2, struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  unsigned int v3; // r9d
  ULONG v4; // ecx
  ULONG Size; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  ULONG Version; // ecx

  v3 = 0;
  if ( a2 > 14 )
  {
    v7 = a2 - 21;
    if ( v7 )
    {
      v8 = v7 - 36;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 7 )
            return (unsigned int)SC_DISK::GetFruIdDescPost((SC_DISK *)this, (struct _STORAGE_FRU_ID_DESCRIPTOR *)a3);
        }
        else
        {
          Version = a3[4].Version;
          if ( Version < a3->Version || Version > a3->Size - 1 )
            a3[4].Version = 0;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
    v4 = this[59];
    if ( a3[2].Version != v4 )
      return (unsigned int)-1073739509;
    Size = a3[2].Size;
    if ( Size < v4 || Size % v4 )
      return (unsigned int)-1073739509;
  }
  return v3;
}
