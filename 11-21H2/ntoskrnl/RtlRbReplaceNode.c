/*
 * XREFs of RtlRbReplaceNode @ 0x1402398E0
 * Callers:
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *result; // rax

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else
  {
    v4 = a1[1];
    if ( (v4 & 1) != 0 )
    {
      if ( v4 == 1 )
        v5 = 0LL;
      else
        v5 = v4 ^ ((unsigned __int64)a1 | 1);
    }
    else
    {
      v5 = a1[1];
    }
    if ( v5 == a2 )
    {
      if ( (v4 & 1) != 0 )
      {
        a1[1] = a3 ^ (unsigned __int64)a1;
        *((_BYTE *)a1 + 8) |= 1u;
      }
      else
      {
        a1[1] = a3;
      }
    }
  }
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 )
    *(_QWORD *)(v6 + 16) = a3 | *(_DWORD *)(v6 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else if ( (a1[1] & 1) != 0 )
  {
    result = (_QWORD *)(a3 ^ (unsigned __int64)a1);
    *a1 = a3 ^ (unsigned __int64)a1;
  }
  else
  {
    *a1 = a3;
  }
  return result;
}
