/*
 * XREFs of sub_1403DD8CC @ 0x1403DD8CC
 * Callers:
 *     sub_1403DD848 @ 0x1403DD848 (sub_1403DD848.c)
 *     sub_140AB0880 @ 0x140AB0880 (sub_140AB0880.c)
 * Callees:
 *     sub_1403A89B4 @ 0x1403A89B4 (sub_1403A89B4.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_1403DD8CC(__int64 *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1;
  if ( *(_DWORD *)(v4 + 8) != (_DWORD)a2 )
  {
    v6 = 0LL;
    v3 = sub_1403A89B4(v4, a2, &v6, 0);
    if ( v3 >= 0 )
    {
      sub_140AAD3E0(*a1);
      *a1 = v6;
    }
  }
  return (unsigned int)v3;
}
