/*
 * XREFs of sub_1403C4368 @ 0x1403C4368
 * Callers:
 *     sub_1403C3FA0 @ 0x1403C3FA0 (sub_1403C3FA0.c)
 *     sub_1403C41C8 @ 0x1403C41C8 (sub_1403C41C8.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403C4368(char *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx

  memset(a1, 0, 0x1040uLL);
  *((_DWORD *)a1 + 2) = 63;
  v2 = 64LL;
  *((_DWORD *)a1 + 3) = 16;
  v3 = a1 + 82;
  do
  {
    InitializeSListHead((PSLIST_HEADER)(v3 - 18));
    *(_QWORD *)(v3 - 2) = 0x1000000LL;
    *(_QWORD *)(v3 + 6) = 0LL;
    *(_QWORD *)(v3 + 14) = 0LL;
    *(_DWORD *)(v3 + 22) = 0;
    v3 += 64;
    --v2;
  }
  while ( v2 );
}
