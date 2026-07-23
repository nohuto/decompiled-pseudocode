/*
 * XREFs of sub_140A32CB0 @ 0x140A32CB0
 * Callers:
 *     sub_140A32E98 @ 0x140A32E98 (sub_140A32E98.c)
 * Callees:
 *     sub_140A33E74 @ 0x140A33E74 (sub_140A33E74.c)
 */

__int64 __fastcall sub_140A32CB0(int a1, int a2, __int64 a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 20;
  v4 = sub_140A33E74(a1, a2, (unsigned int)&v8, (unsigned int)&qword_14000B190, 15, a3);
  if ( v4 > 0 )
  {
    v5 = *(_DWORD *)(a3 + 192);
    v4 = *(_DWORD *)(a3 + 16);
    if ( v5 )
    {
      ++*(_QWORD *)(a3 + 200);
      *(_DWORD *)(a3 + 192) = v5 - 1;
    }
    v6 = *(_DWORD *)(a3 + 208);
    if ( v6 )
    {
      ++*(_QWORD *)(a3 + 216);
      *(_DWORD *)(a3 + 208) = v6 - 1;
    }
  }
  return (unsigned int)v4;
}
