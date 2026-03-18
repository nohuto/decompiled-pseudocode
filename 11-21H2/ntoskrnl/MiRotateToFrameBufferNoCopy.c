/*
 * XREFs of MiRotateToFrameBufferNoCopy @ 0x14065FFA0
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 * Callees:
 *     MiRotateComplete @ 0x140200A64 (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x140200AEC (MiDeleteRotateAndStopFaults.c)
 *     MiObtainRotateProtectionRanges @ 0x140200BAC (MiObtainRotateProtectionRanges.c)
 *     MiGetVadCacheAttribute @ 0x140200CF0 (MiGetVadCacheAttribute.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x14021378C (MiLegitimatePageForDriversToMap.c)
 *     MiSanitizePage @ 0x140215598 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBufferNoCopy(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r8
  unsigned __int64 *v9; // rsi
  unsigned __int64 *v10; // r12
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // [rsp+40h] [rbp-30h]
  PVOID P[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+58h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-8h]
  int VadCacheAttribute; // [rsp+C8h] [rbp+58h]

  CurrentThread = 0LL;
  v24 = 0LL;
  if ( a4 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  P[1] = P;
  v22 = a2 + (a4 << 12) - 1;
  P[0] = P;
  v6 = 0;
  VadCacheAttribute = MiGetVadCacheAttribute(a1);
  v7 = 0;
  v9 = (unsigned __int64 *)(v8 + 48);
  v10 = (unsigned __int64 *)(v8 + 48);
  if ( v11 )
  {
    do
    {
      v12 = *v10;
      if ( (unsigned int)MiIsPfn(*v10) )
      {
        result = MiLegitimatePageForDriversToMap(48 * v12 - 0x220000000000LL);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        v13 = MiSanitizePage(v12);
        v14 = MiReferenceIoPages(1, v13, 1LL, VadCacheAttribute, 0LL, 0LL);
        if ( v14 < 0 )
          goto LABEL_20;
        ++v6;
      }
      ++v7;
      ++v10;
    }
    while ( v7 < a4 );
  }
  v14 = MiObtainRotateProtectionRanges(a1, a2, v22, (__int64)P);
  if ( v14 < 0 )
  {
LABEL_20:
    while ( v6 )
    {
      v21 = *v9;
      if ( !(unsigned int)MiIsPfn(*v9) )
      {
        MiDereferenceIoPages(1, v21, 1uLL);
        --v6;
      }
      ++v9;
    }
    return (unsigned int)v14;
  }
  else
  {
    *((_QWORD *)&v24 + 1) = a1;
    CurrentThread = KeGetCurrentThread();
    MiDeleteRotateAndStopFaults(a2, v22, (unsigned __int64 *)&v24);
    while ( 1 )
    {
      v15 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v16 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      v17 = -2147483632;
      *(_QWORD *)(v16 + 8) = P;
      v18 = v15[2];
      v19 = (v15[3] - v18) >> 12;
      if ( (v15[4] & 7) != 1 )
        v17 = 16;
      MiMapLockedPagesInUserSpaceHelper(v18, (__int64)v9, 0LL, VadCacheAttribute, v19, 0LL, v17);
      ExFreePoolWithTag(v15, 0);
      v9 += v19;
    }
    MiRotateComplete((unsigned __int64 *)&v24);
    return 0LL;
  }
}
