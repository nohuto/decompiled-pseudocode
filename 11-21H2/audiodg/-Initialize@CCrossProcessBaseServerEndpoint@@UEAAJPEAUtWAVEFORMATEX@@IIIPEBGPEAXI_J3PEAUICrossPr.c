/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x14001EB20
 * Callers:
 *     ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140020980 (-Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossP.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x14000A278 (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001F108 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001F13C (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001F18C (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001F1C8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400242D8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z @ 0x140088A5C (-HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 *a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        struct ICrossProcessMemoryManager *a11,
        struct ICrossProcessEventManager *a12,
        struct ICrossProcessMemory **a13,
        struct ICrossProcessEvent **a14)
{
  __int64 v14; // rsi
  char v18; // r15
  char *v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edi
  void *v23; // rax
  unsigned __int64 v24; // rcx
  void *v25; // rax
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  unsigned int v28; // edx
  int cbSize; // eax
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // esi
  unsigned int v34; // esi
  unsigned __int64 v35; // rdi
  void *v36; // rax
  unsigned __int64 v37; // rcx
  void *v38; // rax
  unsigned int v39; // ecx
  __int64 (__fastcall *v40)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *); // rdi
  int v41; // eax
  unsigned int v42; // edi
  _DWORD *v43; // rdi
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // edx
  __int32 v47; // r12d
  __int64 v48; // rcx
  struct ICrossProcessEvent *v49; // rcx
  __int64 v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned int v57; // ecx
  unsigned int v58; // r8d
  unsigned int v59; // ecx
  int v60; // eax
  __int64 v61; // r9
  unsigned __int64 v62; // r10
  unsigned int v63; // r11d
  unsigned __int64 v64; // r9
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned int v67; // ecx
  unsigned int v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r9
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  __int64 (__fastcall *v74)(struct ICrossProcessEventManager *, char *); // rdi
  void *v75; // rax
  int v76; // r8d
  void *v77; // rcx
  unsigned int v78; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v79; // [rsp+24h] [rbp-4Ch]
  int v80; // [rsp+28h] [rbp-48h]
  int v81; // [rsp+2Ch] [rbp-44h]
  unsigned int v82; // [rsp+30h] [rbp-40h]
  __int64 v83; // [rsp+38h] [rbp-38h] BYREF
  _DWORD *v84; // [rsp+40h] [rbp-30h]
  unsigned int v85; // [rsp+48h] [rbp-28h]
  unsigned int v86; // [rsp+4Ch] [rbp-24h]
  unsigned int v87; // [rsp+50h] [rbp-20h]
  PVOID pvAddress; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v89; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v90; // [rsp+64h] [rbp-Ch]
  unsigned __int64 v91; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int Size; // [rsp+B0h] [rbp+40h]

  v14 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 392));
  v18 = 1;
  if ( *((_DWORD *)this - 88) == 1 )
  {
    v52 = -2005139440;
    v53 = 591LL;
  }
  else
  {
    if ( a13 )
    {
      *a13 = 0LL;
      v19 = (char *)this - 408;
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 51) + 48LL))((char *)this - 408, a8);
      *((_DWORD *)this - 80) = a2->nBlockAlign;
      *((_DWORD *)this - 79) = a2->nChannels;
      *((_DWORD *)this - 75) = 1;
      if ( a2->wFormatTag == 3 )
        goto LABEL_49;
      if ( a2->wFormatTag == 0xFFFE )
      {
        v51 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v51 )
          v51 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v51 )
LABEL_49:
          *((_DWORD *)this - 75) = 3;
      }
      *((float *)this - 63) = (float)(int)a2->nSamplesPerSec;
      *((_DWORD *)this - 77) = a2->wBitsPerSample;
      *((_DWORD *)this - 76) = GetBitsPerSample(a2);
      if ( (unsigned __int64)(v14 * v20) > 0xFFFFFFFF )
      {
        v42 = -2147024362;
        v54 = 627LL;
      }
      else
      {
        v21 = v14 * v20;
        if ( *((_DWORD *)this + 12) != 1 )
          v21 = 0;
        v80 = v21;
        v22 = v14 * v20;
        v23 = AERTCreateZoneHeap((unsigned int)(v14 * v20));
        *((_QWORD *)this - 33) = v23;
        if ( v23 )
        {
          v25 = AE_ALLOCATE_SAFEMULT(v24, v22, v23, AERTZoneAllocate);
          *((_QWORD *)this - 37) = v25;
          if ( !v25 )
          {
            v42 = -2147024882;
            v55 = 643LL;
LABEL_109:
            v64 = v42;
            goto LABEL_110;
          }
          v26 = *((_DWORD *)this - 80);
          if ( a3 % v26 )
            a3 += v26 - a3 % v26;
          *((_DWORD *)this - 64) = a3;
          if ( *((_DWORD *)this + 12) == 1 )
          {
            v27 = a3 / v26 / (unsigned int)v14 + 3;
            if ( v27 < 0x19 )
              v27 = 25;
          }
          else
          {
            v27 = 0;
          }
          v85 = v27;
          v28 = 0;
          v79 = 0;
          if ( a9 )
          {
            if ( *((_DWORD *)this + 12) == 1 )
            {
              v28 = a3 / v26 / a5 + 3;
              if ( v28 < 0x19 )
                v28 = 25;
            }
            v79 = v28;
          }
          cbSize = a2->cbSize;
          Size = cbSize + 200;
          v30 = (cbSize + 527) & 0xFFFFFF80;
          v87 = v30;
          v86 = 0;
          if ( a9 )
          {
            v56 = (unsigned __int64)v28 << 6;
            if ( v56 > 0xFFFFFFFF )
            {
              v55 = 696LL;
            }
            else
            {
              v57 = v56 + v30;
              if ( v57 < (unsigned int)v56 )
              {
                v55 = 697LL;
              }
              else
              {
                v58 = v57 + 1023;
                if ( v57 + 1023 < v57 )
                {
                  v55 = 698LL;
                }
                else
                {
                  v86 = v58 & 0xFFFFFC00;
                  v59 = (v58 & 0xFFFFFC00) + v56;
                  if ( v59 < (unsigned int)v56 )
                  {
                    v55 = 702LL;
                  }
                  else
                  {
                    v33 = v59 + 1023;
                    if ( v59 + 1023 >= v59 )
                      goto LABEL_19;
                    v55 = 703LL;
                  }
                }
              }
            }
          }
          else
          {
            v31 = (unsigned __int64)v27 << 6;
            if ( v31 > 0xFFFFFFFF )
            {
              v55 = 688LL;
            }
            else
            {
              v32 = v31 + v30;
              if ( v32 < (unsigned int)v31 )
              {
                v55 = 689LL;
              }
              else
              {
                v33 = v32 + 1023;
                if ( v32 + 1023 >= v32 )
                {
LABEL_19:
                  v34 = v33 & 0xFFFFFC00;
                  v90 = v34;
                  LODWORD(v35) = 0;
                  v91 = 0LL;
                  v78 = 0;
                  v81 = 0;
                  v82 = 0;
                  if ( !a10 )
                  {
LABEL_20:
                    v36 = (void *)AERTGetDLLRTHeap();
                    v38 = AE_ALLOCATE_SAFEMULT(v37, Size, v36, (void *(*)(unsigned __int64, void *))AERTAllocate);
                    *((_QWORD *)this - 41) = v38;
                    if ( v38 )
                    {
                      memset_0(v38, 0, Size);
                      *(_DWORD *)(*((_QWORD *)this - 41) + 152LL) = -1;
                      *(_DWORD *)(*((_QWORD *)this - 41) + 172LL) = 0;
                      *(_DWORD *)(*((_QWORD *)this - 41) + 176LL) = 0;
                      *(_DWORD *)(*((_QWORD *)this - 41) + 144LL) = 0;
                      *(_DWORD *)(*((_QWORD *)this - 41) + 148LL) = 0;
                      *(_QWORD *)(*((_QWORD *)this - 41) + 136LL) = (unsigned int)(int)((double)(int)(a3 / *((_DWORD *)this - 80))
                                                                                      * 10000000.0
                                                                                      / *((float *)this - 63)
                                                                                      + 0.5);
                      if ( a10 )
                      {
                        LODWORD(v84) = v82 + v35;
                        if ( v82 + (unsigned int)v35 >= v82 )
                        {
LABEL_24:
                          v83 = 0LL;
                          v40 = *(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, _QWORD, __int64 *))(*(_QWORD *)a11 + 32LL);
                          wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v83);
                          v41 = v40(a11, (unsigned int)v84, &v83);
                          v42 = v41;
                          if ( v41 < 0 )
                          {
                            v70 = 786LL;
                          }
                          else
                          {
                            v41 = (*(__int64 (__fastcall **)(__int64, unsigned int *, PVOID *))(*(_QWORD *)v83 + 32LL))(
                                    v83,
                                    &v89,
                                    &pvAddress);
                            v42 = v41;
                            if ( v41 < 0 )
                            {
                              v70 = 791LL;
                            }
                            else
                            {
                              if ( v89 < (unsigned int)v84 )
                              {
                                v42 = -2147024882;
                                v71 = 2147942414LL;
                                v70 = 793LL;
LABEL_98:
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)v70,
                                  (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                                  (const char *)v71,
                                  v78);
LABEL_41:
                                ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v83);
                                goto LABEL_42;
                              }
                              *((_DWORD *)this - 78) = a4;
                              v43 = pvAddress;
                              v84 = pvAddress;
                              **((_DWORD **)this - 41) = Size;
                              *(_DWORD *)(*((_QWORD *)this - 41) + 132LL) = v85;
                              v44 = *((_QWORD *)this - 41);
                              if ( a9 )
                              {
                                v72 = v79;
                                *(_DWORD *)(v44 + 132) = v79;
                                *(_DWORD *)(*((_QWORD *)this - 41) + 144LL) = v72;
                                *(_DWORD *)(*((_QWORD *)this - 41) + 152LL) = v87;
                                v44 = *((_QWORD *)this - 41);
                                v45 = v86;
                              }
                              else
                              {
                                v45 = v87;
                              }
                              *(_DWORD *)(v44 + 156) = v45;
                              v46 = v90;
                              *(_DWORD *)(*((_QWORD *)this - 41) + 160LL) = v90;
                              *(_DWORD *)(*((_QWORD *)this - 41) + 164LL) = v46 + a3;
                              v47 = v46 + v80 + a3;
                              *(_DWORD *)(*((_QWORD *)this - 41) + 168LL) = v47;
                              if ( a10 )
                              {
                                *(_DWORD *)(*((_QWORD *)this - 41) + 148LL) = v81;
                                v73 = v82;
                                *(_DWORD *)(*((_QWORD *)this - 41) + 172LL) = v82;
                                *(_DWORD *)(*((_QWORD *)this - 41) + 176LL) = v91 + v73;
                              }
                              if ( !a12 )
                              {
                                if ( a6 )
                                {
                                  StringCchCopyW((unsigned __int16 *)(*((_QWORD *)this - 41) + 4LL), 0x40uLL, a6);
                                  a7[4] = (char *)this + 24;
                                  *((_DWORD *)this + 9) = *((_DWORD *)a7 + 4);
                                }
                                goto LABEL_34;
                              }
                              v74 = *(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)a12 + 32LL);
                              wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 1);
                              v41 = v74(a12, (char *)this + 8);
                              v42 = v41;
                              if ( v41 >= 0 )
                              {
                                *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1)
                                                                                          + 24LL))(*((_QWORD *)this + 1));
                                v43 = v84;
LABEL_34:
                                memcpy_0((void *)(*((_QWORD *)this - 41) + 180LL), a2, a2->cbSize + 18LL);
                                memcpy_0(v43 + 50, *((const void **)this - 41), Size);
                                memset_0(v43, 0, 0xC0uLL);
                                *((_QWORD *)this - 42) = v43;
                                WerRegisterMemoryBlock(v43, 0xC0u);
                                v48 = *((_QWORD *)this - 41);
                                *((_QWORD *)this - 36) = (char *)pvAddress + *(unsigned int *)(v48 + 156);
                                if ( a9 )
                                  *((_QWORD *)this - 34) = (char *)pvAddress + *(unsigned int *)(v48 + 152);
                                *(_DWORD *)(*((_QWORD *)this - 42) + 180LL) = -1;
                                if ( a10 )
                                {
                                  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 42) + 180LL), v47);
                                  *((_QWORD *)this - 35) = (char *)pvAddress
                                                         + *(unsigned int *)(*((_QWORD *)this - 42) + 180LL);
                                }
                                v43[48] = 1162888004;
                                wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=(
                                  (char *)this - 344,
                                  v83);
                                wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(
                                  &v83,
                                  a13);
                                v49 = (struct ICrossProcessEvent *)*((_QWORD *)this + 1);
                                if ( v49 )
                                {
                                  *a14 = v49;
                                  (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v49 + 8LL))(v49);
                                }
                                else
                                {
                                  *a14 = 0LL;
                                }
                                *((_DWORD *)this - 88) = 1;
                                v18 = 0;
                                v42 = 0;
                                goto LABEL_41;
                              }
                              v70 = 827LL;
                            }
                          }
                          v71 = (unsigned int)v41;
                          goto LABEL_98;
                        }
                        v69 = 776LL;
                      }
                      else
                      {
                        v39 = a3 + v80;
                        if ( a3 + v80 < a3 )
                        {
                          v69 = 780LL;
                        }
                        else
                        {
                          LODWORD(v84) = v34 + v39;
                          if ( v34 + v39 >= v39 )
                            goto LABEL_24;
                          v69 = 781LL;
                        }
                      }
                      v42 = -2147024362;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v69,
                        (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                        (const char *)0x80070216LL,
                        v78);
LABEL_42:
                      if ( v18 )
                      {
                        v75 = (void *)AERTGetDLLRTHeap();
                        AERTFree(*((void **)v19 + 10), v75, v76);
                        *((_QWORD *)v19 + 10) = 0LL;
                      }
                      goto LABEL_44;
                    }
                    v42 = -2147024882;
                    v55 = 729LL;
                    goto LABEL_109;
                  }
                  v60 = HNSTIME_TO_FRAMES_DOUBLE_SAFE(a10, a2->nSamplesPerSec, &v78);
                  v42 = v60;
                  if ( v60 < 0 )
                  {
                    v64 = (unsigned int)v60;
                    v55 = 714LL;
LABEL_110:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v55,
                      (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                      (const char *)v64,
                      v78);
LABEL_44:
                    if ( v18 )
                    {
                      v77 = (void *)*((_QWORD *)v19 + 18);
                      if ( v77 )
                      {
                        AERTDestroyZoneHeap(v77);
                        *((_QWORD *)v19 + 18) = 0LL;
                      }
                    }
                    goto LABEL_45;
                  }
                  v35 = v78 * v61;
                  v91 = v35;
                  if ( v35 > v62 )
                  {
                    v55 = 715LL;
                  }
                  else
                  {
                    v78 *= (_DWORD)v61;
                    if ( *((_DWORD *)this + 12) == 1 )
                    {
                      v65 = (unsigned int)v35 / (unsigned int)v61 / a5 + 3;
                      if ( (unsigned int)v65 < 0x19 )
                        v65 = 25LL;
                    }
                    else
                    {
                      v65 = v63;
                    }
                    v81 = v65;
                    v66 = v65 << 6;
                    if ( v66 > v62 )
                    {
                      v55 = 722LL;
                    }
                    else
                    {
                      v67 = v34 + v66;
                      if ( v34 + (unsigned int)v66 < (unsigned int)v66 )
                      {
                        v55 = 723LL;
                      }
                      else
                      {
                        v68 = v67 + a3;
                        if ( v67 + a3 < v67 )
                        {
                          v55 = 724LL;
                        }
                        else
                        {
                          v82 = v68 + v80;
                          if ( v68 + v80 >= v68 )
                            goto LABEL_20;
                          v55 = 725LL;
                        }
                      }
                    }
                  }
                  goto LABEL_108;
                }
                v55 = 690LL;
              }
            }
          }
LABEL_108:
          v42 = -2147024362;
          goto LABEL_109;
        }
        v42 = -2147024882;
        v54 = 634LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v54,
        (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)v42,
        v78);
LABEL_45:
      LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 16));
      return v42;
    }
    v52 = -2147024809;
    v53 = 593LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v53,
    (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)v52,
    v78);
  return v52;
}
