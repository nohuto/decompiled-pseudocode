/*
 * XREFs of ACPIInitStartDevice @ 0x1C00050B0
 * Callers:
 *     ACPIEcStartDevice @ 0x1C00530C0 (ACPIEcStartDevice.c)
 *     ACPICMButtonStart @ 0x1C00901C0 (ACPICMButtonStart.c)
 *     ACPIBusIrpStartDevice @ 0x1C0090AA0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0090EC0 (ACPIFilterIrpStartDevice.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C00AEE70 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00B1460 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00052A4 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00B3A40 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r14d
  _QWORD *DeviceExtension; // rax
  __int64 v9; // r12
  __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // r13
  _DWORD *v13; // r14
  _DWORD *v14; // rsi
  unsigned int v15; // ebx
  void *v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  void *v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // edx
  _BYTE *v24; // rcx
  size_t v25; // r15
  void *Pool2; // rax
  void *v27; // r14
  __int64 v28; // rax
  void *v29; // rdx
  void *v30; // rcx
  __int64 v31; // rax
  void *v32; // rdx
  void *v33; // rcx
  void *v34; // rcx
  int v35; // eax
  int v36; // edx
  int v37; // esi
  __int64 v38; // rcx
  void *v39; // rax
  unsigned int v40; // esi
  void *v41; // rax
  int v42; // edx
  void *v43; // r14
  __int64 v44; // rcx
  void *v45; // rax
  char v46; // si
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // r13
  __int64 v50; // rcx
  void *v51; // rax
  int v52; // edx
  __int64 v53; // rcx
  void *v54; // rax
  KIRQL v55; // al
  void *v56; // rcx
  KIRQL v57; // di
  void *v58; // rcx
  __int64 v59; // rax
  void *v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-50h]
  __int64 v62; // [rsp+38h] [rbp-48h]
  size_t v63; // [rsp+50h] [rbp-30h]
  __int128 v64; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h]
  void *v66; // [rsp+78h] [rbp-8h]
  _DWORD *Src; // [rsp+C8h] [rbp+48h]

  v64 = 0LL;
  v66 = 0LL;
  v5 = a4;
  *(_OWORD *)Size = 0LL;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  v12 = DeviceExtension[95];
  if ( a2 )
  {
    v13 = *(_DWORD **)(a2 + 8);
    v14 = *(_DWORD **)(a2 + 16);
    Src = v13;
    if ( v13 && *v13 == 1 )
    {
      v17 = &unk_1C006FB8B;
      if ( v14 && *v14 == 1 && (DeviceExtension[125] & 0x100000000LL) != 0 )
      {
        v22 = v14[4];
        v23 = 0;
        if ( v22 )
        {
          v24 = v14 + 5;
          while ( *v24 != 2 || (v24[2] & 0x20) == 0 )
          {
            ++v23;
            v24 += 20;
            if ( v23 >= v22 )
              goto LABEL_37;
          }
          v25 = 20 * (v22 + 1);
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v25, 1399874369LL);
          v27 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v14, v25);
            v34 = (void *)v11[85];
            if ( v34 )
              ExFreePoolWithTag(v34, 0);
            v11[85] = v27;
            v13 = Src;
          }
          else
          {
            v28 = v11[1];
            v29 = &unk_1C006FB8B;
            v30 = &unk_1C006FB8B;
            if ( (v28 & 0x200000000000LL) != 0 )
            {
              v29 = (void *)v11[76];
              if ( (v28 & 0x400000000000LL) != 0 )
                v30 = (void *)v11[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v62 = (__int64)v29;
              LOBYTE(v29) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v29,
                1,
                21,
                (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
                v25,
                (char)v11,
                v62,
                (__int64)v30);
            }
            v13 = Src;
          }
        }
        else
        {
LABEL_37:
          v31 = DeviceExtension[1];
          v32 = &unk_1C006FB8B;
          v33 = &unk_1C006FB8B;
          if ( (v31 & 0x200000000000LL) != 0 )
          {
            v32 = (void *)v11[76];
            if ( (v31 & 0x400000000000LL) != 0 )
              v33 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v61 = (__int64)v32;
            LOBYTE(v32) = 2;
            WPP_RECORDER_SF_qss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v32,
              17,
              20,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              (char)v11,
              v61,
              (__int64)v33);
          }
          _InterlockedAnd64(v11 + 1, 0xFFFFFFFFFFFEFFFFuLL);
          _InterlockedAnd64(v11 + 125, 0xFFFFFFFEFFFFFFFFuLL);
          _InterlockedAnd64(v11 + 125, 0xFFFFFFFFFFEFFFFFuLL);
        }
      }
      v9 = AMLIGetNamedChild(v12, 1397900127LL);
      v18 = AMLIGetNamedChild(v12, 1397904223LL);
      v10 = v18;
      if ( v9 && v18 )
      {
        v35 = AMLIEvalNameSpaceObject(v9, &v64, 0LL, 0LL);
        v37 = v35;
        if ( v35 < 0 )
        {
          v38 = v11[1];
          v39 = &unk_1C006FB8B;
          if ( (v38 & 0x200000000000LL) != 0 )
          {
            v17 = (void *)v11[76];
            if ( (v38 & 0x400000000000LL) != 0 )
              v39 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v36,
              1,
              23,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              v37,
              (char)v11,
              (__int64)v17,
              (__int64)v39);
          }
          goto LABEL_90;
        }
        if ( WORD1(v64) != 3 || !LODWORD(Size[1]) || !v66 )
        {
          v59 = v11[1];
          v60 = &unk_1C006FB8B;
          if ( (v59 & 0x200000000000LL) != 0 )
          {
            v17 = (void *)v11[76];
            if ( (v59 & 0x400000000000LL) != 0 )
              v60 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = 2;
            WPP_RECORDER_SF_dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v36,
              1,
              24,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              SBYTE2(v64),
              (char)v11,
              (__int64)v17,
              (__int64)v60);
          }
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          FreeDataBuffs(&v64, 1LL);
          v37 = -1073741823;
          goto LABEL_90;
        }
        v40 = 20 * (v13[4] + 1);
        v63 = v40;
        v41 = (void *)ExAllocatePool2(256LL, v40, 1399874369LL);
        v43 = v41;
        if ( !v41 )
        {
          v44 = v11[1];
          v45 = &unk_1C006FB8B;
          if ( (v44 & 0x200000000000LL) != 0 )
          {
            v17 = (void *)v11[76];
            if ( (v44 & 0x400000000000LL) != 0 )
              v45 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v42) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v42,
              1,
              25,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              v40,
              (char)v11,
              (__int64)v17,
              (__int64)v45);
          }
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          FreeDataBuffs(&v64, 1LL);
LABEL_63:
          v37 = -1073741670;
LABEL_90:
          a3(v11, a4, (unsigned int)v37);
          if ( v9 )
            AMLIDereferenceHandleEx(v9);
          if ( v10 )
            AMLIDereferenceHandleEx(v10);
          return (unsigned int)v37;
        }
        memmove(v41, Src, v40);
        v46 = LOBYTE(Size[1]) + 40;
        v47 = ExAllocatePool2(64LL, (unsigned int)(LODWORD(Size[1]) + 40), 1332765505LL);
        v49 = v47;
        if ( !v47 )
        {
          v50 = v11[1];
          v51 = &unk_1C006FB8B;
          if ( (v50 & 0x200000000000LL) != 0 )
          {
            v17 = (void *)v11[76];
            if ( (v50 & 0x400000000000LL) != 0 )
              v51 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v48) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v48,
              1,
              26,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              v46,
              (char)v11,
              (__int64)v17,
              (__int64)v51);
          }
          dword_1C0081AC8 = 0;
          byte_1C0081ACC = 0;
          FreeDataBuffs(&v64, 1LL);
          ExFreePoolWithTag(v43, 0);
          goto LABEL_63;
        }
        *(_OWORD *)v47 = v64;
        *(_OWORD *)(v47 + 16) = *(_OWORD *)Size;
        *(_QWORD *)(v47 + 32) = v47 + 40;
        memmove((void *)(v47 + 40), v66, LODWORD(Size[1]));
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        FreeDataBuffs(&v64, 1LL);
        v37 = PnpCmResourcesToBiosResources(v11, v43, *(_QWORD *)(v49 + 32), *(unsigned int *)(v49 + 24));
        if ( v37 < 0 )
        {
          v53 = v11[1];
          v54 = &unk_1C006FB8B;
          if ( (v53 & 0x200000000000LL) != 0 )
          {
            v17 = (void *)v11[76];
            if ( (v53 & 0x400000000000LL) != 0 )
              v54 = (void *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v52) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v52,
              1,
              27,
              (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
              v37,
              (char)v11,
              (__int64)v17,
              (__int64)v54);
          }
          ExFreePoolWithTag(v43, 0);
          ExFreePoolWithTag((PVOID)v49, 0);
          goto LABEL_90;
        }
        memmove(v43, Src, v63);
        v55 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v56 = (void *)v11[86];
        v57 = v55;
        if ( v56 )
          ExFreePoolWithTag(v56, 0);
        v11[86] = v49;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v57);
        v58 = (void *)v11[84];
        if ( v58 )
          ExFreePoolWithTag(v58, 0);
        v11[84] = v43;
      }
      else
      {
        v20 = v11[1];
        v21 = &unk_1C006FB8B;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v17 = (void *)v11[76];
          if ( (v20 & 0x400000000000LL) != 0 )
            v21 = (void *)v11[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_qss(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            1,
            22,
            (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
            (char)v11,
            (__int64)v17,
            (__int64)v21);
        }
      }
      v5 = a4;
    }
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v11[125] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v11 + 96) == 1 )
  {
    v37 = 0;
    goto LABEL_90;
  }
  v15 = ACPIDeviceInternalDeviceRequest((_DWORD)v11, 1, v6, v5, 4);
  if ( v15 == -1073741802 )
    v15 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx(v9);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return v15;
}
