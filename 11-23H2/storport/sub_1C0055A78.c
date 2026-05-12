/*
 * XREFs of sub_1C0055A78 @ 0x1C0055A78
 * Callers:
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007DF34 @ 0x1C007DF34 (sub_1C007DF34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0055A78(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  void *v5; // rsi

  v2 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v3 = *(unsigned int *)(a2 + 120);
      v4 = *(void **)(a2 + 64);
      v5 = *(void **)(v3 + a2 + 16);
      *(_QWORD *)(a2 + 80) = 0LL;
      *(_QWORD *)(a2 + 104) = 0LL;
      *(_QWORD *)(a2 + 64) = 0LL;
      *(_QWORD *)(v3 + a2 + 16) = 0LL;
    }
    else
    {
      v4 = *(void **)(a2 + 24);
      v5 = *(void **)(a2 + 32);
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)a2, 0x72536152u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4E536152u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x43546152u);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
