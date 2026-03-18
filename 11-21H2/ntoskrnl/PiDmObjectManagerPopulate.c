/*
 * XREFs of PiDmObjectManagerPopulate @ 0x140844A24
 * Callers:
 *     PiDmInit @ 0x140B1B1D0 (PiDmInit.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     _PnpGetObjectList @ 0x140789FA0 (_PnpGetObjectList.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmObjectManagerPopulate(__int64 a1)
{
  void *Pool2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int ObjectList; // eax
  int v7; // ebx
  const wchar_t *i; // rsi
  __int64 v9; // rax
  unsigned int **v11; // rax
  unsigned int **v12; // rdi
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *Buffer; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0x40000;
  Pool2 = 0LL;
  Buffer = 0LL;
  do
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x5A706E50u);
    Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v13, 1517317712LL);
    if ( !Pool2 )
    {
      v7 = -1073741670;
LABEL_20:
      while ( 1 )
      {
        v11 = (unsigned int **)RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), 1u);
        v12 = v11;
        if ( !v11 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), v11);
        PiDmObjectRelease(*v12);
      }
      return (unsigned int)v7;
    }
    ObjectList = PnpGetObjectList(v3, *(_DWORD *)(a1 + 208), v4, v5, (__int64)Pool2, v13, (__int64)&v13, 0x10000);
  }
  while ( ObjectList == -1073741789 );
  v7 = ObjectList;
  if ( ObjectList >= 0 )
  {
    if ( v13 )
    {
      for ( i = (const wchar_t *)Pool2; *i; i += v9 + 1 )
      {
        v7 = PiDmObjectCreate(*(_DWORD *)(a1 + 208), i, (__int64 *)&Buffer);
        if ( v7 < 0 )
          break;
        Buffer[8] |= 1u;
        Buffer[3] = 1;
        if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer, 8u, 0LL) )
        {
          PiDmObjectRelease(Buffer);
          v7 = -1073741670;
          break;
        }
        v9 = -1LL;
        do
          ++v9;
        while ( i[v9] );
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0x5A706E50u);
  if ( v7 < 0 )
    goto LABEL_20;
  return (unsigned int)v7;
}
