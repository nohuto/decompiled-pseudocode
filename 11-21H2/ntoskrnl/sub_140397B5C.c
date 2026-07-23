/*
 * XREFs of sub_140397B5C @ 0x140397B5C
 * Callers:
 *     sub_14037A3E0 @ 0x14037A3E0 (sub_14037A3E0.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_1405F627C @ 0x1405F627C (sub_1405F627C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140397B5C(__int64 a1, int a2, __int64 a3)
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
