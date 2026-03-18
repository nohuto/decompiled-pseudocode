/*
 * XREFs of IopStoreArcInformation @ 0x140B2CF90
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x1402A1054 (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x1403E1240 (_strnicmp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  __int64 **v1; // r14
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 *i; // rsi
  __int64 Pool2; // rdi
  __int64 v6; // rbp
  ULONG_PTR v7; // rbp
  char *v8; // rax
  char *v9; // r15
  __int64 *v10; // rax
  PVOID *j; // rax
  PVOID *m; // rcx
  void *n; // rcx
  PVOID *v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  PVOID *k; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  v2 = dword_140C15C70;
  v3 = 0;
  qword_140D3CBE0 = (__int64)&IoArcTableListHead;
  IoArcTableListHead = &IoArcTableListHead;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = (PVOID *)IoArcTableListHead; j != &IoArcTableListHead; j = (PVOID *)*j )
      {
        if ( !*((_BYTE *)j + 36) && !*((_BYTE *)j + 72) )
        {
          v17 = *((_DWORD *)j + 8);
          for ( k = (PVOID *)*j; k != &IoArcTableListHead; k = (PVOID *)*k )
          {
            if ( !*((_BYTE *)k + 36) && !*((_BYTE *)k + 72) && v17 == *((_DWORD *)k + 8) )
            {
              *((_BYTE *)j + 72) = 1;
              *((_BYTE *)k + 72) = 1;
            }
          }
        }
      }
      if ( v2 == 1 )
      {
        for ( m = (PVOID *)IoArcTableListHead; m != &IoArcTableListHead; m = (PVOID *)*m )
        {
          if ( *((_BYTE *)m + 76) && *((_BYTE *)m + 72) )
            IopAmbiguousSystemDisk = 1;
        }
      }
      return v3;
    }
    Pool2 = ExAllocatePool2(64LL, 0x50uLL, 0x20206F49u);
    if ( !Pool2 )
      goto LABEL_28;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(i[3] + v6) );
    v7 = v6 + 1;
    v8 = (char *)ExAllocatePool2(64LL, v7, 0x20206F49u);
    v9 = v8;
    if ( !v8 )
      break;
    *(_OWORD *)Pool2 = *(_OWORD *)i;
    *(_OWORD *)(Pool2 + 16) = *((_OWORD *)i + 1);
    *(_OWORD *)(Pool2 + 32) = *((_OWORD *)i + 2);
    *(_OWORD *)(Pool2 + 48) = *((_OWORD *)i + 3);
    RtlStringCbCopyA(v8, v7, (NTSTRSAFE_PCSTR)i[3]);
    *(_QWORD *)(Pool2 + 24) = v9;
    if ( v2 == 1 && v7 >= 9 && !strnicmp(&v9[v7 - 9], "rdisk(0)", 8uLL) )
      *(_BYTE *)(Pool2 + 76) = 1;
    v10 = (__int64 *)qword_140D3CBE0;
    if ( *(PVOID **)qword_140D3CBE0 != &IoArcTableListHead )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)Pool2 = &IoArcTableListHead;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    qword_140D3CBE0 = Pool2;
  }
  for ( n = (void *)Pool2; ; n = v15 )
  {
    ExFreePoolWithTag(n, 0);
LABEL_28:
    v15 = (PVOID *)IoArcTableListHead;
    if ( IoArcTableListHead == &IoArcTableListHead )
      break;
    if ( *((PVOID **)IoArcTableListHead + 1) != &IoArcTableListHead )
      goto LABEL_31;
    v16 = *(_QWORD *)IoArcTableListHead;
    if ( *(PVOID *)(*(_QWORD *)IoArcTableListHead + 8LL) != IoArcTableListHead )
      goto LABEL_31;
    IoArcTableListHead = *(PVOID *)IoArcTableListHead;
    *(_QWORD *)(v16 + 8) = &IoArcTableListHead;
    ExFreePoolWithTag(v15[3], 0);
  }
  return (unsigned int)-1073741670;
}
