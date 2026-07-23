/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x14067AB7C
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14067AB3C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B457F0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B45CC4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     RtlpApplyGenericRetpolineFixup @ 0x140325820 (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140376048 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376160 (RtlpCaptureDynamicRelocationTableRva.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlApplyImportRelocationToImage @ 0x14067A930 (RtlApplyImportRelocationToImage.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x14067AF40 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlpConstructSwitchJumpRelocationFixup @ 0x14067B104 (RtlpConstructSwitchJumpRelocationFixup.c)
 *     RtlpIsAddressInIgnoreRegion @ 0x14067B1CC (RtlpIsAddressInIgnoreRegion.c)
 */

int __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  char *v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  int result; // eax
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  unsigned int *v21; // rbx
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  unsigned int *v24; // rdi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r13
  unsigned int *v27; // rdi
  unsigned __int64 v28; // r14
  unsigned int *v29; // rsi
  unsigned __int64 v30; // r13
  __int16 v31; // cx
  int v32; // ebx
  int v33; // ebx
  unsigned __int64 v34; // r12
  unsigned int *v35; // rdi
  unsigned __int64 v36; // r14
  unsigned int *v37; // rsi
  __int16 v38; // cx
  int v39; // ebx
  int v40; // ebx
  unsigned __int64 v42; // [rsp+50h] [rbp-81h]
  unsigned __int64 v43; // [rsp+50h] [rbp-81h]
  unsigned __int64 v44; // [rsp+60h] [rbp-71h]
  __int64 v45[2]; // [rsp+70h] [rbp-61h] BYREF
  __int128 v46; // [rsp+80h] [rbp-51h]
  __int128 v47; // [rsp+90h] [rbp-41h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-31h] BYREF
  int v49; // [rsp+A8h] [rbp-29h]
  __int16 v50; // [rsp+ACh] [rbp-25h]
  char *v51; // [rsp+B0h] [rbp-21h] BYREF
  int v52; // [rsp+B8h] [rbp-19h]
  __int16 v53; // [rsp+BCh] [rbp-15h]

  LODWORD(v48) = 0;
  v9 = BaseOfImage;
  v10 = a7;
  v11 = 0LL;
  v12 = a8;
  v13 = 0LL;
  v51 = BaseOfImage;
  v14 = 0LL;
  *(_OWORD *)v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(
             BaseOfImage,
             a2,
             a3,
             a4 & -(__int64)(a6 != 0),
             (_DWORD *)(a5 & -(__int64)(a6 != 0)),
             (__int64)v45);
  if ( result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(v9, a3, (int *)&v48);
    if ( result >= 0 )
    {
      v17 = &v9[(unsigned int)v48];
      v18 = (unsigned __int64)&v17[*((unsigned int *)v17 + 1) + 8];
      v19 = (unsigned __int64)(v17 + 8);
      if ( v19 >= v18 )
        return -1073741637;
      do
      {
        switch ( *(_QWORD *)v19 )
        {
          case 3LL:
            v11 = v19;
            break;
          case 4LL:
            v13 = v19;
            break;
          case 5LL:
            v14 = v19;
            break;
        }
        v19 += *(unsigned int *)(v19 + 8) + 12LL;
      }
      while ( v19 < v18 );
      v44 = v14;
      if ( v11 )
      {
        v20 = *(unsigned int *)(v11 + 8) + v11 + 12;
        v21 = (unsigned int *)(v11 + 12);
        v48 = v20;
        if ( (unsigned __int64)v21 < v20 )
        {
          v22 = a3;
          do
          {
            if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v21, v10, v12, a9) )
            {
              v23 = (unsigned __int64)v21 + v21[1];
              v24 = v21 + 2;
              if ( (unsigned __int64)(v21 + 2) < v23 )
              {
                v25 = (unsigned __int64)v51;
                do
                {
                  if ( (*v24 & 0xFFF) != 0 || v24 == v21 + 2 )
                    RtlApplyImportRelocationToImage(v25, v22, (__int64)v45, a5, *v21, v24, a6, 0);
                  ++v24;
                }
                while ( (unsigned __int64)v24 < v23 );
                v20 = v48;
              }
              v12 = a8;
              v10 = a7;
            }
            v21 = (unsigned int *)((char *)v21 + v21[1]);
          }
          while ( (unsigned __int64)v21 < v20 );
          v14 = v44;
        }
        if ( !v13 )
          goto LABEL_42;
      }
      else if ( !v13 )
      {
        if ( !v14 )
          return -1073741637;
        goto LABEL_44;
      }
      v26 = *(unsigned int *)(v13 + 8) + v13 + 12;
      v27 = (unsigned int *)(v13 + 12);
      v42 = v26;
      if ( v13 + 12 < v26 )
      {
        do
        {
          if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v27, v10, v12, a9) )
          {
            v28 = (unsigned __int64)v27 + v27[1];
            v29 = v27 + 2;
            if ( (unsigned __int64)(v27 + 2) < v28 )
            {
              v30 = (unsigned __int64)v51;
              do
              {
                v31 = *(_WORD *)v29;
                if ( (*(_WORD *)v29 & 0xFFF) != 0 || v29 == v27 + 2 )
                {
                  v32 = *v27;
                  v48 = 0LL;
                  v49 = 0;
                  v33 = (v31 & 0xFFF) + v32;
                  v50 = 0;
                  RtlpConstructIndirectRelocationFixup(v33, (unsigned int)v45, a5, (_DWORD)v29, a6, (__int64)&v48);
                  RtlpApplyGenericRetpolineFixup(v30, a3, &v48, v33);
                }
                v29 = (unsigned int *)((char *)v29 + 2);
              }
              while ( (unsigned __int64)v29 < v28 );
              v26 = v42;
            }
            v12 = a8;
            v10 = a7;
          }
          v27 = (unsigned int *)((char *)v27 + v27[1]);
        }
        while ( (unsigned __int64)v27 < v26 );
        v14 = v44;
      }
LABEL_42:
      if ( !v14 )
        return 0;
      v9 = v51;
LABEL_44:
      v34 = *(unsigned int *)(v14 + 8) + v14 + 12;
      v35 = (unsigned int *)(v14 + 12);
      v43 = v34;
      while ( (unsigned __int64)v35 < v34 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v35, v10, a8, a9) )
        {
          v36 = (unsigned __int64)v35 + v35[1];
          v37 = v35 + 2;
          if ( (unsigned __int64)(v35 + 2) < v36 )
          {
            do
            {
              v38 = *(_WORD *)v37;
              if ( (*(_WORD *)v37 & 0xFFF) != 0 || v37 == v35 + 2 )
              {
                v39 = *v35;
                v51 = 0LL;
                v52 = 0;
                v40 = (v38 & 0xFFF) + v39;
                v53 = 0;
                RtlpConstructSwitchJumpRelocationFixup(v40, (unsigned int)v45, a5, (_DWORD)v37, a6, (__int64)&v51);
                RtlpApplyGenericRetpolineFixup((unsigned __int64)v9, a3, &v51, v40);
              }
              v37 = (unsigned int *)((char *)v37 + 2);
            }
            while ( (unsigned __int64)v37 < v36 );
            v34 = v43;
          }
          v10 = a7;
        }
        v35 = (unsigned int *)((char *)v35 + v35[1]);
      }
      return 0;
    }
  }
  return result;
}
