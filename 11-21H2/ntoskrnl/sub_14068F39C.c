/*
 * XREFs of sub_14068F39C @ 0x14068F39C
 * Callers:
 *     sub_14068F1F8 @ 0x14068F1F8 (sub_14068F1F8.c)
 * Callees:
 *     sub_140911974 @ 0x140911974 (sub_140911974.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_14068F39C(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // bp
  int v5; // esi
  int v6; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  v6 = a3;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4224) >> 1) & 1) != a3) && !a4 )
  {
    sub_140AB4370();
    sub_140AB41FC(a1);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v5 )
  {
    sub_140911974(&stru_140039940);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 4224) >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *(_DWORD *)(a1 + 4224) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4224) ^ (unsigned __int8)(2 * v6)) & 2u;
    *(_DWORD *)(a1 + 4224) = result;
  }
  if ( v4 )
  {
    sub_140AB41E0(a1);
    return sub_140AB4260(v11, v10, v12, v13);
  }
  return result;
}
