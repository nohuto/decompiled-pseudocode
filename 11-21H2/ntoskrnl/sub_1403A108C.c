/*
 * XREFs of sub_1403A108C @ 0x1403A108C
 * Callers:
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     sub_14093267C @ 0x14093267C (sub_14093267C.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 */

__int64 __fastcall sub_1403A108C(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  struct _MDL *v4; // rcx

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 64) = 0;
  v3 = *(__int16 *)(a2 + 8);
  v4 = (struct _MDL *)(a1 + 8);
  v4->Next = 0LL;
  v4->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  v4->MdlFlags = 0;
  v4->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v4->ByteOffset = a2 & 0xFFF;
  v4->ByteCount = v3;
  if ( (a3 & 4) != 0 )
    MmBuildMdlForNonPagedPool(v4);
  else
    sub_14029C5B0(v4, 0, 0);
  return 0LL;
}
