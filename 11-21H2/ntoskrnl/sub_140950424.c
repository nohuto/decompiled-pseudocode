/*
 * XREFs of sub_140950424 @ 0x140950424
 * Callers:
 *     sub_14095E7EC @ 0x14095E7EC (sub_14095E7EC.c)
 *     sub_14095E874 @ 0x14095E874 (sub_14095E874.c)
 * Callees:
 *     sub_140560680 @ 0x140560680 (sub_140560680.c)
 *     sub_140560D94 @ 0x140560D94 (sub_140560D94.c)
 */

char __fastcall sub_140950424(PVOID **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  char result; // al

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)(a3 + 36) )
    sub_140560D94(0x14u, "Beginning handle dump:\n");
  *(_DWORD *)(a3 + 32) = 0;
  *(_QWORD *)(a3 + 24) = a3 + 16;
  *(_QWORD *)(a3 + 16) = a3 + 16;
  result = *(_BYTE *)(a3 + 36);
  if ( result || *(_BYTE *)(a3 + 37) )
  {
    if ( (_DWORD)v4 )
    {
      do
      {
        *(_QWORD *)a3 = *a1;
        sub_140560680(*a1++, a2, a3);
        --v4;
      }
      while ( v4 );
      result = *(_BYTE *)(a3 + 36);
    }
    if ( result )
      return sub_140560D94(0x14u, "Dump complete - %d total handles found.\n", *(_DWORD *)(a3 + 32));
  }
  return result;
}
