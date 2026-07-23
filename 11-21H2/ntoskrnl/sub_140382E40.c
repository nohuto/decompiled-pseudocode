/*
 * XREFs of sub_140382E40 @ 0x140382E40
 * Callers:
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_1403836FC @ 0x1403836FC (sub_1403836FC.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140382E40(__int64 a1, int a2, __int64 a3)
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
