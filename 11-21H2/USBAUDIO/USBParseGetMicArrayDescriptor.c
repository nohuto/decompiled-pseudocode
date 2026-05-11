/*
 * XREFs of USBParseGetMicArrayDescriptor @ 0x1C0037794
 * Callers:
 *     USBParseTerminalUnit @ 0x1C0038820 (USBParseTerminalUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBHwGetSetMemory @ 0x1C0033DB0 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBParseGetMicArrayDescriptor(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned __int16 v5; // r12
  __int64 v7; // r13
  _WORD *v8; // rdi
  _WORD *v9; // rsi
  int SetMemory; // eax
  int v11; // ebx
  __int64 Pool2; // rax
  void *v13; // r14
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  _WORD *v19; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-70h]
  __int128 v21; // [rsp+50h] [rbp-68h] BYREF
  __int128 v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+70h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(unsigned __int8 *)(a2 + 3);
  v20 = a3;
  v19 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  v23 = 0;
  v8 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  SetMemory = USBHwGetSetMemory(
                a1,
                0x85u,
                0,
                v5,
                *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL),
                0,
                18,
                (__int64)&v21);
  v11 = SetMemory;
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
    {
      v11 = -1073741275;
      goto LABEL_13;
    }
  }
  else if ( v21 == __PAIR128__(0x14D34A2D16C584B1LL, USBAUDIO_MIC_ARRAY_DESCRIPTOR) )
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned __int16)v22, 1096972357LL);
    v13 = (void *)Pool2;
    if ( Pool2 )
    {
      v11 = USBHwGetSetMemory(
              a1,
              0x85u,
              0,
              v5,
              *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL),
              0,
              (unsigned __int16)v22,
              Pool2);
      if ( v11 < 0 )
      {
        v14 = v13;
LABEL_12:
        ExFreePool(v14);
        goto LABEL_13;
      }
      v8 = v13;
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741275;
  }
  if ( v11 >= 0 )
  {
    v15 = USBHwAllocateAndBag(
            (PVOID *)&v19,
            12 * (unsigned int)(unsigned __int16)v8[17] + 18,
            256LL,
            *(void **)(a1 + 8));
    v9 = v19;
    v11 = v15;
    if ( v15 >= 0 )
    {
      *v19 = v8[9];
      v9[1] = v8[10];
      v9[2] = v8[11];
      v9[3] = v8[12];
      v9[4] = v8[13];
      v9[5] = v8[14];
      v9[6] = v8[15];
      v9[7] = v8[16];
      v9[8] = v8[17];
      if ( v8[17] )
      {
        do
        {
          v16 = v4++;
          v17 = 3 * v16;
          v9[2 * v17 + 9] = v8[6 * v16 + 18];
          v9[2 * v17 + 10] = v8[6 * v16 + 19];
          v9[2 * v17 + 11] = v8[6 * v16 + 20];
          v9[2 * v17 + 12] = v8[6 * v16 + 21];
          v9[2 * v17 + 13] = v8[6 * v16 + 22];
          v9[2 * v17 + 14] = v8[6 * v16 + 23];
        }
        while ( v4 < (unsigned __int16)v8[17] );
      }
    }
    v14 = v8;
    goto LABEL_12;
  }
LABEL_13:
  *v20 = v9;
  return (unsigned int)v11;
}
