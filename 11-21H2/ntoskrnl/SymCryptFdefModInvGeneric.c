/*
 * XREFs of SymCryptFdefModInvGeneric @ 0x14040BDF0
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x14040C1C0 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModInvMontgomery256 @ 0x14040C270 (SymCryptFdefModInvMontgomery256.c)
 *     SymCryptFdef369ModInvMontgomery @ 0x1404110E0 (SymCryptFdef369ModInvMontgomery.c)
 * Callees:
 *     SymCryptIntCopy @ 0x140400B8C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntDivPow2 @ 0x140400C00 (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140400C78 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntNeg @ 0x140400CF8 (SymCryptIntNeg.c)
 *     SymCryptIntSubSameSize @ 0x140400D88 (SymCryptIntSubSameSize.c)
 *     SymCryptModDivPow2 @ 0x140400EF0 (SymCryptModDivPow2.c)
 *     SymCryptModElementCopy @ 0x140400F34 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x140401368 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x14040BCF0 (SymCryptFdefModElementSetValueUint32Generic.c)
 *     SymCryptFdefModElementToIntGeneric @ 0x14040BD74 (SymCryptFdefModElementToIntGeneric.c)
 *     SymCryptFdefModMulGeneric @ 0x14040C320 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x14040C7CC (SymCryptFdefModSetRandomGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x14040CB70 (SymCryptFdefModSubGeneric.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptFdefModInvGeneric(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v8; // rdi
  unsigned int *v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int8 ValueLsbits32; // di
  BOOL v17; // edi
  int v18; // ebx
  __int64 v19; // rbx
  unsigned int *v20; // rdi
  __int64 v21; // rax
  unsigned int *v22; // rax
  void *v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned int *v26; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+B8h] [rbp+20h]
  __int64 v31; // [rsp+C0h] [rbp+28h]
  int v32; // [rsp+C0h] [rbp+28h]

  v6 = 0;
  if ( (*(_BYTE *)(a1 + 12) & 9) != 9 )
    SymCryptFatal(1970172784LL);
  v8 = (unsigned int)SymCryptSizeofModElementFromModulus(a1);
  v25 = SymCryptModElementCreate();
  v24 = (void *)SymCryptModElementCreate();
  v9 = (unsigned int *)SymCryptModElementCreate();
  v10 = a6 - (unsigned int)(4 * v8);
  v26 = (unsigned int *)SymCryptModElementCreate();
  v11 = v8 + v8 + v8 + v8 + a5;
  v12 = (unsigned int)SymCryptSizeofIntFromDigits();
  v13 = SymCryptIntCreate();
  v31 = SymCryptIntCreate();
  SymCryptIntCreate();
  v14 = v10 - (unsigned int)(3 * v12);
  v15 = v12 + v12 + v12 + v11;
  v30 = a4 & 1;
  if ( !v30 )
    SymCryptFdefModSetRandomGeneric(a1, v25, 6, v15, v14);
  if ( a2 != v24 )
    memmove(v24, a2, *(unsigned int *)(a1 + 16));
  SymCryptFdefModElementToIntGeneric(a1, v24, v13);
  SymCryptIntFromModulus();
  SymCryptIntCopy();
  ValueLsbits32 = SymCryptIntGetValueLsbits32(v31);
  v17 = (((unsigned __int8)SymCryptIntGetValueLsbits32(v13) | ValueLsbits32) & 1) == 0;
  v18 = v17 | SymCryptIntIsEqualUint32();
  if ( v18 | (unsigned int)SymCryptIntIsEqualUint32() )
  {
    return 209715726;
  }
  else
  {
    v19 = v31;
    if ( (unsigned int)SymCryptIntIsEqualUint32() )
    {
      SymCryptModElementCopy();
    }
    else
    {
      SymCryptFdefModElementSetValueUint32Generic(1u, (_DWORD *)a1, v9);
      v20 = v26;
      SymCryptFdefModElementSetValueUint32Generic(0, (_DWORD *)a1, v26);
      while ( 1 )
      {
        while ( (SymCryptIntGetValueLsbits32(v13) & 1) == 0 )
        {
          SymCryptIntDivPow2();
          SymCryptModDivPow2(a1, (__int64)v9);
        }
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          break;
        v32 = SymCryptIntSubSameSize();
        if ( (unsigned int)SymCryptIntIsEqualUint32() )
          return 209715726;
        if ( v32 )
        {
          SymCryptIntNeg();
          LODWORD(v22) = (_DWORD)v9;
        }
        else
        {
          SymCryptIntCopy();
          v21 = v19;
          v19 = v13;
          v13 = v21;
          v22 = v20;
          v20 = v9;
          v9 = v22;
        }
        SymCryptFdefModSubGeneric(a1, (_DWORD)v22, (_DWORD)v20, (_DWORD)v22, v15, v14);
      }
      SymCryptFdefModMulGeneric(a1, v9, v24, v20, v15, v14);
      if ( v30 )
      {
        if ( v9 != a3 )
          memmove(a3, v9, *(unsigned int *)(a1 + 16));
      }
      else
      {
        SymCryptFdefModMulGeneric(a1, v9, v25, a3, v15, v14);
      }
    }
  }
  return v6;
}
