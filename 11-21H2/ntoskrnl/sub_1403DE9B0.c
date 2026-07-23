/*
 * XREFs of sub_1403DE9B0 @ 0x1403DE9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DE9B0(unsigned __int16 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(qword_140C4AD18 + 56);
  if ( a1 >= v3 || a2 >= v3 )
    return 3221226021LL;
  result = 0LL;
  *a3 = *(unsigned __int16 *)(*(_QWORD *)(qword_140C4AD18 + 48)
                            + 2LL * (a1 * *(_DWORD *)(qword_140C4AD18 + 64) + (unsigned int)a2));
  return result;
}
