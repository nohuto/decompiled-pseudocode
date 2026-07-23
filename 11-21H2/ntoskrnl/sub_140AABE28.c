/*
 * XREFs of sub_140AABE28 @ 0x140AABE28
 * Callers:
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 * Callees:
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_140AABFF8 @ 0x140AABFF8 (sub_140AABFF8.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AAD404 @ 0x140AAD404 (sub_140AAD404.c)
 */

__int64 __fastcall sub_140AABE28(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = sub_1403A8368();
  result = sub_140AAD404(v5, v4, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a2;
    v8 = v10;
    v9 = sub_140AABFF8(v10, v7);
    if ( v9 < 0 )
    {
      if ( v8 )
        sub_140AAD3E0(v8);
    }
    else
    {
      *a1 = v8;
    }
    return (unsigned int)v9;
  }
  return result;
}
