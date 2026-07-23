/*
 * XREFs of MiParseImageLoadConfig @ 0x1406A828C
 * Callers:
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14020EBA0 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x14020EBB8 (MiIsImportOptimizationEnabled.c)
 *     MiFreeImageCfgContext @ 0x14020EBD0 (MiFreeImageCfgContext.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x14036C09C (RtlCreateFunctionOverrideFixupInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406A7128 (MiCreateRetpolineRelocationInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1406A7AD4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlCreateRvaList @ 0x1406A7CA0 (RtlCreateRvaList.c)
 *     MiInitializeRvaStates @ 0x1406A7E48 (MiInitializeRvaStates.c)
 *     MiCaptureImageCfgContext @ 0x1406A7EC0 (MiCaptureImageCfgContext.c)
 *     MiFreeImageRetpolineContext @ 0x1406A88E0 (MiFreeImageRetpolineContext.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     MiFreeImageLoadConfig @ 0x140A4A594 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_QWORD *a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  bool v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  int RetpolineRelocationInformation; // edi
  __int64 v11; // r9
  _DWORD *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int16 *v15; // r12
  __int16 v16; // ax
  unsigned int v17; // eax
  unsigned int *v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int16 v27; // r12
  unsigned int v28; // r9d
  unsigned int v29; // ebx
  int v30; // eax
  int v32; // eax
  int Src; // [rsp+20h] [rbp-3E8h]
  __int64 v34; // [rsp+28h] [rbp-3E0h]
  int v35; // [rsp+28h] [rbp-3E0h]
  __int64 v37; // [rsp+60h] [rbp-3A8h]
  __int64 v39; // [rsp+70h] [rbp-398h] BYREF
  PVOID BaseOfImage; // [rsp+78h] [rbp-390h]
  unsigned int v41; // [rsp+80h] [rbp-388h]
  unsigned int v42; // [rsp+90h] [rbp-378h]
  int v43; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-360h]
  int v45; // [rsp+B0h] [rbp-358h]
  unsigned int v46; // [rsp+B4h] [rbp-354h]
  __int64 v47; // [rsp+B8h] [rbp-350h]
  __int64 v48; // [rsp+C0h] [rbp-348h]
  __int64 v49; // [rsp+C8h] [rbp-340h]
  _QWORD *v50; // [rsp+D8h] [rbp-330h]
  void *v51; // [rsp+E0h] [rbp-328h]
  __int64 v52; // [rsp+E8h] [rbp-320h]
  __int64 v53; // [rsp+F0h] [rbp-318h]
  __int64 v54; // [rsp+F8h] [rbp-310h]
  unsigned int *v55; // [rsp+100h] [rbp-308h]
  __int64 v56[3]; // [rsp+108h] [rbp-300h] BYREF
  _QWORD *v57; // [rsp+120h] [rbp-2E8h]
  void *v58; // [rsp+128h] [rbp-2E0h]
  __int64 v59; // [rsp+130h] [rbp-2D8h]
  int v60[80]; // [rsp+140h] [rbp-2C8h] BYREF
  _BYTE v61[320]; // [rsp+280h] [rbp-188h] BYREF

  BaseOfImage = a2;
  v50 = a1;
  v57 = a1;
  v51 = a2;
  v58 = a2;
  v52 = a3;
  v59 = a3;
  v42 = a4;
  v45 = a4;
  v53 = a5;
  memset(v61, 0, sizeof(v61));
  v56[0] = 0LL;
  LODWORD(v39) = 0;
  v7 = 0;
  v8 = *a1;
  v46 = *(_DWORD *)(*(_QWORD *)(v8 + 56) + 64LL);
  v9 = 0LL;
  v37 = 0LL;
  v43 = 0;
  RetpolineRelocationInformation = 0;
  memset(v60, 0, sizeof(v60));
  v11 = *(_QWORD *)(v8 + 56);
  v47 = v11;
  v48 = v11;
  v44 = *(_QWORD *)a3;
  v49 = v44;
  v12 = (_DWORD *)(a3 + 96);
  v55 = (unsigned int *)(a3 + 96);
  v13 = *(unsigned int *)(a3 + 96);
  if ( !(_DWORD)v13 )
    goto LABEL_26;
  v14 = *(_DWORD *)(a3 + 100);
  v15 = (__int16 *)(a3 + 48);
  v54 = a3 + 48;
  v16 = *(_WORD *)(a3 + 48);
  if ( v16 == 523 )
  {
    v17 = 148;
  }
  else
  {
    if ( v16 != 267 )
      goto LABEL_51;
    v17 = 92;
  }
  v41 = v17;
  if ( (unsigned int)v13 + v17 <= (unsigned int)v13 )
    goto LABEL_51;
  v56[2] = a3 + 16;
  if ( (unsigned int)v13 + v17 > *(_DWORD *)(a3 + 16) )
    goto LABEL_51;
  v18 = (unsigned int *)((char *)BaseOfImage + v13);
  v56[1] = (__int64)v18;
  if ( v14 >= v17 )
    goto LABEL_7;
  if ( *(_WORD *)(v11 + 48) != 332 )
  {
LABEL_51:
    v9 = 0LL;
    goto LABEL_26;
  }
  if ( v14 > 4 )
    v14 = *v18;
  if ( v14 < v17 )
    goto LABEL_25;
LABEL_7:
  if ( v14 >= 0x140 )
    v14 = 320;
  if ( *v12 + v14 <= *v12 || *v12 + v14 > *(_DWORD *)(a3 + 16) )
    goto LABEL_25;
  memmove(v61, v18, v14);
  v37 = MiReferenceControlAreaFile((__int64)a1);
  MiLogRelocationRva(*v55, v14, v37, a1);
  *(_QWORD *)v60 = v57;
  *(_QWORD *)&v60[2] = v37;
  *(_QWORD *)&v60[4] = v58;
  *(_QWORD *)&v60[6] = v44;
  v60[8] = v45;
  v60[9] = 0;
  *(_QWORD *)&v60[10] = v59;
  *(_QWORD *)&v60[12] = v61;
  v60[14] = v14;
  v34 = a3;
  v19 = (__int64)a1;
  RetpolineRelocationInformation = MiCaptureImageCfgContext(
                                     (__int64)a1,
                                     v37,
                                     (__int64)BaseOfImage,
                                     v44,
                                     a4,
                                     v34,
                                     (__int64)v61,
                                     v14,
                                     &v43,
                                     (__int64)&v60[16]);
  if ( RetpolineRelocationInformation >= 0 )
  {
    *(_DWORD *)a5 |= v43;
    v20 = v47;
    *(_WORD *)(a5 + 4) = *(_WORD *)(v47 + 48) == 452;
    *(_WORD *)(a5 + 6) = *(_WORD *)(v20 + 48);
    MiInitializeRvaStates((_DWORD *)a5, &v60[38], &v60[32], (unsigned int *)&v60[36]);
    if ( !v60[36]
      || (RetpolineRelocationInformation = RtlCreateRvaList(
                                             (int)v60,
                                             v21,
                                             v22,
                                             v60[36],
                                             &v60[32],
                                             v35,
                                             (__int64 **)(a5 + 8)),
          RetpolineRelocationInformation >= 0) )
    {
      if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
        v7 = *v15 == 523;
      v27 = *v15;
      if ( v7 || v27 == 523 )
      {
        v28 = v14;
        v29 = a4;
        v30 = LdrCaptureDynamicRelocationTableHeader((char *)BaseOfImage, a4, (__int64)v61, v28, v44, v27, &v39, v56);
        RetpolineRelocationInformation = v30;
        if ( v30 == -1073741637 )
        {
          RetpolineRelocationInformation = 0;
        }
        else if ( v30 < 0 )
        {
LABEL_25:
          v9 = v37;
LABEL_26:
          v19 = (__int64)a1;
          goto LABEL_27;
        }
      }
      else
      {
        v29 = a4;
      }
      if ( !v7 )
        goto LABEL_22;
      v26 = (unsigned int)v39;
      if ( !(_DWORD)v39 )
        goto LABEL_22;
      v32 = MiCaptureRetpolineRelocationTables((char *)BaseOfImage, v29, v46, v39, v56, v35, (__int64 *)&v60[24]);
      RetpolineRelocationInformation = v32;
      if ( v32 == -1073741637 )
      {
        RetpolineRelocationInformation = 0;
      }
      else
      {
        if ( v32 < 0 )
          goto LABEL_25;
        RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(
                                           (__int64)&v60[24],
                                           v60[22],
                                           v29,
                                           (_QWORD *)(a5 + 16));
        if ( RetpolineRelocationInformation < 0 )
          goto LABEL_25;
      }
LABEL_22:
      if ( (_DWORD)v39 && v27 == 523 )
        RetpolineRelocationInformation = RtlCreateFunctionOverrideFixupInfo(
                                           v24,
                                           v23,
                                           v25,
                                           v26,
                                           Src,
                                           v35,
                                           (_QWORD *)(a5 + 24));
      if ( RetpolineRelocationInformation >= 0 )
        RetpolineRelocationInformation = 0;
      goto LABEL_25;
    }
  }
  v9 = v37;
LABEL_27:
  if ( RetpolineRelocationInformation < 0 )
    MiFreeImageLoadConfig(a5);
  if ( v9 )
    MiDereferenceControlAreaFile(v19, v9);
  MiFreeImageCfgContext((__int64)&v60[16]);
  MiFreeImageRetpolineContext(&v60[24]);
  return (unsigned int)RetpolineRelocationInformation;
}
