/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x140543CA0
 * Callers:
 *     HvlQueryProcessorTopology @ 0x140543C40 (HvlQueryProcessorTopology.c)
 * Callees:
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(unsigned int a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  int *v8; // rax
  _DWORD *v9; // r11
  int *v10; // r10
  int v11; // ecx
  int v12; // eax

  if ( (dword_140D0688C & 2) == 0 )
    return 3221225506LL;
  if ( a1 >= 0x400 )
    return 3221225485LL;
  v8 = sub_14039E528(a1);
  v10 = v8;
  if ( !v8 )
    return 3221225485LL;
  if ( a2 )
    *a2 = *((_WORD *)v8 + 7);
  if ( a3 )
    *a3 = v8[4];
  if ( v9 )
    *v9 = v8[5];
  if ( a5 )
  {
    v11 = v8[6];
    v12 = -1;
    if ( v11 != -1 )
      v12 = v10[6];
    *a5 = v12;
  }
  return 0LL;
}
