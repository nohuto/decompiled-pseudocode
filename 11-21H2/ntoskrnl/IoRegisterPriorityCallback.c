/*
 * XREFs of IoRegisterPriorityCallback @ 0x1403C75D0
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(ULONG_PTR a1, ULONG_PTR a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rbx
  __int64 v5; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 40LL, 1648586569LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2].Count = (ULONG_PTR)Pool2;
  Pool2[1].Count = (ULONG_PTR)sub_14024EB80;
  Pool2[4].Count = a1;
  Pool2[3].Count = a2;
  ExInitializeRundownProtection(Pool2);
  v5 = 0LL;
  do
  {
    if ( (unsigned __int8)sub_1403C7678((char *)&unk_140C46D20 + 8 * v5, Pool2, 0LL) )
    {
      _InterlockedIncrement(&dword_140D00A90);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 8 );
  sub_1406D9550(Pool2);
  return 3221225485LL;
}
