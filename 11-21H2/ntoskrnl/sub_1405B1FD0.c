/*
 * XREFs of sub_1405B1FD0 @ 0x1405B1FD0
 * Callers:
 *     sub_1405B204C @ 0x1405B204C (sub_1405B204C.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1405B1FD0(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 == -1 )
    __fastfail(0xEu);
  return !v1 && (*(_DWORD *)(a1 + 48) & 4) != 0;
}
