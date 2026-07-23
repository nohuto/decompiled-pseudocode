/*
 * XREFs of KyRaiseException @ 0x140578FE0
 * Callers:
 *     KiRaiseException @ 0x140578E00 (KiRaiseException.c)
 * Callees:
 *     KeVerifyContextXStateCetU @ 0x1402A3E70 (KeVerifyContextXStateCetU.c)
 *     RtlInitializeExtendedContext @ 0x14030D640 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D6C0 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x14030D9CC (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14030E004 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x14041EF10 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x1407700D0 (RtlpReadExtendedContext.c)
 */

int __fastcall KyRaiseException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char PreviousMode; // r15
  __int64 v7; // rax
  int result; // eax
  ULONG v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  CONTEXT_CHUNK *p_XState; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // si
  int v20; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rcx
  int v22; // r14d
  __int64 v23; // r10
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v27; // zf
  __int64 v28; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp+10h] BYREF
  __int64 v33; // [rsp+48h] [rbp+18h]
  __int64 v34; // [rsp+50h] [rbp+20h]
  __int128 v35; // [rsp+58h] [rbp+28h] BYREF
  __int64 v36; // [rsp+68h] [rbp+38h]

  v33 = a4;
  v34 = a3;
  v4 = a2;
  ContextEx = 0LL;
  ContextFlags = 0;
  ContextLength = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_11;
  v7 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v7;
  result = RtlpSanitizeContextFlags(&ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v9 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength + 15LL;
      if ( v10 <= ContextLength )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v9, &ContextEx);
      if ( result >= 0 )
      {
        p_XState = &ContextEx[-39].XState;
        LOBYTE(v14) = 1;
        result = RtlpReadExtendedContext(v15, v14, (_DWORD)ContextEx, v9, v4, 0LL);
        if ( result >= 0 )
        {
          v4 = (__int64)p_XState;
LABEL_11:
          CurrentThread = KeGetCurrentThread();
          v18 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            KeGetCurrentIrql();
            __writecr8(1uLL);
          }
          if ( PreviousMode )
          {
            if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
            {
              v32 = 0LL;
              if ( (int)KeVerifyContextXStateCetU((__int64)CurrentThread, v4, &v32) < 0
                || (v35 = 0LL,
                    v36 = 0LL,
                    (int)KeVerifyContextRecord((__int64)CurrentThread, v4, v20, (int)&v35, (__int64)&v32) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
          if ( ExtendedFeatureDisableMask
            && (*(_DWORD *)(v4 + 48) & 0x100040) == 0x100040
            && (ExtendedFeatureDisableMask & *(_QWORD *)(*(int *)(v4 + 1248) + v4 + 1232)) != 0 )
          {
            v22 = -1073741811;
          }
          else
          {
            v23 = v33;
            *(_BYTE *)(v33 + 43) = 1;
            v22 = 0;
            if ( v18 )
            {
              LOBYTE(v28) = PreviousMode;
              KeContextToKframes(v23, v34, v4, *(_DWORD *)(v4 + 48), v28);
            }
          }
          if ( !CurrentIrql )
          {
            if ( (_DWORD)KiIrqlFlags )
            {
              v24 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v27 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
                SchedulerAssist[5] &= 0xFFFF0001;
                if ( v27 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(0LL);
          }
          return v22;
        }
      }
    }
  }
  return result;
}
