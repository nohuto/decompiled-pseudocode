/*
 * XREFs of sub_14062CE58 @ 0x14062CE58
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14062CE58(__int64 a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 200) - 3) <= 1 )
    return 3221225659LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000000u);
  return 0LL;
}
