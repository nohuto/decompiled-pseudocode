/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1409CE134
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1409CDCC8 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1409CDFA4 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE294 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, __int64 a3)
{
  _WORD *v3; // rsi
  GUID *Pool2; // rdi
  int PolicyDefaultValue; // ebx
  unsigned int v8; // edx
  GUID *v9; // r12
  int ElementDataWithFlags; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v3 = (_WORD *)(qword_140D04980 + *(unsigned int *)(a1 + 8));
  v18 = 0LL;
  Pool2 = 0LL;
  v15 = 0LL;
  v17 = 0;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    v16 = 8;
    v9 = (GUID *)&v18;
    ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)a2, v8, a3, (GUID *)&v18, &v16);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags == -1073741789 || ElementDataWithFlags == -2147483643 )
    {
      Pool2 = (GUID *)ExAllocatePool2(256LL, v16, 1649632595LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v9 = Pool2;
      PolicyDefaultValue = BcdGetElementDataWithFlags((__int64)a2, *(_DWORD *)(a1 + 4), v12, Pool2, &v16);
      if ( PolicyDefaultValue < 0 )
        goto LABEL_15;
    }
    if ( PolicyDefaultValue < 0
      || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v9, v16), PolicyDefaultValue < 0) )
    {
      PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v15, (int *)&v17);
      if ( PolicyDefaultValue >= 0 )
        PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, v15, v17);
    }
    if ( Pool2 )
LABEL_15:
      ExFreePoolWithTag(Pool2, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
