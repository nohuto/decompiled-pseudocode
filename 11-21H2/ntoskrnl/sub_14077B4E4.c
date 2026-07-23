/*
 * XREFs of sub_14077B4E4 @ 0x14077B4E4
 * Callers:
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_14076A2CC @ 0x14076A2CC (sub_14076A2CC.c)
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B3D4 @ 0x14077B3D4 (sub_14077B3D4.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     sub_14078BF98 @ 0x14078BF98 (sub_14078BF98.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_14077B4E4(int a1, __int64 ***a2, _DWORD *a3)
{
  int v3; // ecx
  __int64 **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &off_140001060;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &off_1400025C0;
    }
  }
  else
  {
    *a3 = 10;
    result = (__int64 **)&off_1400024D0;
  }
  *a2 = result;
  return result;
}
