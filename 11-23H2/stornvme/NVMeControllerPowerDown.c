/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000E0D8
 * Callers:
 *     NVMeHwStartIo @ 0x1C00022D0 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C000AC64 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00240F0 (NVMeSetHostMemoryBuffer.c)
 */

char __fastcall NVMeControllerPowerDown(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned int v9; // r10d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  int v12; // eax
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 1840);
  v3 = *(_QWORD *)(a1 + 4000);
  v4 = 0;
  if ( v3 )
  {
    LODWORD(Size) = *(_DWORD *)(v3 + 4);
    NVMeSetHostMemoryBuffer(a1, (void *)(v3 + 8), Size);
  }
  if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 )
    *(_BYTE *)(a1 + 4008) |= 4u;
  v5 = *(_DWORD *)(v1 + 88);
  if ( v5 )
  {
    v6 = 10000 * (v5 / 0x2710uLL);
    v7 = v6 + 10000;
    if ( v5 == v6 )
      v7 = v5;
    v8 = v7 / 0x2710;
  }
  else
  {
    LODWORD(v8) = 500;
  }
  v9 = *(unsigned __int8 *)(a1 + 55);
  if ( (_BYTE)v9 )
  {
    v10 = 100 * ((unsigned int)v8 / 0x64uLL);
    v11 = v10 + 100;
    if ( (unsigned int)v8 == v10 )
      v11 = (unsigned int)v8;
    v12 = *(unsigned __int8 *)(a1 + 55);
    v13 = v11 / 0x64;
    if ( (unsigned int)v13 > v9 )
      v12 = v13;
    LODWORD(v8) = 100 * v12;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFA | 4;
  IoQueuesDeletion(a1);
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = v14;
  _InterlockedOr(v16, 0);
  if ( (_DWORD)v8 )
  {
    do
    {
      LOBYTE(v14) = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL) & 0xC;
      if ( (_BYTE)v14 == 8 )
        break;
      LOBYTE(v14) = StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v4;
    }
    while ( v4 < (unsigned int)v8 );
  }
  return v14;
}
