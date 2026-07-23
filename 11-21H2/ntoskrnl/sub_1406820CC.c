/*
 * XREFs of sub_1406820CC @ 0x1406820CC
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 */

void __fastcall sub_1406820CC(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // esi
  unsigned int i; // ebx
  __int64 v7; // rcx

  v5 = a4 & 1;
  --*(_WORD *)(a3 + 486);
  if ( a2 )
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
  for ( i = 0; i < *a1; ++i )
  {
    v7 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      sub_140682C34(v7, 0LL, v5);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
  }
}
