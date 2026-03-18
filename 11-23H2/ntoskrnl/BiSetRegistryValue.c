/*
 * XREFs of BiSetRegistryValue @ 0x140803A1C
 * Callers:
 *     BiSetFirmwareModified @ 0x140373D14 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x140802250 (BiMarkTreatAsSystemStore.c)
 *     BiSetObjectDescription @ 0x1408024C4 (BiSetObjectDescription.c)
 *     BiAddStoreFromFile @ 0x140802668 (BiAddStoreFromFile.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdSetSystemStore @ 0x140A5C370 (BcdSetSystemStore.c)
 *     BiSaveFirmwareVariable @ 0x140A5D424 (BiSaveFirmwareVariable.c)
 *     BiCreateEfiEntry @ 0x140A5DDE0 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x1403699CC (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x140373D60 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( !a3 )
    {
      *(_QWORD *)v15 = v11;
LABEL_4:
      v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
      goto LABEL_5;
    }
    v13 = BiOpenKey(v11, a3, 131103LL, v15);
    if ( v13 >= 0 )
      goto LABEL_4;
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(_QWORD *)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
