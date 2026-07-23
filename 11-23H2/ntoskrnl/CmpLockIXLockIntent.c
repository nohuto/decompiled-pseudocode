/*
 * XREFs of CmpLockIXLockIntent @ 0x14076AE20
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    *((_QWORD *)a1 + 1) = a2;
    *a1 = 1;
LABEL_9:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v2 < 0 )
    return CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56)) != 0;
  if ( v2 != 1 )
  {
    v8 = 0LL;
    if ( v2 )
    {
      while ( !CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v8) + 56LL), *(_QWORD *)(a2 + 56)) )
      {
        v2 = *a1;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *a1 )
          goto LABEL_16;
      }
      return 1;
    }
LABEL_16:
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)(v2 + 1), 2018069827LL);
    v10 = Pool2;
    if ( !Pool2 )
      return 0;
    memmove(Pool2, *((const void **)a1 + 1), 8LL * *a1);
    ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
    v11 = *a1;
    *((_QWORD *)a1 + 1) = v10;
    v10[v11] = a2;
    goto LABEL_18;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( CmEqualTrans(*(_QWORD *)(v6 + 56), *(_QWORD *)(a2 + 56)) )
    return 1;
  v7 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 2018069827LL);
  if ( v7 )
  {
    *((_QWORD *)a1 + 1) = v7;
    *v7 = v6;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_18:
    ++*a1;
    goto LABEL_9;
  }
  return 0;
}
