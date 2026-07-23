/*
 * XREFs of sub_1408179B8 @ 0x1408179B8
 * Callers:
 *     sub_1408177B8 @ 0x1408177B8 (sub_1408177B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408179B8(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = qword_140C46960;
  if ( (__int64 *)qword_140C46960 == &qword_140C46960 )
    goto LABEL_2;
  while ( *(_DWORD *)(result + 16) <= *(_DWORD *)(a1 + 16) )
  {
    result = *(_QWORD *)result;
    if ( (__int64 *)result == &qword_140C46960 )
      goto LABEL_2;
  }
  v2 = *(__int64 **)(result + 8);
  if ( *v2 != result )
    goto LABEL_9;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  *(_QWORD *)(result + 8) = a1;
  if ( (__int64 *)result == &qword_140C46960 )
  {
LABEL_2:
    result = qword_140C46968;
    if ( *(__int64 **)qword_140C46968 == &qword_140C46960 )
    {
      *(_QWORD *)a1 = &qword_140C46960;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)result = a1;
      qword_140C46968 = a1;
      return result;
    }
LABEL_9:
    __fastfail(3u);
  }
  return result;
}
