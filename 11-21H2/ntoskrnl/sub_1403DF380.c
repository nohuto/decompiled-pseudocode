/*
 * XREFs of sub_1403DF380 @ 0x1403DF380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DF380(unsigned __int16 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( (unsigned int)a1 >= *(_DWORD *)(qword_140C4AD18 + 56) )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 40) + 4LL * a1);
  return result;
}
