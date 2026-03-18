/*
 * XREFs of SymCryptIntExtendedGcd @ 0x1404055F4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1404053F0 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140242A20 (KeReadStateSemaphore.c)
 *     SymCryptDivisorCreate @ 0x140400ACC (SymCryptDivisorCreate.c)
 *     SymCryptIntAddMixedSize @ 0x140400AFC (SymCryptIntAddMixedSize.c)
 *     SymCryptIntBitsizeOfObject @ 0x140400B2C (SymCryptIntBitsizeOfObject.c)
 *     SymCryptIntConditionalCopy @ 0x140400B5C (SymCryptIntConditionalCopy.c)
 *     SymCryptIntConditionalSwap @ 0x140400B74 (SymCryptIntConditionalSwap.c)
 *     SymCryptIntCopyMixedSize @ 0x140400BA4 (SymCryptIntCopyMixedSize.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140400BD4 (SymCryptIntDivMod.c)
 *     SymCryptIntFromDivisor @ 0x140400C18 (SymCryptIntFromDivisor.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140400C78 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMulMixedSize @ 0x140400CD8 (SymCryptIntMulMixedSize.c)
 *     SymCryptIntSetValueUint32 @ 0x140400D28 (SymCryptIntSetValueUint32.c)
 *     SymCryptIntShr1 @ 0x140400D58 (SymCryptIntShr1.c)
 *     SymCryptIntSubMixedSize @ 0x140400D70 (SymCryptIntSubMixedSize.c)
 *     SymCryptIntSubSameSize @ 0x140400D88 (SymCryptIntSubSameSize.c)
 *     SymCryptIntToDivisor @ 0x140400DB8 (SymCryptIntToDivisor.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x140401338 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptIntExtendedGcd(
        PRKSEMAPHORE Semaphore,
        PRKSEMAPHORE a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int StateSemaphore; // ebx
  unsigned int v12; // eax
  struct _KSEMAPHORE *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // esi
  __int64 v21; // rbp
  int v22; // ebx
  int v23; // eax
  int v24; // esi
  __int64 result; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // r13d
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  int v35; // [rsp+58h] [rbp-50h]
  int v36; // [rsp+60h] [rbp-48h]
  int v37; // [rsp+68h] [rbp-40h]
  int v38; // [rsp+B0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+10h]

  v39 = (int)a2;
  v38 = (int)Semaphore;
  StateSemaphore = KeReadStateSemaphore(Semaphore);
  v12 = KeReadStateSemaphore(a2);
  v13 = a2;
  if ( StateSemaphore > v12 )
    v13 = Semaphore;
  KeReadStateSemaphore(v13);
  v14 = (unsigned int)SymCryptSizeofIntFromDigits();
  v34 = SymCryptIntCreate();
  SymCryptIntCreate();
  v33 = SymCryptIntCreate();
  v32 = SymCryptIntCreate();
  v15 = (unsigned int)SymCryptSizeofIntFromDigits();
  v37 = SymCryptIntCreate();
  v16 = (unsigned int)SymCryptSizeofDivisorFromDigits();
  v36 = SymCryptDivisorCreate();
  v17 = v36;
  v18 = SymCryptIntFromDivisor();
  v19 = v16 + v16 + v15 + v14 + v14 + v14 + v14 + a8;
  v20 = SymCryptDivisorCreate();
  v35 = v20;
  v21 = -4 * v14 - 2 * v16 - v15 + a9;
  SymCryptIntCopyMixedSize();
  SymCryptIntCopyMixedSize();
  SymCryptIntSetValueUint32();
  SymCryptIntSetValueUint32();
  if ( (unsigned int)SymCryptIntIsEqualUint32() || (SymCryptIntGetValueLsbits32(v18) & 1) == 0 )
    SymCryptFatal(2017739591LL);
  v22 = SymCryptIntBitsizeOfObject() - 1;
  v23 = v22 + SymCryptIntBitsizeOfObject();
  if ( v23 )
  {
    v24 = v23;
    do
    {
      SymCryptIntSubSameSize();
      SymCryptIntGetValueLsbits32(v34);
      SymCryptIntConditionalSwap();
      SymCryptIntConditionalSwap();
      SymCryptIntGetValueLsbits32(v34);
      SymCryptIntSubSameSize();
      SymCryptIntConditionalCopy();
      SymCryptIntSubSameSize();
      SymCryptIntConditionalCopy();
      SymCryptIntAddMixedSize();
      SymCryptIntConditionalCopy();
      SymCryptIntShr1();
      SymCryptIntGetValueLsbits32(v33);
      SymCryptIntAddMixedSize();
      SymCryptIntConditionalCopy();
      SymCryptIntShr1();
      --v24;
    }
    while ( v24 );
    v20 = v35;
    v17 = v36;
  }
  result = a4;
  if ( a4 )
    result = SymCryptIntCopyMixedSize();
  if ( a5 || a6 || a7 )
  {
    SymCryptIntFromDivisor();
    SymCryptIntCopyMixedSize();
    v26 = SymCryptIntFromDivisor();
    result = SymCryptIntToDivisor(v26, v17, 3, 0, v19, v21);
    if ( a5 )
    {
      SymCryptIntMulMixedSize(v38, v39, a5, v19, v21);
      result = SymCryptIntDivMod(a5, v17, a5, 0, v19, v21);
    }
    if ( a6 )
    {
      v27 = SymCryptIntFromDivisor();
      SymCryptIntDivMod(v39, v17, v27, 0, v19, v21);
      v28 = SymCryptIntFromDivisor();
      SymCryptIntToDivisor(v28, v20, 1, 0, v19, v21);
      v29 = v32;
      result = SymCryptIntDivMod(v32, v20, 0, a6, v19, v21);
    }
    else
    {
      v29 = v32;
    }
    if ( a7 )
    {
      SymCryptIntFromDivisor();
      SymCryptIntCopyMixedSize();
      v30 = SymCryptIntFromDivisor();
      SymCryptIntToDivisor(v30, v20, 1, 0, v19, v21);
      SymCryptIntMulMixedSize(v29, v38, v37, v19, v21);
      SymCryptIntSubMixedSize();
      SymCryptIntDivMod(v37, v20, v37, 0, v19, v21);
      SymCryptIntFromDivisor();
      SymCryptIntCopyMixedSize();
      v31 = SymCryptIntFromDivisor();
      SymCryptIntToDivisor(v31, v20, 1, 0, v19, v21);
      SymCryptIntDivMod(v37, v20, 0, a7, v19, v21);
      SymCryptIntFromDivisor();
      return SymCryptIntSubMixedSize();
    }
  }
  return result;
}
