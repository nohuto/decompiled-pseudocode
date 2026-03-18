/*
 * XREFs of ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C01F5C4C
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmInitializeSpinLock@$01@@YAXPEAU?$SYSMM_SPINLOCK@$01@@@Z @ 0x1C001FB44 (--$SmmInitializeSpinLock@$01@@YAXPEAU-$SYSMM_SPINLOCK@$01@@@Z.c)
 *     ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x1C001FB54 (--$SmmInitializePushLock@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 */

void __fastcall SmmInitializeIommu(struct SYSMM_IOMMU *a1, const struct SYSMM_ADAPTER_CREATE_PARAMS *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  PMDL Mdl; // rax

  SmmInitializeSpinLock<2>((_DWORD *)a1 + 2);
  SmmInitializePushLock<1>(a1);
  v4 = *(_DWORD *)(v3 + 16) & 7;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 3) = v4;
  v5 = *(_DWORD *)(v3 + 12);
  *((_QWORD *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 7) = 1;
  *((_QWORD *)a1 + 34) = 0LL;
  *((_OWORD *)a1 + 15) = xmmword_1C00950A0;
  *((_OWORD *)a1 + 16) = xmmword_1C00950B0;
  if ( (v5 & 1) == 0 )
  {
    *((_QWORD *)a1 + 6) = 0LL;
    SmmInitializeSpinLock<2>((_DWORD *)a1 + 14);
    ExInitializeLookasideListEx(
      (PLOOKASIDE_LIST_EX)((char *)a1 + 64),
      0LL,
      0LL,
      (POOL_TYPE)512,
      0,
      0x28uLL,
      0x34737844u,
      0);
    v6 = 256;
    Mdl = IoAllocateMdl(0LL, 0x100000u, 0, 0, 0LL);
    *((_QWORD *)a1 + 20) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement(&dword_1C0130B38);
      WdLogSingleEntry1(6LL, 2297LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate Iommu staging MDL",
        2297LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = 1;
      *((_QWORD *)a1 + 20) = (char *)a1 + 168;
    }
    *((_DWORD *)a1 + 56) = v6;
  }
}
