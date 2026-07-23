/*
 * XREFs of sub_14079B2C0 @ 0x14079B2C0
 * Callers:
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 */

__int64 __fastcall sub_14079B2C0(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // rbx
  int v10; // edi
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = -1;
  v8 = a2 + 36;
  if ( !*(_DWORD *)(a2 + 36) || (v10 = sub_14071F300(a1, *(unsigned int *)(a2 + 40), 0), v10 >= 0) )
  {
    v13 = a7;
    v10 = sub_14079B758(a1, v13, a8, (__int64)&v15);
    if ( v10 < 0 )
    {
      v11 = v15;
    }
    else
    {
      v14 = v8;
      v11 = v15;
      v10 = sub_14079B920(a1, v14, 1);
      if ( v10 >= 0 )
      {
        v11 = -1;
        v10 = 0;
      }
    }
    if ( v11 != -1 )
      sub_14079B22C(a1, v11);
  }
  return (unsigned int)v10;
}
