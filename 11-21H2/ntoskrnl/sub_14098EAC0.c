/*
 * XREFs of sub_14098EAC0 @ 0x14098EAC0
 * Callers:
 *     sub_14098EB00 @ 0x14098EB00 (sub_14098EB00.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_14098EAC0(unsigned int a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = sub_140348800(a1);
  v4 = *(_QWORD *)(v3 + 33968);
  if ( v4 )
    result = *(unsigned int *)(v4 + 440);
  else
    result = *(unsigned int *)(v3 + 68);
  if ( a2[1] < (unsigned int)result )
    a2[1] = result;
  *a2 = 1;
  return result;
}
