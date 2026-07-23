/*
 * XREFs of sub_1405EB250 @ 0x1405EB250
 * Callers:
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1405EB250(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++a1[157];
    }
    else
    {
      ++a1[156];
    }
  }
  else
  {
    ++a1[154];
    ++a1[155];
  }
}
