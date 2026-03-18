/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01B3840
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0017114 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C004794C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00479C4 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01B4018 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C01BB2C4 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022EAD4 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C02D70FC (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // r13
  DXGALLOCATION *v12; // rax
  __int64 v13; // rbx
  DXGADAPTERALLOCATION_VGPU *v14; // rcx
  __int64 v15; // rbx
  DXGADAPTERALLOCATION **v16; // rdi
  DXGADAPTERALLOCATION *v17; // rsi
  __int64 Pool2; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  int IsEnabledDeviceUsage; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  DXGADAPTERALLOCATION_VGPU *v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+98h] [rbp+10h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry1(1LL, 2905LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2905LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v31 = 1;
    v11 = *(_QWORD *)(*((_QWORD *)a4 + 7) + 144LL);
  }
  else
  {
    v31 = 0;
    v11 = 0LL;
  }
  v30 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1901) & 1) != 0 )
      {
        v12 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
        v13 = (__int64)v12;
        if ( v12 )
        {
          DXGALLOCATION::DXGALLOCATION(v12, this);
          *(_DWORD *)(v13 + 72) |= 0x40000u;
          *(_DWORD *)(v13 + 96) = 0;
          *(_QWORD *)(v13 + 104) = 0LL;
          *(_QWORD *)(v13 + 120) = 0LL;
          *(_DWORD *)(v13 + 128) = 0;
        }
        else
        {
          v13 = 0LL;
        }
        if ( !v13 )
          goto LABEL_14;
      }
      else
      {
        Pool2 = ExAllocatePool2(257LL, 96LL, 1265072196LL);
        v13 = Pool2;
        if ( !Pool2 )
          goto LABEL_14;
        *(_QWORD *)(Pool2 + 8) = this;
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_QWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(_QWORD *)(Pool2 + 64) = 0LL;
        *(_DWORD *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 88));
      }
      v20 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v23 = *(_DWORD *)(v20 + 272);
          if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, &EventBlockThread, v22, v23);
        }
        ExAcquirePushLockExclusiveEx(v20 + 248, 0LL);
      }
      *(_QWORD *)(v20 + 256) = KeGetCurrentThread();
      IsEnabledDeviceUsage = Feature_1344054585__private_IsEnabledDeviceUsage();
      *(_DWORD *)(v13 + 16) = HMGRTABLE::AllocHandle(v20 + 280, v13, 5LL, 0LL, IsEnabledDeviceUsage != 0);
      DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v13);
      *(_QWORD *)(v20 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_DWORD *)(v13 + 16) )
      {
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v13);
        goto LABEL_15;
      }
      *(_QWORD *)(v13 + 40) = a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v13;
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 168)) )
      {
        WdLogSingleEntry1(1LL, 8190LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
          8190LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_QWORD *)(v13 + 56) = 0LL;
      v26 = (__int64)*a3;
      *(_QWORD *)(v13 + 64) = *a3;
      if ( v26 )
        *(_QWORD *)(v26 + 56) = v13;
      *a3 = (struct DXGALLOCATION *)v13;
      if ( v31 )
      {
        v27 = (*(_DWORD *)(v13 + 72) & 0x40000) == 0;
        v14 = (DXGADAPTERALLOCATION_VGPU *)(v11 - 48);
        v11 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v13 + 48) = v14;
        if ( !v27 )
          *(_DWORD *)(v13 + 120) = *((_DWORD *)v14 + 28);
        goto LABEL_16;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
      {
        v28 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
        if ( v28 )
        {
          v14 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v28);
          if ( v14 )
            goto LABEL_52;
        }
      }
      else
      {
        v29 = operator new[](0x40uLL, 0x4B677844u, 256LL);
        v14 = (DXGADAPTERALLOCATION_VGPU *)v29;
        if ( v29 )
        {
          *(_DWORD *)(v29 + 4) = 0;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_QWORD *)(v29 + 32) = 0LL;
          *(_DWORD *)(v29 + 40) = 0;
          *(_QWORD *)(v29 + 56) = 0LL;
          *(_QWORD *)(v29 + 48) = 0LL;
LABEL_52:
          v27 = (*(_DWORD *)(v13 + 72) & 0x40000) == 0;
          *(_QWORD *)(v13 + 48) = v14;
          if ( !v27 )
            *(_DWORD *)(v13 + 120) = *((_DWORD *)v14 + 28);
          goto LABEL_16;
        }
      }
LABEL_14:
      WdLogSingleEntry2(3LL, this, -1073741801LL);
LABEL_15:
      v9 = -1073741801;
LABEL_16:
      if ( --v30 < 0 )
      {
        if ( v9 < 0 )
        {
          v15 = (__int64)*a3;
          if ( *a3 )
          {
            do
            {
              v16 = (DXGADAPTERALLOCATION **)v15;
              v15 = *(_QWORD *)(v15 + 64);
              ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v14, (struct DXGALLOCATION *)v16, 0LL);
              v17 = v16[6];
              if ( v17 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              {
                DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v16[6]);
                operator delete(v17);
              }
              DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v16);
            }
            while ( v15 );
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
