/*
 * XREFs of DxgGetHandleDataCB @ 0x1C02EE710
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000B474 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x1C0024E14 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z @ 0x1C02D7150 (--0DXGRESOURCEREFERENCE@@QEAA@$$QEAV0@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // rdx
  ULONG_PTR Count; // rdi
  unsigned int v6; // ebx
  int IsEnabledDeviceUsage; // eax
  unsigned int v8; // edx
  BOOL v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rbx
  __int64 v17; // r9
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // edx
  BOOL v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdx
  int v27; // ecx
  struct _EX_RUNDOWN_REF *v28; // rbx
  __int64 v29; // r9
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v34[56]; // [rsp+78h] [rbp-1h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v34);
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, Current);
  v4 = (int)a1[1];
  Count = 0LL;
  if ( (_DWORD)v4 == 1 )
  {
    v6 = *a1;
    IsEnabledDeviceUsage = Feature_1344054585__private_IsEnabledDeviceUsage();
    v8 = *((_DWORD *)Current + 74);
    v9 = IsEnabledDeviceUsage != 0;
    v10 = (v6 >> 6) & 0xFFFFFF;
    if ( v9 )
    {
      if ( v10 < v8 )
      {
        v11 = *((_QWORD *)Current + 35);
        v12 = 2LL * v10;
        v13 = *(_DWORD *)(v11 + 16LL * v10 + 8);
        if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
          && ((v13 & 0x2000) == 0 || (v13 & 0x4000) != 0)
          && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F) == 5 )
        {
          goto LABEL_8;
        }
      }
    }
    else if ( v10 < v8 )
    {
      v11 = *((_QWORD *)Current + 35);
      v12 = 2LL * v10;
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
        && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
      {
        v15 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
        if ( v15 )
        {
          if ( v15 == 5 )
          {
LABEL_8:
            v14 = *(struct _EX_RUNDOWN_REF **)(v11 + 8 * v12);
LABEL_16:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v14);
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v32, &v31);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
            v16 = v32;
            if ( v32 )
            {
              if ( KeGetCurrentIrql() >= 2u )
              {
                v17 = *(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 16LL);
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
                  WdLogSingleEntry5(0LL, 275LL, 20LL, v17, 0LL, 0LL);
              }
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16[1].Count + 16) + 16LL))
                && *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
              {
                WdLogSingleEntry1(1LL, 89LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
                  89LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( (a1[2] & 1) != 0 )
              {
                Count = v16[4].Count;
              }
              else
              {
                Count = *(_QWORD *)(v16[6].Count + 16);
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, *a1);
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
            goto LABEL_56;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_16;
  }
  if ( (_DWORD)v4 != 2 )
  {
    WdLogSingleEntry1(3LL, v4);
    goto LABEL_56;
  }
  v18 = *a1;
  v19 = Feature_1344054585__private_IsEnabledDeviceUsage();
  v20 = *((_DWORD *)Current + 74);
  v21 = v19 != 0;
  v22 = (v18 >> 6) & 0xFFFFFF;
  if ( v21 )
  {
    if ( v22 < v20 )
    {
      v23 = *((_QWORD *)Current + 35);
      v24 = 2LL * v22;
      v25 = *(_DWORD *)(v23 + 16LL * v22 + 8);
      if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60)
        && ((v25 & 0x2000) == 0 || (v25 & 0x4000) != 0)
        && (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F) == 4 )
      {
        goto LABEL_35;
      }
    }
LABEL_42:
    v26 = 0LL;
    goto LABEL_43;
  }
  if ( v22 >= v20 )
    goto LABEL_42;
  v23 = *((_QWORD *)Current + 35);
  v24 = 2LL * v22;
  if ( ((v18 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60) )
    goto LABEL_42;
  if ( (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) != 0 )
    goto LABEL_42;
  v27 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
  if ( !v27 )
    goto LABEL_42;
  if ( v27 != 4 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_42;
  }
LABEL_35:
  v26 = *(struct _EX_RUNDOWN_REF **)(v23 + 8 * v24);
LABEL_43:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31, v26);
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(&v32, &v31);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  v28 = v32;
  if ( v32 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        WdLogSingleEntry5(0LL, 275LL, 20LL, v29, 0LL, 0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v28[1].Count + 16) + 16LL))
      && *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      WdLogSingleEntry1(1LL, 132LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
        132LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( (HIDWORD(v28->Ptr) & 1) != 0 )
    {
      Count = *(_QWORD *)(v28[7].Count + 16);
    }
    else
    {
      Count = v28[7].Count;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v32);
LABEL_56:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v33);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v34);
  return Count;
}
