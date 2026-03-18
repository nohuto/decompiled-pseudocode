/*
 * XREFs of CmpRollbackTransactionArray @ 0x140A1E7B0
 * Callers:
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x1403D80F0 (TmRollbackEnlistment.c)
 *     CmpTransDereferenceTransaction @ 0x140768F38 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0DB0 (CmpRollbackLightWeightTransaction.c)
 *     CmpRetryBackOff @ 0x140A1E778 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, __int64 a3, _DWORD *a4)
{
  int v4; // edi
  PVOID *v7; // r14
  __int64 v8; // rbp
  PVOID v9; // rbx
  struct _KENLISTMENT *v10; // rcx
  int v11; // esi

  v4 = 0;
  if ( a1 )
  {
    v7 = a2;
    v8 = a1;
    do
    {
      v9 = *v7;
      v10 = (struct _KENLISTMENT *)*v7;
      if ( ((unsigned __int8)*v7 & 1) != 0 )
      {
        v11 = CmpRollbackLightWeightTransaction((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFEuLL);
        CmpTransDereferenceTransaction((__int64)v9);
      }
      else
      {
        v11 = TmRollbackEnlistment(v10, 0LL);
        ObfDereferenceObject(*v7);
      }
      if ( v11 < 0 && v4 >= 0 && (((v11 + 1072103405) & 0xFFFFFFFC) != 0 || v11 == -1072103404) )
        v4 = v11;
      ++v7;
      --v8;
    }
    while ( v8 );
    ExFreePoolWithTag(a2, 0x36344D43u);
  }
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
