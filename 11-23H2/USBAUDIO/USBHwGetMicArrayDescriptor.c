/*
 * XREFs of USBHwGetMicArrayDescriptor @ 0x1C0032388
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x1C0035248 (USBParseGetMicArrayDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     USBHwGetSetMemory @ 0x1C00327F0 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBHwGetMicArrayDescriptor(__int64 a1, int a2, unsigned __int16 **a3)
{
  int v3; // ebx
  unsigned __int16 v5; // bp
  int v6; // r9d
  __int64 v7; // r14
  int SetMemory; // eax
  __int64 Pool2; // rax
  int v11; // edx
  unsigned __int16 *v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // rdx
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+60h] [rbp-38h]

  v3 = a1;
  v5 = a2;
  v6 = (unsigned __int16)a2;
  LOBYTE(a2) = -123;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v17 = 0;
  *a3 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  SetMemory = USBHwGetSetMemory(a1, a2, 0, v6, *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL), 0, 18, (__int64)&v15);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      return (unsigned int)-1073741275;
    return (unsigned int)SetMemory;
  }
  else if ( v15 == __PAIR128__(0x14D34A2D16C584B1LL, USBAUDIO_MIC_ARRAY_DESCRIPTOR) )
  {
    if ( (unsigned __int16)v16 < 0x24u )
      return 3221225628LL;
    Pool2 = ExAllocatePool2(64LL, (unsigned __int16)v16, 1096972357LL);
    v12 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      LOBYTE(v11) = -123;
      v13 = USBHwGetSetMemory(
              v3,
              v11,
              0,
              v5,
              *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL),
              0,
              (unsigned __int16)v16,
              Pool2);
      if ( v13 >= 0 )
      {
        v14 = v12[8];
        if ( (unsigned __int16)v14 > (unsigned __int16)v16
          || (unsigned int)v14 < 0x24
          || v14 < 12 * ((unsigned __int64)v12[17] + 3) )
        {
          ExFreePool(v12);
          return 3221225628LL;
        }
        *a3 = v12;
      }
      else
      {
        ExFreePool(v12);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v13;
}
