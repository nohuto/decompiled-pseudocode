/*
 * XREFs of sub_14056489C @ 0x14056489C
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     sub_140A92B74 @ 0x140A92B74 (sub_140A92B74.c)
 *     sub_140A92C0C @ 0x140A92C0C (sub_140A92C0C.c)
 */

__int64 __fastcall sub_14056489C(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( byte_140D01124 )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 != 1 )
          return result;
        v2 = 589LL;
      }
      else
      {
        v2 = 587LL;
      }
      return sub_140A92C0C(v2);
    }
    else
    {
      return sub_140A92B74();
    }
  }
  return result;
}
