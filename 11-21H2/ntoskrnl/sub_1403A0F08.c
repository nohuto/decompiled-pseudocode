/*
 * XREFs of sub_1403A0F08 @ 0x1403A0F08
 * Callers:
 *     sub_1403A0D60 @ 0x1403A0D60 (sub_1403A0D60.c)
 *     sub_14054DB08 @ 0x14054DB08 (sub_14054DB08.c)
 *     sub_14054E00C @ 0x14054E00C (sub_14054E00C.c)
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
 *     sub_140932778 @ 0x140932778 (sub_140932778.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_140932C50 @ 0x140932C50 (sub_140932C50.c)
 *     sub_140932F44 @ 0x140932F44 (sub_140932F44.c)
 *     sub_14093334C @ 0x14093334C (sub_14093334C.c)
 *     sub_140933454 @ 0x140933454 (sub_140933454.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1403A108C @ 0x1403A108C (sub_1403A108C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403A0F08(__int64 a1, struct _MDL *a2, ULONG a3, int a4, unsigned int a5)
{
  ULONG v5; // r15d
  struct _MDL *v6; // r12
  struct _MDL *v8; // rbx
  unsigned int v9; // esi
  struct _MDL *Pool2; // rax
  struct _MDL *v11; // r14
  int v12; // esi
  struct _MDL *Next; // r14
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v8 = 0LL;
  if ( (a5 & 3) != 0 && ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
  {
    v12 = -1073741811;
LABEL_16:
    while ( v8 )
    {
      Next = v8->Next;
      v8->Next = 0LL;
      if ( (v8->MdlFlags & 2) != 0 )
        MmUnlockPages(v8);
      ExFreePoolWithTag(v8, 0);
      v8 = Next;
    }
    return (unsigned int)v12;
  }
  else
  {
    v11 = 0LL;
    do
    {
      v15 = (((unsigned __int16)v6 & 0xFFF) + (unsigned __int64)v5 + 4095) >> 12;
      v9 = 8 * v15 + 48;
      if ( (a5 & 1) != 0 )
        v9 = 4096;
      if ( (a5 & 4) != 0 )
        v9 = (v9 + 4095) & 0xFFFFF000;
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v9, 1416850774LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
        v8 = v11;
        v12 = -1073741670;
        goto LABEL_16;
      }
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (v15 + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v6 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v6 & 0xFFF;
      Pool2->ByteCount = v5;
      if ( (a5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( v5 )
      {
        sub_14029C5B0(Pool2, 0, a4 != 0);
      }
      v8->Next = v11;
      v11 = v8;
      v6 = v8;
      v5 = v9;
    }
    while ( v9 > 0x1000 );
    v12 = sub_1403A108C(a1, v8, a5);
    if ( v12 < 0 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 64) |= 8u;
    return 0LL;
  }
}
