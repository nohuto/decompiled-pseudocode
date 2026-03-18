/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C0164E64 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000A59C (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016E59C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C01D03EC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01D0438 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C01E9C70 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C030DAEC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        struct DXGADAPTER *a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v6; // rdx
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rsi
  struct DXGDEVICE **v19; // r12
  int Device; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // r10d
  struct DXGCONTEXT **v30; // r9
  struct _D3DDDI_CREATECONTEXTFLAGS v31; // ebx
  unsigned int v32; // esi
  __int64 v33; // rdx
  struct DXGCONTEXT **v34; // r13
  unsigned int v35; // r8d
  DXGDEVICE *v36; // r11
  char v37; // al
  int Context; // eax
  unsigned int v39; // ebx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 CurrentProcess; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // kr00_8
  __int64 v56; // rax
  DXGCONTEXT *v57; // rcx
  struct DXGHWQUEUE **v58; // r9
  int v59; // eax
  struct DXGPROCESS *v60; // r8
  volatile signed __int64 *v61; // rax
  struct DXGHWQUEUE **v62; // rax
  struct DXGHWQUEUE *v63; // rcx
  unsigned int v64; // [rsp+60h] [rbp-A0h]
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_QUERYADAPTERINFO v68; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v69[16]; // [rsp+B8h] [rbp-48h] BYREF
  _D3DKMT_CREATEHWQUEUE v70; // [rsp+C8h] [rbp-38h] BYREF
  int v71; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v72; // [rsp+FCh] [rbp-4h]
  unsigned int v73; // [rsp+100h] [rbp+0h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  char v75; // [rsp+138h] [rbp+38h]
  _BYTE v76[144]; // [rsp+140h] [rbp+40h] BYREF

  v6 = *((_QWORD *)this + 2);
  v75 = 0;
  v8 = (struct DXGADAPTER *)(v6 & -(__int64)(*(_QWORD *)(v6 + 2792) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18648LL));
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  if ( Current )
  {
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
    LODWORD(v18) = v17;
    if ( v17 >= 0 )
    {
      v19 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(
                 *((_QWORD *)a2 + 350),
                 (DXGDEVICE **)this + 7,
                 0,
                 2,
                 v8,
                 0,
                 0,
                 1,
                 0LL,
                 0LL,
                 0);
      v18 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v76);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v69, *v19);
        v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
        v18 = v25;
        if ( v25 < 0 )
        {
          v60 = Current;
        }
        else
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent(a2) )
          {
            v53 = *((int *)a2 + 606) < 0x2000 ? 1 : *((_DWORD *)a2 + 72);
            *((_DWORD *)this + 13) = v53;
            if ( v53 > 1 )
            {
              v55 = v53;
              v54 = 8LL * v53;
              if ( !is_mul_ok(v55, 8uLL) )
                v54 = -1LL;
              v56 = operator new[](v54, 0x4B677844u, 256LL, v26);
              *((_QWORD *)this + 8) = v56;
              if ( !v56 )
              {
                WdLogSingleEntry3(4LL, a2, Current, v18);
LABEL_46:
                LODWORD(v18) = -1073741801;
                goto LABEL_21;
              }
            }
          }
          if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
          {
            WdLogSingleEntry2(4LL, a2, Current);
            goto LABEL_46;
          }
          v27 = *((_DWORD *)this + 13);
          v28 = 0LL;
          v64 = 0;
          if ( !v27 )
          {
LABEL_21:
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v69);
            if ( (int)v18 < 0 && *v19 )
            {
              ADAPTER_RENDER::DestroyDevice(*((DXGADAPTER ***)a2 + 350), *v19, 0LL);
              if ( *((_DWORD *)this + 13) > 1u )
              {
                operator delete[](*((void **)this + 8));
                *((_QWORD *)this + 8) = 0LL;
              }
              PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
              *v19 = 0LL;
            }
            else
            {
              if ( a3 )
              {
                *a3 = *v19;
                _InterlockedAdd64((volatile signed __int64 *)*v19 + 8, 1uLL);
              }
              if ( a4 )
              {
                v61 = (volatile signed __int64 *)*((_QWORD *)this + 8);
                if ( *((_DWORD *)this + 13) != 1 )
                  v61 = (volatile signed __int64 *)*v61;
                *a4 = (struct DXGCONTEXT *)v61;
                _InterlockedAdd64(v61 + 4, 1uLL);
              }
              if ( a5 )
              {
                v62 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
                v63 = *v62;
                *a5 = *v62;
                if ( v63 )
                  _InterlockedAdd64((volatile signed __int64 *)v63 + 13, 1uLL);
              }
            }
            goto LABEL_26;
          }
          while ( 1 )
          {
            v29 = *((_DWORD *)a2 + 704);
            v30 = (struct DXGCONTEXT **)((char *)this + 64);
            v72 = v29;
            v31.0 = 0;
            v71 = 0;
            if ( v27 == 1 )
              v32 = *((_DWORD *)a2 + 705);
            else
              v32 = v28;
            v73 = 1 << v32;
            if ( (*((_DWORD *)a2 + 109) & 0x10) != 0 )
            {
              memset(&v68, 0, 24);
              v68.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v68.OutputDataSize = 0LL;
              v68.pOutputData = &v71;
              v68.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo(a2, &v68, v28) < 0 )
              {
                WdLogSingleEntry1(1LL, 2397LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2397LL, 0LL, 0LL, 0LL, 0LL);
              }
              LODWORD(v28) = v64;
              v30 = (struct DXGCONTEXT **)((char *)this + 64);
              v29 = v72;
            }
            v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 350) + 16LL) + 2680LL) + 344LL * v32 + 32);
            if ( v33 && (*(_BYTE *)(74LL * v29 + v33 + 68) & 1) != 0 )
              v31.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) == 1 )
              v34 = v30;
            else
              v34 = (struct DXGCONTEXT **)((char *)*v30 + 8 * (unsigned int)v28);
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v19 + 2), 0, v29)
              || (v37 = 1, *((_BYTE *)a2 + 2729)) )
            {
              v37 = 0;
            }
            Context = DXGDEVICE::CreateContext(v36, v34, v35, v73, v31, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v37);
            v18 = Context;
            if ( Context < 0 )
              break;
            if ( v31.Value >= 0x10 )
            {
              v57 = *v34;
              v58 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v70, 0, sizeof(v70));
              if ( v64 < *((_DWORD *)this + 24) )
                v58 += v64;
              v59 = DXGCONTEXT::CreateHwQueue(v57, &v70, 0LL, v58);
              LODWORD(v18) = v59;
              if ( v59 < 0 )
              {
                WdLogSingleEntry4(4LL, *v34, a2, Current, v59);
                goto LABEL_21;
              }
            }
            v27 = *((_DWORD *)this + 13);
            v28 = v64 + 1;
            v64 = v28;
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_21;
          }
          v60 = Current;
        }
        WdLogSingleEntry3(4LL, a2, v60, v18);
        goto LABEL_21;
      }
      CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
      WdLogSingleEntry3(2LL, a2, CurrentProcess, v18);
      v52 = PsGetCurrentProcess(v49, v48, v50, v51);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v52,
        v18,
        0LL,
        0LL);
LABEL_26:
      v39 = v18;
      goto LABEL_27;
    }
    if ( a2 == v8 || *((_DWORD *)a2 + 50) == 1 && !*((_BYTE *)a2 + 2705) )
    {
      WdLogSingleEntry4(3LL, a2, v8, Current, v17);
      goto LABEL_26;
    }
    WdLogSingleEntry1(3LL, a2);
    v39 = -1073741267;
  }
  else
  {
    v41 = PsGetCurrentProcess(v14, v13, v15, v16);
    v39 = -1073741823;
    WdLogSingleEntry2(2LL, v41, -1073741823LL);
    v46 = PsGetCurrentProcess(v43, v42, v44, v45);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get DXGPROCESS for current CSRSS process 0x%I64x, returning 0x%I64x.",
      v46,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_27:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
  if ( v75 )
    KeUnstackDetachProcess(&ApcState);
  return v39;
}
