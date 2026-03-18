/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369D60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C01A5DA0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGPROCESS **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // r15
  __int64 v7; // r9
  __int64 v8; // rax
  DXGSHAREDVMOBJECT *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  char *Src; // rsi
  __int64 v14; // r15
  unsigned int v15; // edx
  int v16; // r9d
  int EntryType; // eax
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  DXGAUTOPUSHLOCK *v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-61h]
  _BYTE v29[24]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v30[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v31[3]; // [rsp+80h] [rbp-9h] BYREF
  int v32; // [rsp+98h] [rbp+Fh]
  int v33; // [rsp+9Ch] [rbp+13h]
  __int128 v34; // [rsp+A0h] [rbp+17h]
  int v35; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+100h] [rbp+77h] BYREF
  __int64 v37; // [rsp+108h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  v35 = 0;
  v6 = Current;
  v8 = operator new[](0x20uLL, 0x4B677844u, 256LL, v7);
  v9 = (DXGSHAREDVMOBJECT *)v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_DWORD *)(v8 + 24) = 1;
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    v11 = v10;
    if ( !v10 )
      return v10;
    v37 = 0LL;
    v12 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, v6);
    Src = (char *)(v11 + 24);
    v14 = (__int64)v6 + 280;
    v15 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v14 + 16) )
    {
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 16LL * v15 + 8);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16LL * v15 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType(v14, v15);
        v18 = EntryType;
        switch ( EntryType )
        {
          case 4:
LABEL_29:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
            if ( v18 == 4 )
            {
              v33 = 0;
              v31[1] = 0LL;
              v31[2] = 0LL;
              v36 = 0LL;
              v31[0] = 48LL;
              v32 = 512;
              v34 = 0LL;
              if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v31, 0x10000000u, &v37, (PVOID *)&v36) < 0 )
              {
                WdLogSingleEntry1(2LL, *(unsigned int *)Src);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fail to create Nt Shareed object, handle: 0x%I64x",
                  *(unsigned int *)Src,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_42;
              }
              v12 = v36;
            }
            *((_QWORD *)v9 + 2) = v37;
            *(_DWORD *)v9 = v18;
            *((_QWORD *)v9 + 1) = v12;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, a1[12]);
            v35 = HMGRTABLE::AllocHandle((unsigned int *)a1[12] + 70, (__int64)v9, 13, 0, 0);
            if ( !v35 )
            {
              WdLogSingleEntry1(2LL, 7275LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to allocate NT shared object handle",
                7275LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v26 = (DXGAUTOPUSHLOCK *)v30;
            goto LABEL_35;
          case 8:
            v23 = *(unsigned int *)Src;
            v24 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
            if ( (unsigned int)v24 < *(_DWORD *)(v14 + 16) )
            {
              v25 = *(_DWORD *)(*(_QWORD *)v14 + 16 * v24 + 8);
              if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v14 + 16 * v24 + 8) & 0x60)
                && (v25 & 0x2000) == 0
                && (v25 & 0x1F) != 0 )
              {
                if ( (v25 & 0x1F) == 8 )
                {
                  v12 = *(_QWORD *)(*(_QWORD *)v14 + 16LL * (unsigned int)v24);
                  if ( v12 && (*(_DWORD *)(v12 + 204) & 2) != 0 )
                  {
LABEL_28:
                    _InterlockedIncrement((volatile signed __int32 *)(v12 + 24));
                    goto LABEL_29;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, 267LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Handle type mismatch",
                    267LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v23 = *(unsigned int *)Src;
                }
              }
            }
            WdLogSingleEntry2(2LL, v23, 7212LL);
            v28 = 7212LL;
            goto LABEL_33;
          case 11:
            v19 = *(unsigned int *)Src;
            v20 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
            if ( (unsigned int)v20 >= *(_DWORD *)(v14 + 16) )
              goto LABEL_19;
            v21 = *(_DWORD *)(*(_QWORD *)v14 + 16 * v20 + 8);
            if ( (((unsigned int)v19 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v14 + 16 * v20 + 8) & 0x60)
              || (v21 & 0x2000) != 0
              || (v21 & 0x1F) == 0 )
            {
              goto LABEL_19;
            }
            if ( (v21 & 0x1F) != (_BYTE)v18 )
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              v19 = *(unsigned int *)Src;
LABEL_19:
              WdLogSingleEntry1(2LL, v19);
              v28 = 0LL;
LABEL_33:
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid sync object handle: 0x%I64x",
                *(unsigned int *)Src,
                v28,
                0LL,
                0LL,
                0LL);
LABEL_34:
              v26 = (DXGAUTOPUSHLOCK *)v29;
LABEL_35:
              DXGAUTOPUSHLOCK::Release(v26);
              goto LABEL_42;
            }
            v22 = *(_QWORD *)(*(_QWORD *)v14 + 16LL * (unsigned int)v20);
            if ( !v22 || (*(_DWORD *)(v22 + 72) & 2) == 0 )
              goto LABEL_19;
            v12 = *(_QWORD *)(v22 + 32);
            goto LABEL_28;
        }
      }
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)Src);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid object handle: 0x%I64x",
      *(unsigned int *)Src,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_34;
  }
  WdLogSingleEntry1(6LL, 7189LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
    7189LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v9 = 0LL;
LABEL_42:
  if ( !v35 && v9 )
    DXGSHAREDVMOBJECT::ReleaseReference(v9);
  VmBusCompletePacket(a1[16], &v35, 4u);
  LOBYTE(v10) = 1;
  return v10;
}
