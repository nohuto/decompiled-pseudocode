/*
 * XREFs of MmCreateMdl @ 0x1402411C0
 * Callers:
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_140B52090 @ 0x140B52090 (sub_140B52090.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  PMDL v5; // r9
  __int16 v6; // di
  PMDL result; // rax

  v5 = MemoryDescriptorList;
  if ( Length >= 0x100000000LL )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    v5 = (PMDL)sub_1402828F0(64LL, 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48, 1818520909LL);
    if ( !v5 )
      return 0LL;
  }
  v5->Next = 0LL;
  v5->MdlFlags = 0;
  v5->ByteCount = Length;
  v5->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  result = v5;
  v5->Size = 8 * ((((v6 & 0xFFF) + Length + 4095) >> 12) + 6);
  v5->ByteOffset = v6 & 0xFFF;
  return result;
}
