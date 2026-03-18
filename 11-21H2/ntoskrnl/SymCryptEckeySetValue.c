/*
 * XREFs of SymCryptEckeySetValue @ 0x140400318
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A374B0 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1404000A8 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveSizeofFieldElement @ 0x1404000F0 (SymCryptEcurveSizeofFieldElement.c)
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1404000FC (SymCryptFdefIntGetValueLsbits32.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140400210 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptDivisorFromModulus @ 0x140400AE4 (SymCryptDivisorFromModulus.c)
 *     SymCryptIntCopy @ 0x140400B8C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntDivMod @ 0x140400BD4 (SymCryptIntDivMod.c)
 *     SymCryptIntDivPow2 @ 0x140400C00 (SymCryptIntDivPow2.c)
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetBits @ 0x140400C60 (SymCryptIntGetBits.c)
 *     SymCryptIntIsEqualUint32 @ 0x140400C90 (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntIsLessThan @ 0x140400CA8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140400D10 (SymCryptIntSetValue.c)
 *     SymCryptIntToModElement @ 0x140400DE4 (SymCryptIntToModElement.c)
 *     SymCryptModDivPow2 @ 0x140400EF0 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModElementToInt @ 0x1404010DC (SymCryptModElementToInt.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x1404068E0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointIsEqual @ 0x14040A608 (SymCryptEcpointIsEqual.c)
 *     SymCryptEcpointScalarMul @ 0x14040A750 (SymCryptEcpointScalarMul.c)
 *     SymCryptCallbackAlloc @ 0x140656B70 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140656BA8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeySetValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v12; // rsi
  int v13; // r13d
  unsigned int v14; // ebx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // [rsp+20h] [rbp-98h]
  unsigned int v31; // [rsp+50h] [rbp-68h]
  unsigned int v32; // [rsp+50h] [rbp-68h]
  unsigned int v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  int v36; // [rsp+68h] [rbp-50h]
  int v40; // [rsp+D8h] [rbp+20h]
  int v41; // [rsp+F8h] [rbp+40h]

  v40 = a4;
  v9 = a4;
  v10 = a3;
  v12 = *(_QWORD *)(a8 + 8);
  v31 = *(_DWORD *)(v12 + 36);
  v33 = SymCryptEcurveDigitsofScalarMultiplier(v12);
  if ( (a7 & 0xFFFFFF8F) != 0 )
    return 209715726;
  v13 = a7 & 0x30;
  if ( a2 )
  {
    if ( a2 != (unsigned int)SymCryptFdefIntGetValueLsbits32(*(_QWORD *)(a8 + 8)) )
      return 209715726;
    if ( !v9 )
    {
LABEL_9:
      v16 = *(unsigned int *)(v12 + 60);
      v17 = (unsigned int)v16;
      v35 = (unsigned int)v16;
      v19 = SymCryptCallbackAlloc(v16);
      if ( !v19 )
        return 209715727;
      if ( a1 )
      {
        v20 = (unsigned int)SymCryptSizeofIntFromDigits(v33, v18);
        v21 = SymCryptIntCreate(v19, v20, v33);
        v34 = v31 + v20 + v19;
        v36 = SymCryptModElementCreate(v20 + v19, v31, *(_QWORD *)(v12 + 624));
        v32 = v16 - v31 - v20;
        v14 = SymCryptIntSetValue(a1, a2, a5, v21);
        if ( v14 )
          goto LABEL_46;
        if ( v13 != 16 )
        {
          if ( ((v13 - 32) & 0xFFFFFFEF) == 0 && *(_DWORD *)(v12 + 68) == 1 )
          {
            v22 = SymCryptIntFromModulus(*(_QWORD *)(v12 + 624));
            if ( !(unsigned int)SymCryptIntIsLessThan(v21, v22) )
              goto LABEL_17;
          }
          if ( *(_DWORD *)(v12 + 64) && *(_DWORD *)(v12 + 68) == 3 && (unsigned int)SymCryptIntGetBits(v21, 0LL)
            || *(_DWORD *)(v12 + 72)
            && (unsigned int)SymCryptIntGetBits(v21, *(unsigned int *)(v12 + 76)) != *(_DWORD *)(v12 + 80) )
          {
            goto LABEL_17;
          }
        }
        v23 = *(_DWORD *)(v12 + 64);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v12 + 68);
          if ( v24 == 3 )
          {
            SymCryptIntDivPow2(v21, v23, v21);
            v24 = *(_DWORD *)(v12 + 68);
          }
          v25 = v34;
          if ( v24 == 1 )
          {
            SymCryptIntToModElement(v21, *(_QWORD *)(v12 + 624), v36, v34, v32);
            SymCryptModDivPow2(*(_QWORD *)(v12 + 624), v36, *(_DWORD *)(v12 + 64), v36, v34, v32);
            SymCryptModElementToInt(*(_QWORD *)(v12 + 624), v36, v21, v34, v32);
          }
        }
        else
        {
          v25 = v34;
        }
        v26 = SymCryptDivisorFromModulus(*(_QWORD *)(v12 + 624));
        SymCryptIntDivMod(v21, v26, 0, v21, v25, v32);
        if ( v13 != 16 )
        {
          if ( (unsigned int)SymCryptIntIsEqualUint32(v21, 0LL) )
          {
LABEL_17:
            v14 = 209715726;
            goto LABEL_46;
          }
        }
        SymCryptIntCopy(v21, *(_QWORD *)(a8 + 24));
        LODWORD(v9) = v40;
        v17 = v16;
        v10 = a3;
        *(_BYTE *)a8 = 1;
      }
      if ( v10 )
      {
        LODWORD(v30) = a6;
        v14 = SymCryptEcpointSetValue(v12, v10, v9, a5, v30, *(_QWORD *)(a8 + 16), 1, v19, v17);
        if ( v14 )
          goto LABEL_46;
        if ( v13 != 16 )
        {
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, a7, v19, v16);
          if ( v14 )
            goto LABEL_46;
        }
        if ( (a7 & 0x40) == 0 || !a1 )
          goto LABEL_46;
      }
      v27 = v19;
      v28 = *(_QWORD *)(a8 + 16);
      v41 = v28;
      if ( a3 )
      {
        v29 = (unsigned int)SymCryptSizeofEcpointFromCurve(v12);
        v28 = SymCryptEcpointCreate(v19, v29, v12);
        v41 = v28;
        v27 = v29 + v19;
        LODWORD(v16) = v16 - v29;
      }
      v14 = SymCryptEcpointScalarMul(v12, *(_QWORD *)(a8 + 24), 0, 32, v28, v27, (unsigned int)v16);
      if ( v14 )
        goto LABEL_46;
      if ( !a3 )
      {
        if ( v13 != 16 )
          v14 = SymCryptEckeyPerformPublicKeyValidation(a8, a7, v19, v35);
        goto LABEL_46;
      }
      if ( !(unsigned int)SymCryptEcpointIsEqual(v12, v41, *(_QWORD *)(a8 + 16), 0, v27, (unsigned int)v16) )
        goto LABEL_17;
LABEL_46:
      SymCryptWipe(v19, v35);
      SymCryptCallbackFree(v19);
      return v14;
    }
LABEL_8:
    if ( v9 != *((_DWORD *)SymCryptEcpointFormatNumberofElements + a6)
             * (unsigned int)SymCryptEcurveSizeofFieldElement(*(_QWORD *)(a8 + 8)) )
      return 209715726;
    goto LABEL_9;
  }
  if ( v9 )
    goto LABEL_8;
  return 209715726;
}
