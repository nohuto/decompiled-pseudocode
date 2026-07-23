/*
 * XREFs of RtlpHpHeapCreate @ 0x140388E98
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x1403887A0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x140388E4C (ExCreateHeap.c)
 * Callees:
 *     RtlpHpVsContextInitialize @ 0x140363278 (RtlpHpVsContextInitialize.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FA40 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpSegContextInitialize @ 0x1403891E0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x140389308 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1403895A8 (RtlpHpSegContextReserve.c)
 *     RtlpHpRegisterEnvironment @ 0x14038962C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpLfhContextInitialize @ 0x1403898E4 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpHeapDestroy @ 0x1405B6BA0 (RtlpHpHeapDestroy.c)
 *     CmSiRWLockInitialize @ 0x14080E420 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rdi
  unsigned __int32 MaximumProcessorCount; // r14d
  signed __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm0
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // r15d
  unsigned int v16; // edx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v22)(__int64, unsigned __int64, unsigned int); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v23)(__int64, int, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v24)(__int64); // [rsp+88h] [rbp+27h]

  v6 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = dword_140CF8488;
    if ( !dword_140CF8488 )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      if ( !MaximumProcessorCount )
        MaximumProcessorCount = 1;
      v8 = _InterlockedCompareExchange(&dword_140CF8488, MaximumProcessorCount, 0);
      if ( v8 )
        MaximumProcessorCount = v8;
    }
    v20 = *a4;
    v9 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v20);
    v10 = v9;
    if ( v9 )
    {
      v11 = *a4;
      *(_DWORD *)(v9 + 16) = -571548178;
      v12 = 0;
      *(_DWORD *)(v9 + 20) = a1;
      *(_OWORD *)v9 = v11;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
      {
        v12 = 16;
        if ( (*(_BYTE *)(v9 + 30) & 1) == 0 )
        {
          v13 = *(_QWORD *)(v9 + 240);
          v14 = *(_QWORD *)(v9 + 248);
          if ( v13 > v14 && v13 - v14 >= 0x100000 && v14 - v10 <= 0x100000 )
            v12 = 48;
        }
      }
      v15 = v12 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v15 = v12;
      v20 = v11;
      RtlpHpSegContextInitialize(
        v10 + 320,
        0x100000,
        v10,
        v10 + 896,
        v10 + 704,
        v10 + 128,
        v10 + 160,
        (__int64)&v20,
        v15);
      v16 = v15;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
        v16 = v15 & 0xFFFFFFDF;
      v20 = *a4;
      RtlpHpSegContextInitialize(v10 + 512, 0x1000000, v10, 0, 0LL, v10 + 128, v10 + 176, (__int64)&v20, v16);
      *(_QWORD *)(v10 + 64) = 0LL;
      *(_QWORD *)(v10 + 72) = 0LL;
      *(_QWORD *)(v10 + 80) = 0LL;
      *(_QWORD *)(v10 + 224) = 0LL;
      if ( (*(_DWORD *)(v10 + 20) & 0x20000000) != 0 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = v17 + 1;
          if ( (__int64 (*)())CLFS_LSN_NULL_EXT[v17] == PdcCreateWatchdogAroundClientCall )
            break;
          ++v17;
          if ( v18 )
          {
            v18 = 0;
            break;
          }
        }
        *(_DWORD *)(v10 + 24) = v18;
      }
      v24 = 0LL;
      *(_QWORD *)&v21 = RtlpHpSegVsAllocate;
      v23 = RtlpHpSegLfhVsDecommit;
      *((_QWORD *)&v21 + 1) = RtlpHpSegLfhVsFree;
      v22 = RtlpHpSegLfhVsCommit;
      RtlpHpVsContextInitialize(v10 + 704, v10 + 320, &v21, *(_DWORD *)a4 & 1, 0, &dword_140C749DC);
      v23 = RtlpHpSegLfhVsDecommit;
      *(_QWORD *)&v21 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v21 + 1) = RtlpHpSegLfhVsFree;
      v22 = RtlpHpSegLfhVsCommit;
      v24 = RtlpHpSegLfhExtendContext;
      RtlpHpLfhContextInitialize(
        v10 + 896,
        v10 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v21,
        v10 + 128,
        (__int64)&unk_140C749D8);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v10 + 112));
      if ( (int)RtlpHpSegContextReserve(v10 + 320, 0LL, 0LL) >= 0 )
        return v10;
      else
        RtlpHpHeapDestroy(v10);
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0LL);
    }
  }
  return v6;
}
