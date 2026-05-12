/*
 * XREFs of sub_1C0032538 @ 0x1C0032538
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C0032538(__int64 a1)
{
  PULONG *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v4; // ebp

  v1 = (PULONG *)(a1 + 4816);
  v2 = 0;
  v4 = (*(unsigned __int8 *)(a1 + 416) >> 5) + 1;
  if ( (*(_BYTE *)(a1 + 416) & 0x1F) == 0 )
    v4 = *(unsigned __int8 *)(a1 + 416) >> 5;
  if ( *(char *)(a1 + 110) >= 0 || !*v1 )
    *v1 = (PULONG)sub_1C0007CF4(64LL, 4LL * v4, 1297506642LL, *(_QWORD *)(a1 + 8));
  if ( *v1 )
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 4800), *v1, 32 * v4);
  else
    return (unsigned int)-1073741670;
  return v2;
}
