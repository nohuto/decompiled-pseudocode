/*
 * XREFs of RtlDeleteHashTable @ 0x1403A3620
 * Callers:
 *     sub_14021FB10 @ 0x14021FB10 (sub_14021FB10.c)
 *     sub_1402235F4 @ 0x1402235F4 (sub_1402235F4.c)
 *     sub_140695078 @ 0x140695078 (sub_140695078.c)
 *     sub_1409CF8D8 @ 0x1409CF8D8 (sub_1409CF8D8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  PVOID Directory; // rbx
  unsigned int v3; // ebp
  PVOID *v4; // rsi

  Directory = HashTable->Directory;
  if ( HashTable->TableSize <= 0x80 )
  {
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( Directory )
  {
    v3 = 0;
    v4 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v4 )
        break;
      ExFreePoolWithTag(*v4, 0);
      ++v3;
      ++v4;
    }
    while ( v3 < 0x10 );
LABEL_3:
    ExFreePoolWithTag(Directory, 0);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
