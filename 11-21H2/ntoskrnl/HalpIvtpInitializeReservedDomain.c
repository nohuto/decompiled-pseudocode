/*
 * XREFs of HalpIvtpInitializeReservedDomain @ 0x140A650A8
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A64544 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     IvtAllocateTranslationStructures @ 0x14052DEFC (IvtAllocateTranslationStructures.c)
 *     IvtUpdateTranslationStructures @ 0x140530270 (IvtUpdateTranslationStructures.c)
 */

__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _DWORD *v7; // r8
  unsigned int v8; // ebx
  __int64 result; // rax
  _DWORD *v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+38h] [rbp-A0h]
  _QWORD v15[16]; // [rsp+50h] [rbp-88h] BYREF
  __int64 *v16; // [rsp+E8h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v16 = 0LL;
  v7 = *(_DWORD **)v4;
  if ( **(_DWORD **)v4 == 1 )
  {
    if ( *((unsigned __int16 *)v7 + 4) == *(_DWORD *)(a1 + 252) )
    {
      result = IvtAllocateTranslationStructures(a1, *((unsigned __int16 *)v7 + 6), (__int64)v7, a4, &v16);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      memset(v15, 0, 0x78uLL);
      LODWORD(v15[6]) = *(_DWORD *)a2;
      v15[5] = *(_QWORD *)(v4 + 16);
      v10 = *(_DWORD **)v4;
      v15[0] = 0x200000001LL;
      IvtUpdateTranslationStructures(a1, *((unsigned __int16 *)v10 + 6), v11, v16, v12, v13, (__int64)v15, v14, 1, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
