/*
 * XREFs of sub_140A9D23C @ 0x140A9D23C
 * Callers:
 *     sub_140A9D190 @ 0x140A9D190 (sub_140A9D190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9D23C(__int64 a1)
{
  __int64 i; // rdx
  __int64 result; // rax

  for ( i = qword_140D576F8; (__int64 *)i != &qword_140D576F0; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(i + 24) <= *(_DWORD *)(a1 + 24) )
      break;
  }
  *(_QWORD *)(a1 + 8) = i;
  *(_QWORD *)a1 = *(_QWORD *)i;
  *(_QWORD *)(*(_QWORD *)i + 8LL) = a1;
  *(_QWORD *)i = a1;
  *(_BYTE *)(a1 + 28) = 1;
  result = (unsigned int)++dword_140D57520;
  if ( dword_140D57520 > dword_140D57688 )
  {
    result = (unsigned int)dword_140D57520;
    dword_140D57688 = dword_140D57520;
  }
  return result;
}
