/*
 * XREFs of sub_1C0063D60 @ 0x1C0063D60
 * Callers:
 *     sub_1C0061260 @ 0x1C0061260 (sub_1C0061260.c)
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0063D60(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  char result; // al
  _QWORD *i; // rcx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  result = 1;
  if ( v1 )
  {
    for ( i = (_QWORD *)(a1 + 64); (_QWORD *)*i == i; i += 8 )
    {
      if ( ++v2 >= v1 )
        return result;
    }
    return 0;
  }
  return result;
}
