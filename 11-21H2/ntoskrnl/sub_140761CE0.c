/*
 * XREFs of sub_140761CE0 @ 0x140761CE0
 * Callers:
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140761CE0(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) )
  {
    *a2 = 1;
    if ( (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
      return *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
