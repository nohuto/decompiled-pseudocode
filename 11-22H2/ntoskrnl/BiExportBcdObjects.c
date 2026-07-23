/*
 * XREFs of BiExportBcdObjects @ 0x140A5E514
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140A5E9AC (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D71C (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D834 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5DE50 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E380 (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140A5EF5C (BiUpdateEfiEntry.c)
 */

__int64 __fastcall BiExportBcdObjects(void *a1, const GUID **a2)
{
  const GUID *v2; // rbx
  unsigned int v3; // edi
  unsigned int Data1; // ecx
  int v7; // eax
  int v8; // eax
  int EfiEntry; // esi
  bool IsPortableWorkspaceBoot; // bp
  int updated; // eax

  v2 = *a2;
  v3 = 0;
  if ( *a2 == (const GUID *)a2 )
    return v3;
  do
  {
    Data1 = v2[3].Data1;
    v7 = Data1 & 5;
    if ( (Data1 & 5) == 0 )
      goto LABEL_23;
    if ( (Data1 & 0x10) != 0 )
    {
      if ( (Data1 & 1) == 0 )
        goto LABEL_23;
      v8 = BiDeleteBootEntry(v2[2].Data1);
      if ( v8 >= 0 )
      {
        v2[3].Data1 &= ~1u;
        goto LABEL_23;
      }
LABEL_9:
      v3 = v8;
      goto LABEL_23;
    }
    if ( v7 == 1 )
    {
      v8 = BiDeleteBootEntry(v2[2].Data1);
      if ( v8 >= 0 )
        goto LABEL_23;
      goto LABEL_9;
    }
    if ( v7 == 4 )
    {
      EfiEntry = 0;
      IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
      if ( (v2[3].Data1 & 8) != 0 || !IsPortableWorkspaceBoot )
        EfiEntry = BiCreateEfiEntry(a1, v2);
      if ( (v2[3].Data1 & 8) != 0 || IsPortableWorkspaceBoot )
      {
        if ( EfiEntry < 0 )
          v3 = -2143748095;
      }
      else if ( EfiEntry >= 0 )
      {
        BiAddBootEntryToEfiBootManagerDisplayOrder(a1, (__int64)v2);
      }
    }
    else
    {
      updated = BiUpdateEfiEntry(a1, v2);
      if ( updated < 0 )
      {
        v3 = updated;
        if ( (v2[3].Data1 & 8) != 0 )
          v3 = -2143748093;
      }
    }
LABEL_23:
    v2 = *(const GUID **)&v2->Data1;
  }
  while ( v2 != (const GUID *)a2 );
  if ( (v3 & 0x80000000) != 0 )
    BiLogMessage(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
