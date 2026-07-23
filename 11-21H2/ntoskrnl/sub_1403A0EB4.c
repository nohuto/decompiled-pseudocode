/*
 * XREFs of sub_1403A0EB4 @ 0x1403A0EB4
 * Callers:
 *     sub_1403A0D60 @ 0x1403A0D60 (sub_1403A0D60.c)
 *     sub_14054E00C @ 0x14054E00C (sub_14054E00C.c)
 *     sub_14054E1A8 @ 0x14054E1A8 (sub_14054E1A8.c)
 *     sub_14054E1F4 @ 0x14054E1F4 (sub_14054E1F4.c)
 *     sub_14054E6A4 @ 0x14054E6A4 (sub_14054E6A4.c)
 *     sub_14054E830 @ 0x14054E830 (sub_14054E830.c)
 *     sub_14054EE64 @ 0x14054EE64 (sub_14054EE64.c)
 *     sub_14054F010 @ 0x14054F010 (sub_14054F010.c)
 *     VslRetrieveMailbox @ 0x14054F3A0 (VslRetrieveMailbox.c)
 *     sub_14054F578 @ 0x14054F578 (sub_14054F578.c)
 *     sub_14054F710 @ 0x14054F710 (sub_14054F710.c)
 *     sub_140550030 @ 0x140550030 (sub_140550030.c)
 *     sub_140550130 @ 0x140550130 (sub_140550130.c)
 *     sub_140550550 @ 0x140550550 (sub_140550550.c)
 *     sub_1405507F0 @ 0x1405507F0 (sub_1405507F0.c)
 *     sub_1406584BC @ 0x1406584BC (sub_1406584BC.c)
 *     ntoskrnl_9 @ 0x140931660 (ntoskrnl_9.c)
 *     sub_1409317A0 @ 0x1409317A0 (sub_1409317A0.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     sub_140931C60 @ 0x140931C60 (sub_140931C60.c)
 *     sub_14093212C @ 0x14093212C (sub_14093212C.c)
 *     sub_14093237C @ 0x14093237C (sub_14093237C.c)
 *     sub_140932454 @ 0x140932454 (sub_140932454.c)
 *     sub_14093267C @ 0x14093267C (sub_14093267C.c)
 *     sub_140932778 @ 0x140932778 (sub_140932778.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_140932C50 @ 0x140932C50 (sub_140932C50.c)
 *     sub_140932F44 @ 0x140932F44 (sub_140932F44.c)
 *     sub_14093334C @ 0x14093334C (sub_14093334C.c)
 *     sub_140933454 @ 0x140933454 (sub_140933454.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403A0EB4(__int64 **a1)
{
  struct _MDL *v2; // rbx
  struct _MDL *v3; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  if ( ((_DWORD)a1[8] & 8) != 0 )
  {
    v2 = (struct _MDL *)*a1;
    while ( v2 )
    {
      if ( (v2->MdlFlags & 2) != 0 )
        MmUnlockPages(v2);
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
