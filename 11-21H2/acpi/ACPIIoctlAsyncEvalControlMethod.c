/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001410 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0020500 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0095160 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001BE20 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001C780 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C001DCFC (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0031196 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0058160 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  __int64 *v4; // r13
  PVOID v5; // r15
  PVOID v6; // rdi
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // esi
  char v14; // r8
  int v15; // eax
  int v16; // esi
  int v17; // esi
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v21; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0;
  v21 = 0LL;
  LODWORD(v20) = 0;
  switch ( v3 )
  {
    case 3325952:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, 64LL, &v18, &v21, &P, (unsigned int *)&v20);
      break;
    case 3325980:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3, 64LL, &v18, &v21, &P, (unsigned int *)&v20);
      break;
    case 3326016:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v18, (__int64)&v21, (__int64)&P, (__int64)&v20);
      break;
    case 3326024:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(
             a1,
             (_DWORD)a2,
             a3,
             64,
             (__int64)&v18,
             (__int64)&v21,
             (__int64)&P,
             (__int64)&v20);
      break;
    default:
      goto LABEL_5;
  }
  v6 = v21;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_14;
  v4 = (__int64 *)v18;
  v5 = P;
  v7 = v20;
LABEL_5:
  v10 = AMLIAsyncEvalObject(v4, (__int64)v6, v7, v5, &ACPIIoctlAsyncEvalControlMethodCompletion, a2);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  result = 259LL;
  if ( v10 != 259 )
  {
    if ( v10 >= 0 )
    {
      v13 = v3 - 3325952;
      if ( v13 )
      {
        v16 = v13 - 28;
        if ( v16 )
        {
          v17 = v16 - 36;
          if ( v17 )
          {
            if ( v17 != 8 )
              goto LABEL_13;
            LOBYTE(v11) = 1;
          }
          else
          {
            v11 = 0LL;
          }
          v15 = ACPIIoctlEvalPostProcessingV2(a2, v6, v11);
LABEL_12:
          v10 = v15;
LABEL_13:
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          FreeDataBuffs((__int64)v6, 1u);
          goto LABEL_14;
        }
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      v15 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v6, v14);
      goto LABEL_12;
    }
LABEL_14:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x52706341u);
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v10;
  }
  return result;
}
