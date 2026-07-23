/*
 * XREFs of sub_1407A49B4 @ 0x1407A49B4
 * Callers:
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     sub_140966950 @ 0x140966950 (sub_140966950.c)
 */

__int64 __fastcall sub_1407A49B4(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  int v7; // ebx
  signed __int32 v8; // eax
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 < 0x28 )
      return 3221225485LL;
    v4 = a2 + 240;
  }
  else
  {
    v4 = 792LL;
  }
  v5 = sub_1407A73B0(qword_140002E58, v4, a3);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  sub_1407A6A34(v5);
  v7 = *(_DWORD *)(v6 + 264);
  memset((void *)v6, 0, 0x118uLL);
  *(_WORD *)(v6 + 242) = 40;
  --*(_WORD *)(v6 - 30);
  *(_DWORD *)(v6 + 264) = v7 & 0x7FFFFFFF;
  do
    v8 = _InterlockedIncrement(&dword_140D31300);
  while ( !v8 );
  *(_DWORD *)(v6 + 272) = v8;
  if ( dword_140C2A158 )
    sub_140966950(v6);
  *(_WORD *)(v6 + 242) = 40;
  result = 0LL;
  *a1 = v6;
  return result;
}
