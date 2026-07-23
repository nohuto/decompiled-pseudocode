/*
 * XREFs of sub_14085D3E0 @ 0x14085D3E0
 * Callers:
 *     sub_1403AAEF4 @ 0x1403AAEF4 (sub_1403AAEF4.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085D3E0(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 Pool2; // rax
  unsigned int i; // ebp
  __int64 v9; // rbx

  v1 = dword_140D06884;
  v2 = a1;
  v3 = dword_140C5B108[a1];
  if ( v3 || (v4 = 0, !(_DWORD)dword_140D06884) )
  {
LABEL_7:
    dword_140C5B108[v2] = v3 + 1;
    return 0LL;
  }
  while ( 1 )
  {
    v5 = *(_QWORD *)(sub_140348800(v4) + 34472);
    if ( *(_QWORD *)(v5 + 8 * v2 + 392) )
    {
      *(_BYTE *)(v2 + v5 + 384) = 0;
      goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(64LL, 1024LL, 2004042563LL);
    *(_QWORD *)(v5 + 8 * v2 + 392) = Pool2;
    if ( !Pool2 )
      break;
LABEL_5:
    ++v4;
    **(_DWORD **)(v5 + 8 * v2 + 392) = 0;
    if ( v4 >= v1 )
    {
      v3 = dword_140C5B108[v2];
      goto LABEL_7;
    }
  }
  for ( i = 0; i < v4; ++i )
  {
    v9 = *(_QWORD *)(sub_140348800(i) + 34472);
    ExFreePoolWithTag(*(PVOID *)(v9 + 8 * v2 + 392), 0);
    *(_QWORD *)(v9 + 8 * v2 + 392) = 0LL;
  }
  return 3221225495LL;
}
