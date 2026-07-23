/*
 * XREFs of sub_14069F324 @ 0x14069F324
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 *     sub_14065C8A4 @ 0x14065C8A4 (sub_14065C8A4.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_14069F324(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rbp
  PVOID v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx

  v5 = 0;
  if ( a2 >= 2 )
  {
    LOWORD(v8) = a2 - 1;
    v9 = Allocate(PagedPool, 32LL * a2 - 32, 0x39364D43u, a4);
    *(_QWORD *)(a1 + 72) = v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    v10 = 0LL;
    v8 = (unsigned __int16)v8;
    do
    {
      v11 = *(_QWORD *)(a1 + 72);
      *(_OWORD *)(v10 + v11) = 0LL;
      *(_OWORD *)(v10 + v11 + 16) = 0LL;
      *(_DWORD *)(v10 + v11 + 8) = -1;
      sub_1407C97FC(v10 + v11 + 24);
      v10 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  *(_WORD *)a1 = a2;
  return v5;
}
