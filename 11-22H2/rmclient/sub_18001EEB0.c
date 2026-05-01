/*
 * XREFs of sub_18001EEB0 @ 0x18001EEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  if ( a6 >= 4 && !*a5 )
    SetEvent(*(HANDLE *)(a4 + 64));
  return 0LL;
}
