/*
 * XREFs of PspChangeProcessExecutionState @ 0x1406A6C04
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14020BE40 (PspExecuteJobFreezeThawCallback.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PsSwapProcessWorkingSet @ 0x1409AE8AC (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     MmOutSwapWorkingSet @ 0x140342290 (MmOutSwapWorkingSet.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PsApplyDeepFreezeOptimizations @ 0x14067ED7C (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067EDC0 (PsRemoveDeepFreezeOptimizations.c)
 *     PsFreezeProcess @ 0x1407EBF50 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  unsigned int v1; // r8d
  char v2; // r13
  _KPROCESS *v3; // r15
  unsigned __int32 v5; // eax
  unsigned int v6; // edi
  unsigned __int32 v7; // esi
  unsigned __int32 v8; // ecx
  __int64 v9; // rdx
  char v10; // r12
  unsigned __int8 v11; // bl
  unsigned int SessionId; // eax
  _KPROCESS *SessionById; // rax
  char v14; // bl
  char v15; // di
  int v16; // eax
  int v17; // ecx
  unsigned __int32 i; // eax
  unsigned __int32 v19; // eax
  void (__fastcall **ExtensionTable)(PEPROCESS); // rax
  unsigned __int32 v22; // [rsp+28h] [rbp-49h]
  signed __int32 v23; // [rsp+2Ch] [rbp-45h]
  char v24; // [rsp+30h] [rbp-41h]
  unsigned int v25; // [rsp+34h] [rbp-3Dh]
  unsigned int v26; // [rsp+38h] [rbp-39h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v27; // [rsp+40h] [rbp-31h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v28; // [rsp+70h] [rbp-1h] BYREF

  v26 = 0;
  v24 = 0;
  v1 = 0;
  v2 = 0;
  memset(&v28, 0, sizeof(v28));
  v25 = 0;
  v3 = 0LL;
  memset(&v27, 0, sizeof(v27));
  _m_prefetchw(Process[2].IdealNode);
  v5 = *(_DWORD *)Process[2].IdealNode;
  v6 = (unsigned __int8)v25 + 1;
  while ( ((unsigned __int8)v5 & (unsigned __int8)v6) == 0 )
  {
    v7 = HIBYTE(v5);
    v8 = HIWORD(v5);
    if ( HIBYTE(v5) == BYTE2(v5) )
      break;
    v22 = _InterlockedCompareExchange((volatile signed __int32 *)Process[2].IdealNode, (unsigned __int16)v6 | v5, v5);
    v9 = v22;
    if ( v22 == v5 )
    {
LABEL_7:
      v10 = 0;
      v11 = v8 ^ v7;
      if ( !v2 )
      {
        KiStackAttachProcess(Process, 0, (__int64)&v28);
        SessionId = MmGetSessionIdEx((__int64)Process);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId);
          v3 = SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)&v27) < 0 )
            {
              ObfDereferenceObject(v3);
              v3 = 0LL;
            }
          }
        }
        v2 = v6;
      }
      if ( (v11 & 2) != 0 )
      {
        if ( (v7 & 2) != 0 )
          v10 = v6;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v11 & 4) != 0 && (v7 & 4) == 0 )
      {
        v26 = v6;
        PsRemoveDeepFreezeOptimizations((__int64)Process, &v26);
      }
      if ( (v11 & (unsigned __int8)v6) != 0 )
      {
        v24 = v6;
        LOBYTE(v9) = v6;
        if ( ((unsigned __int8)v7 & (unsigned __int8)v6) != 0 )
          PsFreezeProcess(Process, v9);
        else
          PsThawMultiProcess((ULONG_PTR)Process, v9, v6);
      }
      if ( ((unsigned __int8)v7 & v11 & 4) != 0 )
      {
        v26 = v6;
        PsApplyDeepFreezeOptimizations((__int64)Process, &v26);
      }
      v14 = v7;
      v15 = v7;
      if ( v10 )
      {
        v16 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v16 < 0 )
        {
          v17 = v25;
          v9 = 3221225625LL;
          if ( v16 == -1073741671 )
            v17 = -1073741671;
          v14 = v7 & 0xFD;
          v25 = v17;
        }
      }
      _m_prefetchw(Process[2].IdealNode);
      for ( i = *(_DWORD *)Process[2].IdealNode; ; i = v22 )
      {
        v23 = i;
        v19 = HIBYTE(i);
        LOBYTE(v7) = v19;
        if ( (_BYTE)v19 != v15 && (_BYTE)v19 != v14 )
        {
          LOBYTE(v8) = v14;
          v6 = 1;
          goto LABEL_7;
        }
        BYTE2(v22) = v14;
        LOWORD(v22) = v22 & 0xFFFE;
        HIBYTE(v22) = v14;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)Process[2].IdealNode, v22, v23);
        if ( v22 == v23 )
          break;
      }
      if ( v2 )
      {
        if ( v3 )
        {
          MmDetachSession((__int64)v3, &v27);
          ObfDereferenceObject(v3);
        }
        KiUnstackDetachProcess(&v28);
      }
      if ( v24 )
      {
        ExtensionTable = (void (__fastcall **)(PEPROCESS))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(Process);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v25;
    }
    v5 = v22;
  }
  return v1;
}
