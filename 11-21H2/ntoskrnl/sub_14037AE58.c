/*
 * XREFs of sub_14037AE58 @ 0x14037AE58
 * Callers:
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140379950 @ 0x140379950 (sub_140379950.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_14037A5B0 @ 0x14037A5B0 (sub_14037A5B0.c)
 *     sub_14037AA7C @ 0x14037AA7C (sub_14037AA7C.c)
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037D1B0 @ 0x14037D1B0 (sub_14037D1B0.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 *     sub_1405FBB30 @ 0x1405FBB30 (sub_1405FBB30.c)
 * Callees:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_14037DC94 @ 0x14037DC94 (sub_14037DC94.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     sub_1405FC5B4 @ 0x1405FC5B4 (sub_1405FC5B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037AE58(__int64 a1, int a2, __int64 a3, struct _MDL *a4)
{
  void *MappedSystemVa; // rbx
  struct _MDL *v7; // r14

  MappedSystemVa = a4;
  v7 = a4;
  if ( a2 < 5 )
    v7 = 0LL;
  else
    MappedSystemVa = a4->MappedSystemVa;
  if ( *(_QWORD *)(a1 + 104) == a3 && (unsigned int)sub_1405FC5B4((PEX_SPIN_LOCK)a1) )
  {
    if ( a2 >= 5 )
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v7);
    if ( !*(_BYTE *)(a1 + 86) )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
      KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    }
  }
  else if ( a2 < 5 )
  {
    if ( a2 == 2 )
    {
      sub_14037DC94(MappedSystemVa);
    }
    else if ( a2 == 3 )
    {
      sub_140262ED4((unsigned __int64)*(unsigned __int16 *)(a1 + 94) << 12, 1, 1);
    }
    else
    {
      ExFreePoolWithTag(MappedSystemVa, 0);
    }
  }
  else
  {
    MmUnmapLockedPages(MappedSystemVa, v7);
  }
}
