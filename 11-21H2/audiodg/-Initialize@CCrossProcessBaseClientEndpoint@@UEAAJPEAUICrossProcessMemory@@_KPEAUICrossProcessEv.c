/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140088AB0
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x14008A240 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcess.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x14000A278 (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001F108 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ??4?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessMemory@@@Z @ 0x14001F13C (--4-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProc.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001F1C8 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140021C74 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x140031D3F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProcessEvent@@@Z @ 0x140088170 (--4-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICrossProce.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140088DE4 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        CCrossProcessBaseClientEndpoint *this,
        struct ICrossProcessMemory *a2,
        __int64 a3,
        struct ICrossProcessEvent *a4,
        struct ICrossProcessEvent *a5,
        unsigned int a6)
{
  char *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  struct ControlData *v15; // r15
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  char v19; // r14
  __int64 v20; // rdx
  const struct tWAVEFORMATEX *v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rcx
  void *v28; // r8
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  struct ControlData *v32; // rdx
  void *v33; // rcx
  void *v34; // rax
  int v35; // r8d
  struct ControlData *v37; // [rsp+20h] [rbp-10h] BYREF
  __int64 v38; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v40; // [rsp+50h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 392));
  v9 = (char *)this - 408;
  if ( !*((_DWORD *)this - 88) )
  {
    if ( !a2 )
    {
      v10 = -2147024809;
      v11 = 1034LL;
      goto LABEL_5;
    }
    v38 = 0LL;
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=(&v38, (__int64)a2);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)a4);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a5);
    v37 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, char *, struct ControlData **))(*(_QWORD *)v38 + 32LL))(v38, &v40, &v37);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 1046LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)v13);
LABEL_30:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v38);
      goto LABEL_31;
    }
    v15 = v37;
    v16 = (void *)AERTGetDLLRTHeap();
    v18 = (void *)AE_ALLOCATE_SAFEMULT(
                    v17,
                    *((unsigned int *)v15 + 50),
                    v16,
                    (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
    *((_QWORD *)this - 41) = v18;
    if ( !v18 )
    {
      v10 = -2147024882;
      v13 = 2147942414LL;
      v14 = 1053LL;
      goto LABEL_10;
    }
    memcpy_0(v18, (char *)v15 + 200, *((unsigned int *)v15 + 50));
    v19 = 1;
    if ( CCrossProcessBaseEndpoint::IsValidControlData((CCrossProcessBaseClientEndpoint *)((char *)this - 408), v15) )
    {
      *((_QWORD *)this - 28) = 0LL;
      *((_QWORD *)this - 30) = 0LL;
      v21 = (const struct tWAVEFORMATEX *)*((_QWORD *)this - 41);
      *((_DWORD *)this - 80) = v21[10].nBlockAlign;
      *((float *)this - 63) = (float)(int)v21[10].nSamplesPerSec;
      *((_DWORD *)this - 76) = GetBitsPerSample(v21 + 10);
      v24 = *(_DWORD *)(v23 + 164) - *(_DWORD *)(v23 + 160);
      *((_DWORD *)this - 64) = v24;
      v25 = v24 / v22;
      v26 = a6;
      if ( a6 <= v25 )
      {
        if ( !a6 )
          v26 = v25;
        *((_DWORD *)this - 78) = v26;
        v28 = (void *)AERTCreateZoneHeap(v22 * v26);
        *((_QWORD *)this - 33) = v28;
        if ( v28 )
        {
          v29 = AE_ALLOCATE_SAFEMULT(
                  v27,
                  (unsigned int)(*((_DWORD *)this - 80) * *((_DWORD *)this - 78)),
                  v28,
                  AERTZoneAllocate);
          *((_QWORD *)this - 37) = v29;
          if ( v29 )
          {
            v32 = v37;
            *((_QWORD *)this - 42) = v37;
            *((_QWORD *)this - 36) = (char *)v32 + *(unsigned int *)(*((_QWORD *)this - 41) + 156LL);
            if ( *((_DWORD *)v32 + 45) != -1 )
              *((_QWORD *)this - 35) = (char *)v37 + *(unsigned int *)(*((_QWORD *)this - 42) + 180LL);
            _InterlockedExchange((volatile __int32 *)this - 88, 1);
            wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::operator=((__int64 *)this - 43, v38);
            v19 = 0;
            v10 = 0;
          }
          else
          {
            v10 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44D,
              (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              (const char *)0x8007000ELL);
          }
          if ( v19 )
          {
            v33 = (void *)*((_QWORD *)v9 + 18);
            if ( v33 )
            {
              AERTDestroyZoneHeap(v33, v30, v31);
              *((_QWORD *)v9 + 18) = 0LL;
            }
          }
          goto LABEL_28;
        }
        v10 = -2147024882;
        v20 = 1092LL;
      }
      else
      {
        v10 = -2147024809;
        v20 = 1086LL;
      }
    }
    else
    {
      v10 = -2005139387;
      v20 = 1062LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v10);
LABEL_28:
    if ( v19 )
    {
      v34 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)v9 + 10), v34, v35);
      *((_QWORD *)v9 + 10) = 0LL;
    }
    goto LABEL_30;
  }
  v10 = -2005139440;
  v11 = 1033LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)v10);
LABEL_31:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 16));
  return v10;
}
