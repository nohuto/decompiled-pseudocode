/*
 * XREFs of sub_14082CDB4 @ 0x14082CDB4
 * Callers:
 *     sub_1409AC788 @ 0x1409AC788 (sub_1409AC788.c)
 *     sub_140B0B180 @ 0x140B0B180 (sub_140B0B180.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14025B190 (RtlGetProductInfo.c)
 *     sub_14082CE58 @ 0x14082CE58 (sub_14082CE58.c)
 *     sub_14082CEA0 @ 0x14082CEA0 (sub_14082CEA0.c)
 */

__int64 __fastcall sub_14082CDB4(__int64 a1, char a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  ReturnedProductType = 0;
  v8 = 0LL;
  v3 = sub_14082CEA0();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
  {
    v4 = 0;
    v5 = &dword_140A3BFC4;
    v6 = 51LL;
    do
    {
      if ( *(v5 - 1) != ReturnedProductType )
        v4 |= *v5;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 &= ~v4;
    if ( (unsigned __int8)sub_14082CE58(ReturnedProductType, &v8) )
      v3 |= HIDWORD(v8);
  }
  return v3 | (a2 != 0 ? 131088 : 272);
}
