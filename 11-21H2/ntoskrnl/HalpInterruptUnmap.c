/*
 * XREFs of HalpInterruptUnmap @ 0x140908918
 * Callers:
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
 *     HaliRemoveInterruptRemapping @ 0x1409088F0 (HaliRemoveInterruptRemapping.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpInterruptIsRemappingRequired @ 0x140252460 (HalpInterruptIsRemappingRequired.c)
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     xHalUnmaskInterrupt @ 0x140372920 (xHalUnmaskInterrupt.c)
 *     HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x140509178 (HalpInterruptIsHvLineBasedIntRemappingSupported.c)
 *     HalpSetIrtEntry @ 0x14051DB28 (HalpSetIrtEntry.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 *     HalpIrtFreeIndex @ 0x140909FA0 (HalpIrtFreeIndex.c)
 *     HalpHvUnmapDeviceInterrupt @ 0x140A61970 (HalpHvUnmapDeviceInterrupt.c)
 *     HalpHvUnmapDeviceMsiRange @ 0x140A619DC (HalpHvUnmapDeviceMsiRange.c)
 */

__int64 __fastcall HalpInterruptUnmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // rdi
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // ebx
  _DWORD *v18; // rsi
  __int64 v19; // r14
  unsigned int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rcx
  ULONG_PTR *v23; // r14
  _QWORD *Lines; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-50h]
  __int128 v29; // [rsp+30h] [rbp-40h] BYREF
  __int128 v30; // [rsp+40h] [rbp-30h]
  __int128 v31; // [rsp+50h] [rbp-20h]
  __int64 v32; // [rsp+60h] [rbp-10h]

  v6 = a5;
  v32 = 0LL;
  v29 = 0LL;
  v7 = a5 + 1;
  v8 = a5[3];
  *((_QWORD *)&v29 + 1) = a5[4];
  v9 = a5[1];
  v30 = 0LL;
  *(_QWORD *)&v30 = 0x1FFFFFFFFLL;
  LODWORD(v32) = v9;
  v10 = *a5;
  LODWORD(v29) = v8;
  v31 = 0LL;
  if ( v10 )
  {
    if ( v10 != 3 )
    {
      v11 = 19;
      v28 = 3239;
      v12 = 2;
      return HalpInterruptSetProblemEx(
               0LL,
               v11,
               v12,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v28);
    }
    if ( HalpInterruptIsHvLineBasedIntRemappingSupported() )
      HalpHvUnmapDeviceMsiRange(v14, v13, v15, v16, (__int64)v6);
    if ( HalpInterruptIsRemappingRequired() )
    {
      v17 = a6;
      if ( a6 )
      {
        v18 = v6 + 10;
        v19 = a6;
        do
        {
          LODWORD(v32) = *v7;
          HalpSetIrtEntry(1, v18, (__int64)&v29);
          v18 += 22;
          v7 += 22;
          --v19;
        }
        while ( v19 );
      }
      v20 = v6[10];
      if ( (v20 & 0x40000000) == 0 )
        HalpIrtFreeIndex(v20 & 0x3FFFFFFF, v17, *v6);
    }
    return xHalUnmaskInterrupt();
  }
  else
  {
    v22 = a5[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v22, &a5) < 0 )
    {
      v12 = 0;
      v28 = 3153;
      v11 = 18;
      return HalpInterruptSetProblemEx(
               0LL,
               v11,
               v12,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v28);
    }
    if ( v8 - 3 <= 1 )
    {
      DWORD2(v29) = 0;
      BYTE4(v29) = 1;
    }
    v23 = HalpInterruptLookupController((int)a5);
    if ( !v23 )
    {
      v28 = 3185;
      v11 = 17;
      v12 = 1;
      return HalpInterruptSetProblemEx(
               0LL,
               v11,
               v12,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v28);
    }
    Lines = HalpInterruptFindLines((unsigned int *)&a5);
    v26 = Lines;
    if ( Lines )
    {
      if ( qword_140C4C4A8 )
      {
        *(_DWORD *)(Lines[5] + 12LL) |= 0x10u;
        HalpHvUnmapDeviceInterrupt(*((unsigned int *)v23 + 60), v25, Lines[5]);
        *(_DWORD *)(v26[5] + 12LL) &= ~0x10u;
      }
      if ( HalpInterruptIsRemappingRequired() )
      {
        if ( (unsigned int)HalpInterruptModel() == 1 )
        {
          LODWORD(v32) = *v7;
          HalpSetIrtEntry(0, v6 + 10, (__int64)&v29);
          v27 = v6[10];
          if ( (v27 & 0x40000000) == 0 )
            HalpIrtFreeIndex(v27 & 0x3FFFFFFF, 1LL, *v6);
        }
      }
      result = v26[6];
      *(_BYTE *)(result + 12) = 0;
    }
    else
    {
      return HalpInterruptSetProblemEx(
               (__int64)v23,
               18,
               0,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               0xC79u);
    }
  }
  return result;
}
