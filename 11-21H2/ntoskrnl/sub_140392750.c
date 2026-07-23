/*
 * XREFs of sub_140392750 @ 0x140392750
 * Callers:
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_1403925F8 @ 0x1403925F8 (sub_1403925F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140392750(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 i; // r9
  unsigned __int64 v5; // rdx

  for ( i = *(_QWORD *)a1 + 16 * (*(unsigned int *)(a1 + 24) - 2LL); i >= *(_QWORD *)a1; i -= 16LL )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(i + 8) < *(_QWORD *)i + 16 * ((unsigned __int64)(unsigned __int16)**(_DWORD **)i + 1) )
      {
        *(_OWORD *)a3 = *(_OWORD *)i;
        return 1LL;
      }
    }
    else
    {
      v5 = *(_QWORD *)(i + 8);
      if ( v5 > *(_QWORD *)i + 16LL )
      {
        *(_QWORD *)a3 = *(_QWORD *)i;
        *(_QWORD *)(a3 + 8) = v5 - 16;
        return 1LL;
      }
    }
  }
  return 0LL;
}
