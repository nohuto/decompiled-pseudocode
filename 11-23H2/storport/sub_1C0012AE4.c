/*
 * XREFs of sub_1C0012AE4 @ 0x1C0012AE4
 * Callers:
 *     sub_1C00129D8 @ 0x1C00129D8 (sub_1C00129D8.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 */

__int64 __fastcall sub_1C0012AE4(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v4 = -1073741637;
  if ( sub_1C0004890(a1, 3) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = *(_QWORD *)(a1 + 24);
    v8 = a1 + 88;
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 24);
    return (unsigned int)sub_1C0018524(v6 + 336, 3LL, &v8);
  }
  return v4;
}
