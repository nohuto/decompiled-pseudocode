/*
 * XREFs of sub_140A98A98 @ 0x140A98A98
 * Callers:
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A98A98(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = qword_140D57500;
  result = *((unsigned int *)qword_140D57500 + 8216);
  if ( (unsigned int)result < 0x20 )
  {
    *((_QWORD *)qword_140D57500 + result + 4109) = a1;
    ++v1[8216];
  }
  else
  {
    dword_140D57524 |= 0x10u;
  }
  return result;
}
