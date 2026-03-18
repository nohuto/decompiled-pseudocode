/*
 * XREFs of VidSchCreateProcess @ 0x1C0082310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumGlobalAdapterCount; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rcx

  v1 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, 2832LL, 845244758LL);
  v4 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  *(_DWORD *)Pool2 = 845244758;
  *(_QWORD *)(Pool2 + 2664) = 0LL;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(Pool2 + 24) = (*(_DWORD *)(a1 + 424) & 2) != 0 ? 5 : 2;
  TdrHistoryInit((struct _TDR_HISTORY *)(Pool2 + 40));
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v7 = ExAllocatePool2(256LL, 4 * ((unsigned __int64)(MaximumGlobalAdapterCount + 31) >> 5), 845244758LL);
  *(_QWORD *)(v4 + 2624) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(3LL);
LABEL_12:
    ExFreePoolWithTag((PVOID)v4, 0);
    return 0LL;
  }
  v8 = ExAllocatePool2(64LL, 8LL * MaximumGlobalAdapterCount, 845244758LL);
  *(_QWORD *)(v4 + 32) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    ExFreePoolWithTag(*(PVOID *)(v4 + 2624), 0);
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v4 + 2640) = *(_QWORD *)(v9 + 80);
  *(_QWORD *)(v4 + 2656) = *(_QWORD *)(a1 + 56);
  if ( v9 )
    v1 = *(_QWORD *)(v9 + 88);
  v10 = *(_DWORD *)(a1 + 424);
  *(_QWORD *)(v4 + 2648) = v1;
  if ( (v10 & 2) != 0 )
    g_pVidSchSystemProcess = v4;
  return v4;
}
