/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C001C780
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002C0FC (AcpiIoctlArgumentToPackageObjV1.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  void *v9; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // eax
  int v13; // ecx
  int *v14; // rbx
  __int64 *v15; // rdx
  __int64 result; // rax
  void *Pool2; // r15
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // r14
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  volatile signed __int32 *v29; // [rsp+30h] [rbp-78h] BYREF
  __int64 v30; // [rsp+38h] [rbp-70h]
  _QWORD *v31; // [rsp+40h] [rbp-68h]
  _QWORD *v32; // [rsp+48h] [rbp-60h]
  _QWORD *v33; // [rsp+50h] [rbp-58h]
  unsigned int *v34; // [rsp+58h] [rbp-50h]
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v36; // [rsp+64h] [rbp-44h]

  v31 = a5;
  v9 = 0LL;
  v32 = a6;
  v10 = 0;
  v33 = a7;
  v34 = a8;
  v11 = *(_DWORD *)(a3 + 16);
  v30 = a4;
  v13 = *(_DWORD *)(a3 + 8);
  v29 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v13 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v36 = 0;
  Src = v14[1];
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 760);
  if ( !v15 )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src, v15, &v29, 1);
  if ( (int)result >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(a4, 40LL, 1383097153LL);
    if ( Pool2 )
    {
      v18 = *v14;
      if ( *v14 == 1130980673 )
      {
        v19 = (unsigned int)v14[3];
        if ( (_DWORD)v19 )
        {
          v20 = v14 + 4;
          v10 = v14[3];
          v21 = ExAllocatePool2(a4, 40 * v19, 1097884481LL);
          v9 = (void *)v21;
          if ( v21 )
          {
            v22 = 0;
            v23 = v21 + 24;
            while ( 1 )
            {
              if ( *(_WORD *)v20 == 4 )
                v24 = 4;
              else
                v24 = *(_WORD *)v20 + 1;
              *(_WORD *)(v23 - 22) = v24;
              v25 = *(_WORD *)v20;
              if ( *(_WORD *)v20 )
              {
                if ( v25 > 2u )
                {
                  if ( v25 == 4 )
                  {
                    v27 = AcpiIoctlArgumentToPackageObjV1(
                            (_DWORD)v20,
                            v30,
                            0,
                            (unsigned int)v9 + 8 * (5 * v22 + 3),
                            (__int64)v9 + 40 * v22 + 32);
                    if ( v27 < 0 )
                      goto LABEL_33;
                    goto LABEL_15;
                  }
                  *(_WORD *)(v23 - 22) = 3;
                }
                *(_DWORD *)v23 = *((unsigned __int16 *)v20 + 1);
                *(_QWORD *)(v23 + 8) = (unsigned __int64)(v20 + 1) & -(__int64)(*((_WORD *)v20 + 1) != 0);
              }
              else
              {
                *(_QWORD *)(v23 - 8) = (unsigned int)v20[1];
              }
LABEL_15:
              v26 = *((unsigned __int16 *)v20 + 1);
              if ( (unsigned __int16)v26 < 4u )
                v26 = 4LL;
              ++v22;
              v20 = (_DWORD *)((char *)v20 + v26 + 4);
              v23 += 40LL;
              if ( v22 >= v10 )
                goto LABEL_18;
            }
          }
          goto LABEL_32;
        }
      }
      else if ( v18 != 1114203457 )
      {
        if ( v18 != 1231643969 && v18 != 1399416129 )
          return 3221225711LL;
        v10 = 1;
        v28 = ExAllocatePool2(a4, 40LL, 1097884481LL);
        v9 = (void *)v28;
        if ( !v28 )
          goto LABEL_32;
        if ( *v14 == 1231643969 )
        {
          *(_WORD *)(v28 + 2) = 1;
          *(_QWORD *)(v28 + 16) = (unsigned int)v14[2];
        }
        else
        {
          *(_WORD *)(v28 + 2) = 2;
          *(_DWORD *)(v28 + 24) = v14[2];
          *(_QWORD *)(v28 + 32) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
        }
      }
LABEL_18:
      *v31 = v29;
      *v32 = Pool2;
      *v33 = v9;
      *v34 = v10;
      return 0LL;
    }
LABEL_32:
    v27 = -1073741670;
LABEL_33:
    if ( v29 )
      AMLIDereferenceHandleEx(v29);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x52706341u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    return (unsigned int)v27;
  }
  return result;
}
