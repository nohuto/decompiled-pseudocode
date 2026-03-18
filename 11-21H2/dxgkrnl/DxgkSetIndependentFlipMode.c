/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C0161E30
 * Callers:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C00089D4 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C0008C84 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C007902C (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0008B00 (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0008B2C (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  int v9; // r13d
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  _QWORD *v14; // rbx
  __int64 v15; // r15
  int v16; // eax
  int v17; // r14d
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v26; // ebx
  unsigned int VidPnSourceId; // ebx
  unsigned int PlaneIndex; // eax
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rdi
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+54h] [rbp-ACh]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  _DWORD *v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char v44; // [rsp+B0h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v46[144]; // [rsp+C0h] [rbp-40h] BYREF

  v9 = 0;
  v42 = -1;
  v37 = a7;
  *a8 = 0;
  v36 = a4;
  v40 = a3;
  v41 = a2;
  v39 = a8;
  v38 = a9;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2094;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a9, &EventProfilerEnter, a3, 2094);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2094);
  HandleInformation = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v12 = v11;
  v13 = -1073741788LL;
  if ( v11 == -1073741788 )
    goto LABEL_31;
  if ( v11 < 0 )
  {
    v13 = v11;
LABEL_31:
    WdLogSingleEntry2(3LL, Handle, v13);
    goto LABEL_15;
  }
  v14 = Object;
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 80LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, (struct DXGADAPTER *const)v15, 0LL);
  if ( *(_QWORD *)(v15 + 2792) )
  {
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
    v12 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(3LL, v15, v16);
    }
    else
    {
      v17 = 0;
      v18 = a6;
      v32 = a6;
      v34 = v37;
      v33 = 0LL;
      if ( a6 )
      {
        do
        {
          if ( (v18 & 1) != 0 )
            break;
          ++v17;
          v18 >>= 1;
        }
        while ( v18 );
        v32 = v18;
        LODWORD(v33) = v17;
      }
      while ( v18 )
      {
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32) >= *(_DWORD *)(*(_QWORD *)(v15 + 2792) + 96LL) )
        {
          v12 = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid vidPnSourceMask. Returning 0x%I64x",
            -1073741811LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_14;
        }
        v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2] + 80LL) + 16LL) + 2632LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32) >= v26 )
        {
          v12 = -1073741811;
          VidPnSourceId = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32);
          PlaneIndex = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32);
          WdLogSingleEntry4(2LL, PlaneIndex, VidPnSourceId, a6, -1073741811LL);
          v29 = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32);
          v30 = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v32);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid plane index 0x%I64x specified for VidPnSource 0x%I64x. Source mask is 0x%I64x. Returning 0x%I64x",
            v30,
            v29,
            a6,
            -1073741811LL,
            0LL);
          goto LABEL_14;
        }
        v18 >>= 1;
        v32 = v18;
        if ( v18 )
        {
          do
          {
            if ( (v18 & 1) != 0 )
              break;
            ++v17;
            v18 >>= 1;
          }
          while ( v18 );
          v32 = v18;
          LODWORD(v33) = v17;
        }
        v14 = Object;
        HIDWORD(v33) = ++v9;
      }
      v19 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
          + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v20 = (unsigned __int16)((unsigned __int8)((v19 & 0xF) + ((v19 >> 4) & 0xF))
                             + (unsigned __int8)((unsigned __int16)((v19 & 0xF0F) + ((v19 >> 4) & 0xF0F)) >> 8))
          + (((((v19 & 0xF0F0F0F) + ((v19 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v19 & 0xF0F0F0F) + ((v19 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF)) >> 16);
      if ( (unsigned int)v20 <= 1 || *(int *)(v15 + 2692) >= 2400 )
      {
        v21 = *(_QWORD *)(v15 + 2800);
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 624) + 8LL);
        if ( v36 )
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, _DWORD *, __int64))(v22 + 392))(
            *(_QWORD *)(v21 + 632),
            a6,
            v41,
            v40,
            v37,
            a5,
            v39,
            v38);
        else
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, char, _DWORD *, __int64))(v22 + 400))(
            *(_QWORD *)(v21 + 632),
            a6,
            v41,
            v40,
            v37,
            a5,
            1,
            v39,
            v38);
      }
      else
      {
        v12 = -1073741811;
        v31 = (unsigned int)v20;
        WdLogSingleEntry3(2LL, v20, a6, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Attempting IFlip on %xI64x sources for a non-WDDM 2.4 driver. Source mask is %xI64x. Returning 0x%I64x",
          v31,
          a6,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
  }
  else
  {
    v12 = -1073741823;
  }
LABEL_14:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
LABEL_15:
  if ( Object )
    ObfDereferenceObject(Object);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
  return v12;
}
