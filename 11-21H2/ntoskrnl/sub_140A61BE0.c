/*
 * XREFs of sub_140A61BE0 @ 0x140A61BE0
 * Callers:
 *     sub_140A61CF4 @ 0x140A61CF4 (sub_140A61CF4.c)
 * Callees:
 *     sub_14051B254 @ 0x14051B254 (sub_14051B254.c)
 *     sub_140529654 @ 0x140529654 (sub_140529654.c)
 *     sub_1405298F8 @ 0x1405298F8 (sub_1405298F8.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 */

__int64 __fastcall sub_140A61BE0(__int64 a1, PHYSICAL_ADDRESS *a2, unsigned int a3)
{
  int v6; // edx
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 i; // rdi
  signed __int64 QuadPart; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  if ( byte_140C4BCBC || !a2[3].LowPart )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = sub_14051B254(0, &v15);
    if ( v6 >= 0 )
    {
      v8 = (__int64 *)&a2[1];
      v6 = sub_140529654(v15, a3, a3, v7, v14, a1, (__int64 *)&a2[1]);
      if ( v6 >= 0 )
      {
        v6 = sub_1405298F8(*v8, a3, a2 + 2);
        if ( v6 >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < a2[3].LowPart; i = (unsigned int)(i + 1) )
          {
            if ( !LOBYTE(a2[3 * i + 6].LowPart) )
            {
              if ( (a2[3 * i + 4].LowPart & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              QuadPart = a2[3 * i + 5].QuadPart;
              v11 = a2[3 * i + 4].QuadPart;
              if ( QuadPart <= v11 )
                return (unsigned int)-1073741811;
              v12 = QuadPart - v11 + 1;
              if ( (v12 & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              v6 = sub_140529F08(a1, *v8, 3, a2[3 * i + 4].QuadPart, v12, v11);
              if ( v6 < 0 )
                return (unsigned int)v6;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
