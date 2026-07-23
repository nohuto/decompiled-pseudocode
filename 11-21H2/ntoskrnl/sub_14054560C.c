/*
 * XREFs of sub_14054560C @ 0x14054560C
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     InterlockedPushListSList @ 0x140429930 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall sub_14054560C(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // r14
  __int64 v2; // rdi
  PHYSICAL_ADDRESS *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v7; // rax

  v1 = a1 + 2156;
  v2 = a1[2160].Alignment + 0x2000;
  InitializeSListHead(a1 + 2156);
  v3 = (PHYSICAL_ADDRESS *)v2;
  v4 = (char *)v2;
  v5 = 3LL;
  do
  {
    PhysicalAddress = MmGetPhysicalAddress(v4);
    v4 += 4096;
    v3[2] = PhysicalAddress;
    v3->QuadPart = (LONGLONG)v4;
    v3 += 512;
    --v5;
  }
  while ( v5 );
  v7 = MmGetPhysicalAddress((PVOID)(v2 + 12288));
  *(_QWORD *)(v2 + 12288) = 0LL;
  *(PHYSICAL_ADDRESS *)(v2 + 12304) = v7;
  return InterlockedPushListSList(v1, (PSLIST_ENTRY)v2, (PSLIST_ENTRY)(v2 + 12288), 4u);
}
