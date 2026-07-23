/*
 * XREFs of sub_140B08E90 @ 0x140B08E90
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140B5229C @ 0x140B5229C (sub_140B5229C.c)
 */

_BOOL8 __fastcall sub_140B08E90(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  _QWORD *v13; // rax
  bool v14; // r8
  PMDL v15; // rdx
  struct _MDL *Next; // rax

  v2 = 0LL;
  qword_140C53418 = (__int64)&qword_140C53410;
  qword_140C53420 = 0LL;
  qword_140C53410 = (__int64)&qword_140C53410;
  ExInitializeRundownProtection(&stru_140C53428);
  v3 = a1 + 352;
  v4 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 1) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    goto LABEL_8;
  }
  if ( v4 != 1 )
  {
    v5 = v4 ^ (v3 | 1);
    while ( 1 )
    {
LABEL_8:
      if ( !v5 )
        return !MemoryDescriptorList || (unsigned int)sub_140B5229C();
      if ( ((*(_DWORD *)(v5 + 24) - 33) & 0xFFFFFFFD) != 0 )
        goto LABEL_10;
      v10 = *(_QWORD *)(v5 + 32);
      v11 = *(_QWORD *)(v5 + 40);
      if ( v2 )
      {
        v12 = v2[4];
        if ( v10 == v12 + v2[3] )
        {
          v2[4] = v12 + v11;
          goto LABEL_24;
        }
      }
      v13 = sub_1402828F0(64, 0x28uLL, 0x52456D4Du);
      v2 = v13;
      if ( !v13 )
        return 0LL;
      v13[3] = v10;
      v14 = 0;
      v13[4] = v11;
      v15 = MemoryDescriptorList;
      if ( !MemoryDescriptorList )
        goto LABEL_23;
      while ( (PVOID)v10 < v15->MappedSystemVa )
      {
        Next = v15->Next;
        if ( !v15->Next )
          goto LABEL_23;
LABEL_27:
        v15 = Next;
      }
      Next = *(struct _MDL **)&v15->Size;
      if ( Next )
        goto LABEL_27;
      v14 = 1;
LABEL_23:
      RtlAvlInsertNodeEx((unsigned __int64 *)&MemoryDescriptorList, (unsigned __int64)v15, v14, v2);
LABEL_24:
      sub_1402C38D0((__int64)&StartContext, v10, v11, 0, 0);
LABEL_10:
      v8 = *(_QWORD **)(v5 + 8);
      v6 = v5;
      if ( v8 )
      {
        v7 = (_QWORD *)*v8;
        v5 = *(_QWORD *)(v5 + 8);
        if ( *v8 )
        {
          do
          {
            v5 = (unsigned __int64)v7;
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v5 || *(_QWORD *)v5 == v6 )
            break;
          v6 = v5;
        }
      }
    }
  }
  return !MemoryDescriptorList || (unsigned int)sub_140B5229C();
}
