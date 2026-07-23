/*
 * XREFs of KeFlushSingleTb @ 0x1402EB0C4
 * Callers:
 *     MiMapSinglePage @ 0x140217D78 (MiMapSinglePage.c)
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiFillPhysicalPages @ 0x1403390F0 (MiFillPhysicalPages.c)
 *     MiNoFaultFound @ 0x14033C340 (MiNoFaultFound.c)
 *     MiDbgReleaseAddress @ 0x14038A450 (MiDbgReleaseAddress.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140399FDC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1403D6DAC (MmStealTopLevelPage.c)
 *     MiPrepareToStealNonPagedPool @ 0x14061D9A4 (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x140634070 (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140643AA0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140643F68 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1406442D0 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 *     MiLargePageFault @ 0x1406464DC (MiLargePageFault.c)
 *     MiClearPageFileHash @ 0x140665C00 (MiClearPageFileHash.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14081FBC8 (MiMarkBootGuardPage.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 *     MxCopyPage @ 0x140B9A540 (MxCopyPage.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 *     KiIsSecureProcessFlush @ 0x1402EB260 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1402EB29C (KiPreprocessFlushTb.c)
 *     KxFlushSingleTb @ 0x1402EB340 (KxFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x1403CB74C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1403CE3EC (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x1403CE708 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14041FAA0 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x140465E8C (VmFlushTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x14060D088 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  char v11; // r11
  int v12; // r9d
  char v13; // r10
  unsigned __int8 v14; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // bl
  _DWORD *v22; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int8 v28; // [rsp+40h] [rbp-40h] BYREF
  char v29; // [rsp+41h] [rbp-3Fh] BYREF
  char v30[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h]

  v32 = 0LL;
  v29 = 0;
  v30[0] = 0;
  v28 = 0;
  v4 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v29, (__int64)&v28) )
  {
    if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v34 = 1LL;
        *((_QWORD *)&v34 + 1) = a1;
        _EAX = 0;
        __asm { invpcid eax, [rbp+var_20] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)a1);
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v14 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = v28;
        v19 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v14 = v28;
    }
    __writecr8(v14);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v29 )
  {
    KiPrepareFlushParameters(a2, &v32, v30);
    v9 = KiFlushAffinity(a3);
    LOBYTE(v10) = v30[0];
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v12) = v11;
    v33 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v32, v9, v10, v12, v13, 1, (__int64)&v33);
    v4 |= result;
  }
  else
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
      result = KeFlushProcessWriteBuffers(1);
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  if ( VmTbFlushEnabled )
  {
    v31 = v8;
    result = VmFlushTb(1LL, &v31, a2);
  }
  if ( ExTbFlushActive )
  {
    v31 = v8;
    v21 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
    {
      v22 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v21 == 15 )
        LODWORD(v23) = 0x8000;
      else
        v23 = (-1LL << (v21 + 1)) & 0xFFFC;
      v22[5] |= v23;
    }
    ExFlushTb(1LL, &v31, a2);
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && v21 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v20 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    result = v21;
    __writecr8(v21);
  }
  return result;
}
