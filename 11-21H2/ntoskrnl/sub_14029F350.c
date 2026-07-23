/*
 * XREFs of sub_14029F350 @ 0x14029F350
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     sub_14023642C @ 0x14023642C (sub_14023642C.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14029EFF0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExfAcquirePushLockShared @ 0x14029F330 (ExfAcquirePushLockShared.c)
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 *     sub_140609D90 @ 0x140609D90 (sub_140609D90.c)
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 *     sub_1406E2814 @ 0x1406E2814 (sub_1406E2814.c)
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_14079296C @ 0x14079296C (sub_14079296C.c)
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_1407944BC @ 0x1407944BC (sub_1407944BC.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 *     sub_1407E4720 @ 0x1407E4720 (sub_1407E4720.c)
 *     sub_1407EEEB8 @ 0x1407EEEB8 (sub_1407EEEB8.c)
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     sub_1408536D4 @ 0x1408536D4 (sub_1408536D4.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140A6D3D0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 *     sub_14029F640 @ 0x14029F640 (sub_14029F640.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     memset @ 0x140435E00 (memset.c)
 */

signed __int64 __fastcall sub_14029F350(signed __int64 *a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // r15d
  signed __int64 v9; // rdi
  signed __int64 v10; // rcx
  signed __int64 result; // rax
  bool v12; // cl
  char *v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // edx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  memset(Object, 0, sizeof(Object));
  v23 = 0;
  v8 = a2 & 4;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( (v9 & 3) != 0 && ((v9 & 1) != 0 || v8) && ((v9 & 3) != 1 || (v9 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a3 )
      sub_14029F580(a3);
    v12 = 0;
    Object[7] = a3;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( (v9 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = (char *)((unsigned __int64)Object | v9 & 9 | 6);
      v12 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v13 = (char *)Object + 3;
    }
    v15 = _InterlockedCompareExchange64(a1, (signed __int64)v13, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_15;
    if ( v12 )
      sub_14029F640(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v18 = __rdtsc();
        v19 = v18 + (unsigned int)dword_140C5B130;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v20 = v18;
          v21 = __rdtsc();
          v18 = v21;
          if ( v21 <= v20 || v21 >= v19 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != dword_140C5B130 / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_16:
    if ( a3 )
      a3 = sub_140347C10(a4, a3, 0LL);
  }
  v10 = (v9 | 1) + 16;
  if ( (v9 & 2) != 0 )
    v10 = v9 | 1;
  result = _InterlockedCompareExchange64(a1, v10, v9);
  if ( v9 != result )
  {
    if ( a3 )
      sub_14029F580(a3);
LABEL_15:
    sub_14029F5C0(&v23);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_16;
  }
  return result;
}
