/*
 * XREFs of sub_14081F87C @ 0x14081F87C
 * Callers:
 *     sub_140820094 @ 0x140820094 (sub_140820094.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14081F87C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 712);
        if ( v7
          || (Pool2 = ExAllocatePool2(256LL, 112LL, 1650807376LL), *(_QWORD *)(v6 + 712) = Pool2, (v7 = Pool2) != 0) )
        {
          if ( !*(_QWORD *)(v7 + 96) )
          {
            *(_BYTE *)(v7 + 88) = *(_BYTE *)(a1 + 16);
            *(_DWORD *)(v7 + 92) = *(_DWORD *)(v2 + 16);
            *(_QWORD *)(v7 + 96) = *(_QWORD *)(v2 + 24);
            *(_QWORD *)(v7 + 104) = a2;
          }
        }
      }
    }
  }
}
