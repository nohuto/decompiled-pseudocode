/*
 * XREFs of sub_1403AA5E8 @ 0x1403AA5E8
 * Callers:
 *     sub_1403A8D68 @ 0x1403A8D68 (sub_1403A8D68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403AA5E8(unsigned int *a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // ecx
  unsigned int i; // r9d
  __int64 v8; // rdi
  unsigned int v9; // r8d
  __int16 v10; // cx
  __int64 v12; // r8

  v3 = 0;
  v5 = *a1;
  for ( i = 0; i < v5; ++i )
  {
    if ( *(_WORD *)(*((_QWORD *)a1 + 2) + 2LL * i) <= a2 && a2 <= *(_WORD *)(*((_QWORD *)a1 + 3) + 2LL * i) )
      break;
  }
  if ( i == v5 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(unsigned __int16 *)(v8 + 2LL * i);
    if ( (_WORD)v9 )
    {
      v12 = a2 + i + (v9 >> 1) - *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2LL * i);
      a2 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * i);
      v10 = *(_WORD *)(v8 + 2 * v12);
    }
    else
    {
      v10 = *(_WORD *)(*((_QWORD *)a1 + 4) + 2LL * i);
    }
    *a3 = a2 + v10;
  }
  return v3;
}
