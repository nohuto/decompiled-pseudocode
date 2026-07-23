/*
 * XREFs of sub_1403DE590 @ 0x1403DE590
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_1403DE590(unsigned int a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a2 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    qword_140D04890 = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(sub_140348800(a1) + 34088) = a2;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
