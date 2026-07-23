/*
 * XREFs of sub_1402197CC @ 0x1402197CC
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402197CC(__int64 a1, _BYTE *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 16);
  v4 = 2LL;
  do
  {
    *((_WORD *)v3 - 8) = 0;
    *((_BYTE *)v3 - 12) = 0;
    *(v3 - 1) = 0LL;
    if ( *a2 )
    {
      ExFreePoolWithTag(*(PVOID *)(*v3 + 24), 0);
      result = *v3;
      *(_QWORD *)(*v3 + 24) = 0LL;
      *a2 = 0;
    }
    *v3 = 0LL;
    ++a2;
    *((_DWORD *)v3 + 2) = 0;
    v3[2] = 0LL;
    v3 += 5;
    --v4;
  }
  while ( v4 );
  return result;
}
