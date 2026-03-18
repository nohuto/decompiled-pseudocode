/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0
 * Callers:
 *     DxgkCreateContext @ 0x1C015C120 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01693E8 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C000A5E4 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016B958 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // r9
  DXGCONTEXT *Pool2; // rax
  unsigned int v15; // r9d
  DXGCONTEXT *v16; // rax
  DXGCONTEXT *v17; // rbx
  int v18; // edi
  DXGCONTEXT **v19; // rax
  __int64 v20; // rcx
  char v22[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1806LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppContext != NULL", 1806LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 1807LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 1807LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1808LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1808LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 1814LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1814LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  Pool2 = (DXGCONTEXT *)ExAllocatePool2(257LL, 504LL, 1265072196LL, v13);
  if ( !Pool2 )
    goto LABEL_20;
  v15 = 1;
  if ( a4 )
    v15 = a4;
  v16 = DXGCONTEXT::DXGCONTEXT(Pool2, this, a3, v15, a5, a8, a9);
  v17 = v16;
  if ( v16 )
  {
    v18 = DXGCONTEXT::Initialize(v16, a6, a7);
    if ( v18 < 0 )
    {
      DXGCONTEXT::DestroyContext(v17, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v17);
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireExclusive(v23);
      v19 = (DXGCONTEXT **)((char *)this + 464);
      v24 = 2;
      v20 = *((_QWORD *)this + 58);
      if ( *(DXGDEVICE **)(v20 + 8) != (DXGDEVICE *)((char *)this + 464) )
        __fastfail(3u);
      *(_QWORD *)v17 = v20;
      *((_QWORD *)v17 + 1) = v19;
      *(_QWORD *)(v20 + 8) = v17;
      *v19 = v17;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
      *a2 = v17;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
LABEL_20:
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGCONTEXT class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v18;
}
