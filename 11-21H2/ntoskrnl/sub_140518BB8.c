/*
 * XREFs of sub_140518BB8 @ 0x140518BB8
 * Callers:
 *     sub_1405055B8 @ 0x1405055B8 (sub_1405055B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140518BB8(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v8; // rsi
  unsigned int v9; // r10d
  unsigned int v10; // edi
  __int64 result; // rax

  v4 = *(_DWORD *)(a2 + 32);
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( !v4 )
    goto LABEL_15;
  do
  {
    if ( v9 >= a3 )
      break;
    if ( (*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v5 )
        *(_QWORD *)(v8 + 8) = v6;
      else
        v5 = v6;
      ++v9;
      v8 = v6;
    }
    else
    {
      if ( v7 )
        *(_QWORD *)(v7 + 8) = v6;
      else
        *(_QWORD *)(a2 + 24) = v6;
      v7 = v6;
    }
    v6 = *(_QWORD *)(v6 + 8);
    ++v10;
  }
  while ( v10 < v4 );
  if ( v7 )
    *(_QWORD *)(v7 + 8) = v6;
  else
LABEL_15:
    *(_QWORD *)(a2 + 24) = v6;
  *(_DWORD *)(a2 + 32) -= v9;
  result = v5;
  *a4 = v9;
  return result;
}
