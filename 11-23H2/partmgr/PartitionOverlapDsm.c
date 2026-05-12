/*
 * XREFs of PartitionOverlapDsm @ 0x1C001C050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionOverlapDsm(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD **a5)
{
  unsigned int v5; // r10d
  _QWORD *v6; // r11
  int v7; // ecx
  int v8; // ecx
  __int64 v10; // rcx

  v5 = 0;
  v6 = *a5;
  v7 = a1 - 1;
  if ( !v7 )
    return (unsigned int)-1073741811;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v6[1] = a3;
    *v6 = a4 + v10;
    *a5 = v6 + 2;
    return v5;
  }
  if ( v8 != 2 )
    return (unsigned int)-1073741811;
  return v5;
}
