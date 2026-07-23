/*
 * XREFs of sub_140914BEC @ 0x140914BEC
 * Callers:
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 * Callees:
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_140914214 @ 0x140914214 (sub_140914214.c)
 */

__int64 __fastcall sub_140914BEC(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3, unsigned int a4, unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int *v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = -1;
  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v9 = sub_14071F300(a1, *(unsigned int *)(a2 + 40), 0), v9 >= 0) )
  {
    v9 = sub_140914214(a1, a3, a5, (int *)&v13);
    if ( v9 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v12 = v5;
      v10 = v13;
      v9 = sub_14079B920(a1, v13, a4, a5, v12, 1);
      if ( v9 >= 0 )
      {
        v10 = -1;
        v9 = 0;
      }
    }
    if ( v10 != -1 )
      sub_14079B22C(a1, v10);
  }
  return (unsigned int)v9;
}
