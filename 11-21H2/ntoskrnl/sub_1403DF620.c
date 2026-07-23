/*
 * XREFs of sub_1403DF620 @ 0x1403DF620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 */

__int64 __fastcall sub_1403DF620(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v4; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1) )
  {
    v4 = sub_1403BE7F0(*(_QWORD *)(a1 + 20), *(unsigned int *)(a1 + 28), 0);
    if ( v4 )
      *(_QWORD *)(a1 + 8) = v4;
    else
      return (unsigned int)-1073741670;
  }
  return v1;
}
