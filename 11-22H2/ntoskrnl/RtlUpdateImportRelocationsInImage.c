/*
 * XREFs of RtlUpdateImportRelocationsInImage @ 0x140376274
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B48EF0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B49058 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     RtlCaptureRetpolineImportRvas @ 0x140324B60 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1403253B0 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructImportRelocationFixup @ 0x140325600 (RtlpConstructImportRelocationFixup.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403764F8 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376610 (RtlpCaptureDynamicRelocationTableRva.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlUpdateImportRelocationsInImage(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        unsigned int (*a4)(void),
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  _DWORD *v11; // rsi
  int v13; // ebx
  int v14; // eax
  char *v15; // rcx
  unsigned __int64 v16; // rdx
  char *i; // rcx
  _DWORD *v18; // rdi
  unsigned __int64 v19; // r15
  unsigned int v20; // esi
  unsigned int *v21; // r12
  unsigned __int64 v22; // r13
  int v23; // ecx
  int v24; // ebx
  ULONG v26; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-69h]
  _DWORD *Pool2; // [rsp+58h] [rbp-59h]
  __int64 v29; // [rsp+60h] [rbp-51h]
  __int64 v30[2]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v31; // [rsp+78h] [rbp-39h]
  __int128 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-19h] BYREF
  int v34; // [rsp+A0h] [rbp-11h]
  __int16 v35; // [rsp+A4h] [rbp-Dh]

  LODWORD(v27) = 0;
  v11 = 0LL;
  v26 = 0;
  v29 = a6;
  Pool2 = 0LL;
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v13 = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a6, (__int64)v30);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( !LODWORD(v30[1]) )
      return 0;
    *(_QWORD *)&v32 = a2;
    *((_QWORD *)&v31 + 1) = &BaseOfImage[LODWORD(v30[1])];
    *((_QWORD *)&v32 + 1) = a4;
  }
  else
  {
    v14 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, a3, a4, 0LL, &v26);
    v13 = v14;
    if ( v14 >= 0 )
      return (unsigned int)-1073741637;
    if ( v14 != -1073741789 )
      return (unsigned int)v13;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v26, 1231843410LL);
    v11 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v13 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, a3, a4, Pool2, &v26);
    if ( v13 < 0 )
      goto LABEL_22;
    *(_QWORD *)&v31 = v11;
  }
  v13 = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, a3);
  if ( v13 >= 0 )
  {
    v15 = &BaseOfImage[(unsigned int)v27];
    v16 = (unsigned __int64)&v15[*((unsigned int *)v15 + 1) + 8];
    for ( i = v15 + 8; ; i += *((unsigned int *)i + 2) + 12 )
    {
      if ( (unsigned __int64)i >= v16 )
      {
        v13 = -1073741637;
        goto LABEL_21;
      }
      if ( *(_QWORD *)i == 3LL )
        break;
    }
    v18 = i + 12;
    v19 = (unsigned __int64)&i[*((unsigned int *)i + 2) + 12];
    v27 = v19;
    if ( (unsigned __int64)(i + 12) < v19 )
    {
      v20 = a3;
      do
      {
        v21 = v18 + 2;
        v22 = (unsigned __int64)v18 + (unsigned int)v18[1];
        if ( (unsigned __int64)(v18 + 2) < v22 )
        {
          do
          {
            v23 = *v21 & 0xFFF;
            if ( !v23 && v21 != v18 + 2 )
              break;
            v24 = *v18;
            v33 = 0LL;
            v34 = 0;
            v35 = 0;
            RtlpConstructImportRelocationFixup(v24 + v23, (__int64)v30, v29, v21, 1, a8, (__int64)&v33);
            RtlpApplyGenericRetpolineFixup((unsigned __int64)BaseOfImage, v20, &v33, v24 + (*v21++ & 0xFFF));
          }
          while ( (unsigned __int64)v21 < v22 );
          v19 = v27;
        }
        v18 = (_DWORD *)((char *)v18 + (unsigned int)v18[1]);
      }
      while ( (unsigned __int64)v18 < v19 );
      v11 = Pool2;
    }
    v13 = 0;
  }
LABEL_21:
  if ( v11 )
LABEL_22:
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v13;
}
