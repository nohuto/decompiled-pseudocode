/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x14032A5D0
 * Callers:
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     vDbgPrintEx @ 0x14032A5A0 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x140463540 (vDbgPrintExWithPrefix.c)
 *     IopDebugPrint @ 0x1405610DC (IopDebugPrint.c)
 *     KsepDebugPrint @ 0x140580D64 (KsepDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1405A77B0 (DbgPrintReturnControlC.c)
 *     VfUtilDbgPrint @ 0x1405CE364 (VfUtilDbgPrint.c)
 *     DifUtilDbgPrint @ 0x1405D4BD0 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x1405D56D4 (DifiDbgPrint.c)
 * Callees:
 *     RtlStringCbVPrintfA @ 0x14020A6D8 (RtlStringCbVPrintfA.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     NtQueryDebugFilterState @ 0x14032A730 (NtQueryDebugFilterState.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140428770 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x140428780 (DebugPrint.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        ULONG ComponentId,
        ULONG Level,
        const char *a4,
        va_list argList,
        char a6)
{
  ULONG v7; // r12d
  __int64 result; // rax
  char *v10; // rdi
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  const char *CurrentIrql; // rsi
  unsigned __int8 v18; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rdx
  struct _EX_RUNDOWN_REF *v21; // rbx
  ULONG v22; // esi
  void (__fastcall *Count)(__int128 *, _QWORD, _QWORD); // r12
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  char v29[96]; // [rsp+0h] [rbp-80h] BYREF
  ULONG v30; // [rsp+80h] [rbp+0h]
  NTSTATUS v31; // [rsp+84h] [rbp+4h]
  NTSTRSAFE_PCSTR pszFormat; // [rsp+88h] [rbp+8h]
  __int128 v33; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp+20h]

  pszFormat = a4;
  v7 = ComponentId;
  v30 = ComponentId;
  v33 = 0LL;
  if ( !NtQueryDebugFilterState(ComponentId, Level) )
    return 0LL;
  v10 = 0LL;
  v11 = 0;
  v31 = 0;
  v12 = 0;
  do
  {
    if ( v12 >= 0x200 )
      break;
    v10 = v29;
    v12 += 128;
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
    v34 = v13;
    v14 = v12 - 1;
    if ( v13 <= v14 )
      v14 = v13;
    memmove(v29, Src, v14);
    v11 = RtlStringCbVPrintfA(&v29[v14], v12 - v14, pszFormat, argList);
    v31 = v11;
    if ( v11 >= 0 )
      break;
  }
  while ( v11 == -2147483643 );
  if ( v11 == -2147483643 )
  {
    v10[v12 - 2] = 10;
    LOWORD(v15) = v12 - 1;
    v10[v12 - 1] = 0;
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v10[v15] );
  }
  *((_QWORD *)&v33 + 1) = v10;
  LOWORD(v33) = v15;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v16 = 0LL;
    CurrentIrql = (const char *)KeGetCurrentIrql();
    pszFormat = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v18 == 12 )
            LODWORD(v20) = 4096;
          else
            v20 = (-1LL << (v18 + 1)) & 0x1FFC;
          SchedulerAssist[5] |= v20;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
    v21 = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      v22 = v30;
      do
      {
        if ( ExAcquireRundownProtection_0(v21 - 2) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
          Count = (void (__fastcall *)(__int128 *, _QWORD, _QWORD))v21[-1].Count;
          if ( v16 )
            ExReleaseRundownProtection_0(v16 + 1);
          v16 = v21 - 3;
          Count(&v33, v22, Level);
          ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
        }
        v21 = (struct _EX_RUNDOWN_REF *)v21->Count;
      }
      while ( v21 != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      LOBYTE(CurrentIrql) = (_BYTE)pszFormat;
      v7 = v30;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
    if ( v16 )
      ExReleaseRundownProtection_0(v16 + 1);
    if ( (unsigned __int8)CurrentIrql < 0xCu )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v24 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v28 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
    }
  }
  result = DebugPrint(&v33, v7, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
