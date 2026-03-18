/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00A2FE8
 * Callers:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2D08 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A31F4 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00A3E54 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A3F18 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A51C4 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v7; // rax
  const char *v8; // rdx
  void *v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  PSID v12; // r13
  ULONG v13; // eax
  PVOID v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 Pool2; // rbx
  struct _LUID v17; // rax
  unsigned int v19; // r8d
  int v20; // ecx
  __int64 v21; // rax
  char v22; // r12
  ULONG ReturnLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-C0h] BYREF
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  PSID TokenInformation[12]; // [rsp+F0h] [rbp-10h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v7 = PsReferencePrimaryToken(CurrentProcess);
  v9 = v7;
  if ( !v7 )
  {
    v11 = -1073741700;
    v19 = 747;
LABEL_20:
    v20 = v11;
LABEL_23:
    CitpLogFailureWorker(v20, v8, v19);
    goto LABEL_12;
  }
  v10 = SeQueryAuthenticationIdToken(v7, &AuthenticationId);
  v11 = v10;
  if ( v10 < 0 )
  {
    v19 = 754;
    goto LABEL_22;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C029A204);
    if ( BYTE4(qword_1C029A224) )
    {
      v10 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v11 = v10;
      if ( v10 < 0 )
      {
        v19 = 785;
      }
      else
      {
        ReturnLength = 0;
        v10 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        v11 = v10;
        if ( v10 >= 0 )
        {
          v12 = TokenInformation[0];
          v13 = RtlLengthSid(TokenInformation[0]);
          v14 = gpLeakTrackingAllocator;
          Size = v13;
          v15 = v13;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) == 0x49637355 )
          {
            v21 = 0LL;
            if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
            {
              while ( *((_DWORD *)gpLeakTrackingAllocator + v21) != 1231254357 )
              {
                if ( ++v21 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                  goto LABEL_9;
              }
              v22 = 0;
              if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
              {
                v22 = 1;
                v15 += 16LL;
              }
              Pool2 = ExAllocatePool2(260LL, v15);
              if ( Pool2 )
              {
                memset(BackTrace, 0, sizeof(BackTrace));
                RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
                if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                          v14,
                                          Pool2,
                                          BackTrace) )
                  {
                    Pool2 += 16LL;
LABEL_10:
                    if ( Pool2 )
                    {
LABEL_11:
                      memmove((void *)Pool2, v12, Size);
                      v17 = *a2;
                      *((_QWORD *)a1 + 12) = Pool2;
                      *((struct _LUID *)a1 + 13) = v17;
                      CitpPostUpdateUseInfoLoad(a1);
                      CitpDPDataLoad(a1);
                      CitpUpdateBootStats(a1);
                      v11 = 0;
                      goto LABEL_12;
                    }
                    goto LABEL_19;
                  }
                }
                else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                             v14,
                                             Pool2,
                                             BackTrace) )
                {
                  goto LABEL_11;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
              }
LABEL_19:
              v11 = -1073741670;
              v19 = 815;
              goto LABEL_20;
            }
          }
LABEL_9:
          Pool2 = ExAllocatePool2(260LL, v15);
          goto LABEL_10;
        }
        v19 = 801;
      }
LABEL_22:
      v20 = v10;
      goto LABEL_23;
    }
    CitpCleanupGlobalImpactContext((struct _CIT_IMPACT_CONTEXT **)&Size);
    v11 = -1073741637;
  }
  else
  {
    v11 = -1073741587;
  }
LABEL_12:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v9 )
    PsDereferencePrimaryToken(v9);
  return v11;
}
