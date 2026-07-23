/*
 * XREFs of sub_1409E1B94 @ 0x1409E1B94
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_1409E0DC0 @ 0x1409E0DC0 (sub_1409E0DC0.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E1B94(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int v6; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *Pool2; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int v14; // edi

  v4 = MaxCount;
  v6 = sub_140A56B08();
  v7 = -1LL;
  v8 = v6;
  do
    ++v7;
  while ( aRegistryMachin_86[v7] );
  v9 = 2 * v7 + 514;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1350005829LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v14 = sub_1409E0DC0(v11, v8, a3, v9, Pool2);
  if ( v14 >= 0 )
    v14 = sub_1409E190C(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)v14;
}
