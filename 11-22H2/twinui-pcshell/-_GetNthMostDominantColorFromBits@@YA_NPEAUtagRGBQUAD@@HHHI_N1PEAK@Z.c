/*
 * XREFs of ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x180799F98
 * Callers:
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x180799F20 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180397CBC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1803F1B60 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$SortEx@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAJAEBVCBucketComparator@@@Z @ 0x1807999C4 (--$SortEx@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUB.c)
 *     ??0BUCKET@@QEAA@XZ @ 0x180799C10 (--0BUCKET@@QEAA@XZ.c)
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x180799CD0 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x18079B740 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x18079B9D0 (DPA_InsertPtr.c)
 */

char __fastcall _GetNthMostDominantColorFromBits(
        struct tagRGBQUAD *p,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  __int64 v10; // rsi
  char v13; // r13
  void *v14; // r8
  int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  int v19; // r14d
  __int64 v20; // rdx
  HDPA *v21; // rbx
  __int64 v22; // rsi
  BUCKET *v23; // rax
  HDPA *v24; // rax
  HDPA *v25; // rdi
  void *v26; // r8
  unsigned __int64 v27; // rcx
  HDPA **v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rax
  int v31; // edi
  int v32; // ecx
  int v33; // ebx
  __int64 v34; // r8
  unsigned __int8 **v35; // r9
  unsigned __int8 *v36; // rdx
  unsigned int v37; // esi
  __int64 v38; // rdi
  struct _DPA **v39; // rbx
  __int64 v41; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-D0h]
  __int64 v44; // [rsp+40h] [rbp-C8h]
  __int64 v45; // [rsp+48h] [rbp-C0h]
  unsigned int *v46; // [rsp+50h] [rbp-B8h]
  HDPA hdpa[28]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = a8;
  v10 = a2;
  v46 = a8;
  v13 = 0;
  `vector constructor iterator'((char *)hdpa, 8LL, 27LL, (void (__fastcall *)(char *))BUCKET::BUCKET);
  v15 = 0;
  if ( a3 > 0 )
  {
    v16 = (unsigned int)a3;
    v17 = 4LL * (a4 - (int)v10);
    do
    {
      if ( (int)v10 > 0 )
      {
        v18 = v10;
        do
        {
          if ( p->rgbReserved )
          {
            DPA_InsertPtr(hdpa[p->rgbBlue / 0x56u + 3 * (p->rgbGreen / 0x56u + 3 * (p->rgbRed / 0x56u))], 0x7FFFFFFF, p);
            ++v15;
          }
          ++p;
          --v18;
        }
        while ( v18 );
      }
      p = (struct tagRGBQUAD *)((char *)p + v17);
      --v16;
    }
    while ( v16 );
    v8 = v46;
  }
  v19 = 0;
  pv = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&pv,
              0x1BuLL,
              v14) >= 0 )
  {
    v21 = hdpa;
    v22 = 27LL;
    while ( 1 )
    {
      v23 = (BUCKET *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v23 )
      {
        v24 = (HDPA *)BUCKET::BUCKET(v23);
        v25 = v24;
        if ( v24 )
        {
          DPA_Clone(*v21, *v24);
          v27 = v43;
          if ( v43 != v45 )
            goto LABEL_17;
          if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)&pv,
                      v43 + 1,
                      v26) >= 0 )
            break;
        }
      }
LABEL_19:
      ++v21;
      if ( !--v22 )
      {
        if ( (int)CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::SortEx<CBucketComparator>(
                    (__int64)&pv,
                    (__int64)&v41) >= 0 )
        {
          v29 = (__int64 *)*((_QWORD *)pv + v43 - 1);
          if ( v29 )
          {
            v30 = *v29;
            v31 = 0;
            if ( v30 )
              v32 = *(_DWORD *)v30;
            else
              v32 = 0;
            v33 = 0;
            v34 = v32;
            if ( v32 > 0 )
            {
              v35 = *(unsigned __int8 ***)(v30 + 8);
              v19 = v32;
              do
              {
                v36 = *v35++;
                LODWORD(v22) = v36[2] + (_DWORD)v22;
                v33 += v36[1];
                v31 += *v36;
                --v34;
              }
              while ( v34 );
            }
            if ( MulDiv(v32, 100, v15) >= 7 && v15 >= 5 )
            {
              v13 = 1;
              v20 = (unsigned int)((int)v22 >> 31);
              LODWORD(v20) = (int)v22 % v19;
              *v8 = (unsigned __int8)((int)v22 / v19) | ((unsigned __int8)(v31 / v19) << 16) | ((unsigned __int8)(v33 / v19) << 8);
            }
          }
        }
        v37 = 0;
        if ( v43 )
        {
          v38 = 0LL;
          do
          {
            v39 = (struct _DPA **)*((_QWORD *)pv + v38);
            if ( v39 )
            {
              CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(*((struct _DPA ***)pv + v38));
              if ( *v39 )
                CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(v39);
              operator delete(v39);
            }
            ++v37;
            *((_QWORD *)pv + v38) = 0LL;
            v38 = v37;
          }
          while ( v37 < v43 );
        }
        goto LABEL_38;
      }
    }
    v27 = v43;
LABEL_17:
    v43 = v27 + 1;
    v28 = (HDPA **)((char *)pv + 8 * v27);
    if ( v28 )
      *v28 = v25;
    goto LABEL_19;
  }
LABEL_38:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v43 = 0LL;
  v45 = 0LL;
  `vector destructor iterator'((char *)hdpa, v20, 27LL, (void (__fastcall *)(char *))BUCKET::~BUCKET);
  return v13;
}
