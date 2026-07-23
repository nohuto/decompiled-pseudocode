/*
 * XREFs of sub_1403BB040 @ 0x1403BB040
 * Callers:
 *     sub_1403BAF00 @ 0x1403BAF00 (sub_1403BAF00.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 */

char __fastcall sub_1403BB040(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned int i; // ebx
  int v4; // eax

  *(_DWORD *)(a1 + 64) = 0;
  v2 = __readcr2();
  __writecr2(v2);
  for ( i = 0; i < 0xBB8; i += 10 )
  {
    if ( *(_DWORD *)(a1 + 64) )
      goto LABEL_5;
    KeStallExecutionProcessor(0x2710u);
  }
  v4 = *(_DWORD *)(a1 + 64);
  if ( v4 )
LABEL_5:
    LOBYTE(v4) = 1;
  return v4;
}
