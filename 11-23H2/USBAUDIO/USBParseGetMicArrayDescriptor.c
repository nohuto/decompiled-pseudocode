/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C0035248
 * Callers:
 *     USBParseTerminalUnit @ 0x1C003E8A0 (USBParseTerminalUnit.c)
 * Callees:
 *     USBHwGetMicArrayDescriptor @ 0x1C0032388 (USBHwGetMicArrayDescriptor.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edx
  unsigned int v4; // esi
  _WORD *v6; // rbx
  int MicArrayDescriptor; // ebp
  _WORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  _WORD *v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 3);
  v4 = 0;
  P = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  MicArrayDescriptor = USBHwGetMicArrayDescriptor(a1, v3, (unsigned __int16 **)&P);
  if ( MicArrayDescriptor >= 0 )
  {
    v9 = P;
    v10 = USBHwAllocateAndBag(&v15, 12 * (unsigned int)*((unsigned __int16 *)P + 17) + 18, 256LL, *(_QWORD *)(a1 + 8));
    v6 = v15;
    MicArrayDescriptor = v10;
    if ( v10 >= 0 )
    {
      *v15 = v9[9];
      v6[1] = v9[10];
      v6[2] = v9[11];
      v6[3] = v9[12];
      v6[4] = v9[13];
      v6[5] = v9[14];
      v6[6] = v9[15];
      v6[7] = v9[16];
      v6[8] = v9[17];
      if ( v9[17] )
      {
        do
        {
          v11 = v4++;
          v12 = 3 * v11;
          v6[2 * v12 + 9] = v9[6 * v11 + 18];
          v6[2 * v12 + 10] = v9[6 * v11 + 19];
          v6[2 * v12 + 11] = v9[6 * v11 + 20];
          v6[2 * v12 + 12] = v9[6 * v11 + 21];
          v6[2 * v12 + 13] = v9[6 * v11 + 22];
          v6[2 * v12 + 14] = v9[6 * v11 + 23];
        }
        while ( v4 < (unsigned __int16)v9[17] );
      }
    }
    ExFreePool(v9);
  }
  *a3 = v6;
  return (unsigned int)MicArrayDescriptor;
}
