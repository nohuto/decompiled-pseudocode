/*
 * XREFs of MiInitializeEnclave @ 0x140A3E148
 * Callers:
 *     NtInitializeEnclave @ 0x140A3F240 (NtInitializeEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     KeInitializeEnclave @ 0x140974830 (KeInitializeEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140A3E250 (MiInitializeVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD520 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiInitializeEnclave(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rdi
  int v12; // ebx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  v8 = MiObtainReferencedVadEx(a2, 0, (int *)v15);
  v10 = v8;
  if ( !v8 )
    return v15[0];
  if ( (v8[6] & 0x6200000) == 0x4200000 )
  {
    v13 = *((_DWORD *)v8 + 16);
    if ( (v13 & 2) != 0 )
    {
      v12 = -1073740528;
    }
    else if ( (v13 & 1) != 0 )
    {
      if ( a4 == 4096 )
      {
        v12 = KeInitializeEnclave(v10[10] << 25 >> 16, a3, v9, a3 + 2048, v14, a5);
        if ( v12 >= 0 )
        {
          MiReturnReservedEnclavePages(v10, -1LL);
          *((_DWORD *)v10 + 16) |= 2u;
          v12 = 0;
        }
      }
      else
      {
        v12 = -1073741820;
      }
    }
    else
    {
      v12 = MiInitializeVsmEnclave(a1, v10, a3, a4);
    }
  }
  else
  {
    v12 = -1073741800;
  }
  MiUnlockAndDereferenceVad((char *)v10);
  return (unsigned int)v12;
}
