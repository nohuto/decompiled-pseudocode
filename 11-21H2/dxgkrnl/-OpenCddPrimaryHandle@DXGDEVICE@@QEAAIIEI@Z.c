/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0330DCC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0185C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02C0CC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // r14
  DXGADAPTER **v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r15
  int v17; // r13d
  unsigned int v18; // eax
  __int64 v19; // rsi
  char *v20; // r12
  __int64 v21; // r9
  int v22; // esi
  _BYTE *Pool2; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-E0h]
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  _QWORD v34[14]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v36[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v37; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 231) + 2792LL);
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 9718LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 9718LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 9719LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9719LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    WdLogSingleEntry1(1LL, 9720LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
      9720LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)this + v7 + 79);
  v10 = v7;
  if ( !v9 )
    goto LABEL_57;
  if ( *((_DWORD *)this + 108) == 1 )
  {
    v11 = *((_QWORD *)this + v7 + 79);
    if ( (*(_DWORD *)(v9 + 4) & 1) == 0 )
    {
      WdLogSingleEntry1(1LL, 9729LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
        9729LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = *((_QWORD *)this + v7 + 79);
    }
    v12 = v11;
    if ( !*(_DWORD *)(*(_QWORD *)(v11 + 24) + 16LL) )
    {
      WdLogSingleEntry1(1LL, 9730LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
        9730LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = *((_QWORD *)this + v7 + 79);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 48LL) + 4LL) & 0x10) != 0 )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      v12 = *((_QWORD *)this + v7 + 79);
    }
    if ( !v12 )
    {
LABEL_57:
      CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle((ADAPTER_DISPLAY *)v8, v7);
      v14 = CddPrimaryShareResourceHandle;
      if ( CddPrimaryShareResourceHandle )
      {
        v32 = 0LL;
        DWORD1(v32) = CddPrimaryShareResourceHandle;
        v33 = 0LL;
        if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                    (__int64)this,
                    &v32,
                    CddPrimaryShareResourceHandle) >= 0 )
        {
          v16 = DWORD1(v33);
          v17 = DWORD2(v33);
          v18 = DWORD1(v33) + DWORD2(v33);
          if ( (unsigned int)(DWORD1(v33) + DWORD2(v33)) >= DWORD1(v33) )
          {
            v19 = v18;
            v20 = (char *)operator new[](v18, 0x4B677844u, 256LL, v15);
            if ( v20 )
            {
              memset(v34, 0, 0x48uLL);
              P = 0LL;
              v37 = 0;
              v22 = HIDWORD(v33);
              if ( HIDWORD(v33) <= 4 )
              {
                Pool2 = v36;
                P = v36;
                if ( HIDWORD(v33) )
                {
                  memset(v36, 0, 80LL * HIDWORD(v33));
                  Pool2 = P;
                }
              }
              else
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v33) < 0x50 )
                  goto LABEL_27;
                Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v33), 1265072196LL, v21);
                P = Pool2;
              }
              v37 = v22;
              if ( !Pool2 )
              {
LABEL_27:
                WdLogSingleEntry1(6LL, 9771LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
                  9771LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                operator delete[](v20);
                if ( P != v36 )
                {
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                }
                return 0LL;
              }
              HIDWORD(v34[0]) = v14;
              LODWORD(v34[1]) = v22;
              v34[2] = Pool2;
              if ( v17 )
                v34[5] = &v20[v16];
              else
                v34[5] = 0LL;
              LODWORD(v34[6]) = v17;
              v34[7] = v20;
              LODWORD(v34[8]) = v16;
              if ( (_DWORD)v33 )
              {
                WdLogSingleEntry1(1LL, 9793LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"QueryResInfo.PrivateRuntimeDataSize == 0",
                  9793LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v14 = HIDWORD(v34[0]);
              }
              if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                          this,
                          (__int64)v34,
                          v14,
                          0LL,
                          0,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0LL) < 0 )
              {
                WdLogSingleEntry2(4LL, this, (unsigned int)v10);
              }
              else
              {
                *((_BYTE *)this + (unsigned int)v10 + 616) = 1;
                if ( !*((_QWORD *)this + v10 + 79) )
                {
                  WdLogSingleEntry1(1LL, 9804LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pCddPrimaryResource[nOutput]",
                    9804LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              operator delete[](v20);
              if ( P != v36 && P )
                ExFreePoolWithTag(P, 0);
            }
            else
            {
              WdLogSingleEntry2(6LL, this, v19);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Device 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
                (__int64)this,
                v19,
                0LL,
                0LL,
                0LL);
            }
            v4 = a4;
          }
          v5 = a3;
        }
      }
    }
  }
  v25 = *((_QWORD *)this + v10 + 79);
  if ( !v25 )
    return 0LL;
  if ( (*(_DWORD *)(v25 + 4) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 9824LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
      9824LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v25 = *((_QWORD *)this + v10 + 79);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v25 + 24) + 16LL) )
  {
    WdLogSingleEntry1(1LL, 9825LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
      9825LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
  {
    memset(v34, 0, 0x68uLL);
    v26 = (_QWORD *)*((_QWORD *)this + 2);
    v34[7] = 1LL;
    LOBYTE(v29) = 0;
    v34[2] = *(_QWORD *)(v26[2] + 2640LL);
    v27 = *((_QWORD *)this + v10 + 79);
    v34[3] = *(_QWORD *)(v26[2] + 2648LL);
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(v26[81] + 8LL) + 808LL))(
            v26[82],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v27 + 24) + 24LL),
            v34,
            v29,
            v4);
    if ( v28 < 0 )
    {
      WdLogSingleEntry1(3LL, v28);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v10 + 79) + 24LL) + 16LL);
}
