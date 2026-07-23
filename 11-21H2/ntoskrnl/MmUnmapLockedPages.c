/*
 * XREFs of MmUnmapLockedPages @ 0x1402BB4E0
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140457742 @ 0x140457742 (sub_140457742.c)
 *     sub_140511760 @ 0x140511760 (sub_140511760.c)
 *     sub_140511A58 @ 0x140511A58 (sub_140511A58.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140514920 @ 0x140514920 (sub_140514920.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_140515B80 @ 0x140515B80 (sub_140515B80.c)
 *     sub_140516290 @ 0x140516290 (sub_140516290.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140581A70 @ 0x140581A70 (sub_140581A70.c)
 *     sub_140594698 @ 0x140594698 (sub_140594698.c)
 *     sub_140597ED0 @ 0x140597ED0 (sub_140597ED0.c)
 *     sub_14059FECC @ 0x14059FECC (sub_14059FECC.c)
 *     sub_1405A29F8 @ 0x1405A29F8 (sub_1405A29F8.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405E22E8 @ 0x1405E22E8 (sub_1405E22E8.c)
 *     sub_1405E2410 @ 0x1405E2410 (sub_1405E2410.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 *     sub_1406179F0 @ 0x1406179F0 (sub_1406179F0.c)
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 *     sub_140633468 @ 0x140633468 (sub_140633468.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_14084BA88 @ 0x14084BA88 (sub_14084BA88.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     IoFreeKsrPersistentMemory @ 0x1409409A0 (IoFreeKsrPersistentMemory.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140A06830 @ 0x140A06830 (sub_140A06830.c)
 *     sub_140A06DF0 @ 0x140A06DF0 (sub_140A06DF0.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140AA0838 @ 0x140AA0838 (sub_140AA0838.c)
 * Callees:
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_1405B6E94 @ 0x1405B6E94 (sub_1405B6E94.c)
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v2; // r9d
  __int64 ByteOffset; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r11
  int v9; // r10d
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]

  v2 = 0;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v2 = sub_140584530(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v6 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    sub_1406E2C14((ULONG_PTR)BaseAddress);
  }
  else
  {
    v7 = (unsigned __int64)BaseAddress - v2;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v21 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = v21;
    v9 = 4;
    v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = 4LL;
    do
    {
      v11 = *(&v20 + v10--);
      --v9;
      v12 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v11 >> 3) & 0x1FF));
          v16 = v12 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v12;
          LOBYTE(v12) = v16;
          if ( (v15 & 0x42) != 0 )
            LOBYTE(v12) = v16 | 0x42;
        }
      }
      if ( (v12 & 1) == 0 )
        break;
      if ( (v12 & 0x80u) != 0LL )
      {
        for ( ; v9; --v9 )
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        break;
      }
    }
    while ( v10 != 1 );
    v13 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v17 )
      {
        LOWORD(v18) = v13 | 0x20;
        v19 = *(_QWORD *)(v17 + 8 * ((v8 >> 3) & 0x1FF));
        if ( (v19 & 0x20) == 0 )
          v18 = *(_QWORD *)v8;
        LOWORD(v13) = v18;
        if ( (v19 & 0x42) != 0 )
          LOWORD(v13) = v18 | 0x42;
      }
    }
    if ( (v13 & 0x200) != 0 )
      sub_1402157EC(v7, v6, 0);
    if ( dword_140D069EC )
      LODWORD(v6) = v6 + 1;
    if ( (dword_140D051BC & 1) != 0 )
      sub_1405B6E94((ULONG_PTR)MemoryDescriptorList);
    sub_1402BB6D0(&qword_140C534C0, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
