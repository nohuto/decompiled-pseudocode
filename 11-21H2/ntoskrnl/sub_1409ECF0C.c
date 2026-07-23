/*
 * XREFs of sub_1409ECF0C @ 0x1409ECF0C
 * Callers:
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409ECF0C(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 Pool2; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  v5 = 0;
  v8 = a1;
  v9 = a1;
  do
  {
    KsrMdlToMemoryRuns(v9, 0LL, 0LL, &v16);
    v5 += v16;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  Pool2 = ExAllocatePool2(256LL, 8LL * v5, 1266119749LL);
  v11 = (void *)Pool2;
  if ( Pool2 )
  {
    v13 = Pool2;
    v14 = v5;
    while ( v8 )
    {
      KsrMdlToMemoryRuns(v8, v13, v14, &v16);
      v14 -= v16;
      v8 = (_QWORD *)*v8;
      v13 += 8LL * v16;
    }
    v12 = KsrPersistMemoryWithMetadata(qword_140A37D90, v11, v5, a2, a3, a4);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
