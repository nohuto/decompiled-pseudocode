/*
 * XREFs of sub_1409CCBCC @ 0x1409CCBCC
 * Callers:
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 * Callees:
 *     sub_1409CCC54 @ 0x1409CCC54 (sub_1409CCC54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CCBCC(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // eax
  void *v4; // rcx

  v2 = *(void **)(a1 + 1120);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 208);
    if ( v3 != -1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v3) = 0LL;
      v2 = *(void **)(a1 + 1120);
      *(_DWORD *)(a1 + 208) = -1;
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  v4 = *(void **)(a1 + 1128);
  if ( v4 )
  {
    sub_1409CCC54(v4);
    *(_QWORD *)(a1 + 1128) = 0LL;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 124) = 0;
}
