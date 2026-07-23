/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1409D0FF4
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1409D0B64 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1409D0E64 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409D1174 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, _BYTE *a3)
{
  _WORD *v3; // rsi
  __int64 *Pool2; // rdi
  int PolicyDefaultValue; // ebx
  char v9; // al
  int v10; // eax
  ULONG v11; // edx
  __int64 *p_Buffer; // r13
  NTSTATUS ElementDataWithFlags; // eax
  __int64 v14; // rdx
  BCD_FLAGS v15; // r8d
  BCD_FLAGS v16; // r8d
  PVOID v18[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 Buffer; // [rsp+98h] [rbp+58h] BYREF

  v3 = (_WORD *)(qword_140D1BEC0 + *(unsigned int *)(a1 + 8));
  Buffer = 0LL;
  v18[0] = 0LL;
  Pool2 = 0LL;
  v20 = 0;
  PolicyDefaultValue = 0;
  v9 = *(_BYTE *)v3 & 0x1F;
  *a3 = 0;
  if ( v9 == 8 )
  {
    if ( !v3[1] )
    {
      v10 = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      PolicyDefaultValue = v10;
      if ( v10 == -1073741275 )
      {
        return 0;
      }
      else if ( v10 >= 0 )
      {
        *a3 = 1;
      }
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 4);
    BufferSize = 8;
    p_Buffer = &Buffer;
    ElementDataWithFlags = BcdGetElementDataWithFlags(a2, v11, (BCD_FLAGS)a3, &Buffer, &BufferSize);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags == -1073741789 || ElementDataWithFlags == -2147483643 )
    {
      Pool2 = (__int64 *)ExAllocatePool2(256LL, BufferSize, 1649632595LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      p_Buffer = Pool2;
      PolicyDefaultValue = BcdGetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v15, Pool2, &BufferSize);
      if ( PolicyDefaultValue < 0 )
        goto LABEL_18;
    }
    if ( PolicyDefaultValue < 0
      || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, p_Buffer, BufferSize),
          PolicyDefaultValue < 0) )
    {
      PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v14, v18, (int *)&v20);
      if ( PolicyDefaultValue >= 0 )
      {
        PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v16, v18[0], v20);
        if ( PolicyDefaultValue >= 0 )
          *a3 = 1;
      }
    }
    if ( Pool2 )
LABEL_18:
      ExFreePoolWithTag(Pool2, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
