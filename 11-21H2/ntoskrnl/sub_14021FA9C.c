/*
 * XREFs of sub_14021FA9C @ 0x14021FA9C
 * Callers:
 *     sub_1406962A4 @ 0x1406962A4 (sub_1406962A4.c)
 *     sub_140696EC8 @ 0x140696EC8 (sub_140696EC8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

__int64 __fastcall sub_14021FA9C(unsigned int a1, HANDLE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = ZwClose(*a2++);
      if ( v5 < 0 )
        v2 = v5;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
