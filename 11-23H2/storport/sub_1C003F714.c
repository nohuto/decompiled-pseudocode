/*
 * XREFs of sub_1C003F714 @ 0x1C003F714
 * Callers:
 *     sub_1C003F828 @ 0x1C003F828 (sub_1C003F828.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C003F714(union _SLIST_HEADER *a1)
{
  int v2; // edi
  __int64 v3; // rax
  int Alignment_low; // edx

  if ( LOWORD(a1->Alignment) >= 0xAu )
    return 0LL;
  v2 = 0;
  while ( 1 )
  {
    v3 = sub_1C0007CF4(64LL, *((unsigned __int16 *)&a1->Header8 + 1), 1715757394LL, a1[2].Region);
    if ( !v3 )
      break;
    *(_DWORD *)(v3 + 16) = 134684675;
    ExpInterlockedPushEntrySList(a1 + 5, (PSLIST_ENTRY)v3);
    Alignment_low = LOWORD(a1->Alignment);
    if ( ++v2 >= (unsigned int)(10 - Alignment_low) )
    {
      LOWORD(a1->Alignment) = v2 + Alignment_low;
      return 0LL;
    }
  }
  LOWORD(a1->Alignment) += v2;
  return 3221225495LL;
}
