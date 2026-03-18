/*
 * XREFs of SymCryptRsaCoreEnc @ 0x1404019F4
 * Callers:
 *     SymCryptRsaPkcs1Verify @ 0x140401C90 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SymCryptIntBitsizeOfValue @ 0x140400B44 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntSetValueUint64 @ 0x140400D40 (SymCryptIntSetValueUint64.c)
 *     SymCryptIntWipe @ 0x140400E9C (SymCryptIntWipe.c)
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModElementGetValue @ 0x140400F64 (SymCryptModElementGetValue.c)
 *     SymCryptModElementSetValue @ 0x140400FE0 (SymCryptModElementSetValue.c)
 *     SymCryptModExp @ 0x140401154 (SymCryptModExp.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140401368 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140401BCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptRsaCoreEnc(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int Value; // edi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  void *v16; // r12
  __int64 v17; // rbx
  int v18; // eax

  Value = SymCryptRsaCoreVerifyInput(a1, a2, a3, a4, a7, a8);
  if ( !Value )
  {
    v13 = (unsigned int)SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 112));
    v14 = a9 - v13;
    v15 = v13 + a8;
    v16 = (void *)SymCryptModElementCreate();
    Value = SymCryptModElementSetValue(a2, a3, a4, *(_DWORD **)(a1 + 112), v16, v13 + a8, a9 - v13);
    if ( !Value )
    {
      v17 = SymCryptIntCreate();
      if ( !v17 )
        SymCryptFatal(1634955892LL);
      SymCryptIntSetValueUint64();
      v18 = SymCryptIntBitsizeOfValue();
      SymCryptModExp(*(_QWORD *)(a1 + 112), (int)v16, v17, v18, 1, (__int64)v16, v15, v14);
      Value = SymCryptModElementGetValue(*(_QWORD *)(a1 + 112), (int)v16, a6, a7, a4, v15, v14);
      SymCryptIntWipe(v17);
    }
  }
  return Value;
}
