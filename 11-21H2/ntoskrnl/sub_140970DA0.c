/*
 * XREFs of sub_140970DA0 @ 0x140970DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 */

__int64 __fastcall sub_140970DA0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  PVOID v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax

  if ( !sub_14029C6C4() || v4 == qword_140D068F0 || v4 == qword_140D06988 )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v5 = sub_1402FDA80((unsigned __int64)v4, 1);
    result = v5[6] + *((unsigned int *)v5 + 16) + (unsigned int)dword_140C4F478;
    *a2 = (unsigned int)(dword_140C4F440 << 12);
  }
  return result;
}
