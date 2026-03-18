/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C01B03F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C002C514 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00601EC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C01AF874 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  struct DXGADAPTER *const v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  __int64 v11; // rax
  struct VIDPN_MGR *v12; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  int v14; // r15d
  unsigned int v15; // r14d
  int v16; // eax
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // eax
  struct DMMVIDPN *v20; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-99h] BYREF
  struct DXGADAPTER *v23; // [rsp+48h] [rbp-91h]
  char v24; // [rsp+50h] [rbp-89h]
  _BYTE v25[8]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v26[64]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v27[72]; // [rsp+A8h] [rbp-31h] BYREF

  v23 = a1;
  v24 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  v25[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v26, a1);
  COREACCESS::COREACCESS((COREACCESS *)v27, v4);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_5;
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *((int *)a1 + 102);
    v9[5] = *((unsigned int *)a1 + 101);
    v9[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2705)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v11 = *((_QWORD *)a1 + 349)) == 0 )
  {
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v11 + 290) )
    goto LABEL_24;
  v12 = *(struct VIDPN_MGR **)(v11 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, (__int64)v12);
  v20 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12, (__int64 *)&v20);
  v8 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v14 = 0;
    v15 = 0;
    if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
    {
LABEL_20:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v20, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
LABEL_21:
      v8 = -2147483622;
      goto LABEL_5;
    }
    do
    {
      if ( !_bittest64((const signed __int64 *)(296LL * v15 + *((_QWORD *)this + 1) + 56), 0x2Du) )
      {
        v16 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v15, v20);
        v8 = v16;
        if ( v16 == -1073741275 )
        {
          ++v14;
        }
        else if ( v16 < 0 )
        {
          WdLogSingleEntry5(2LL, v16, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v15);
          goto LABEL_36;
        }
      }
      ++v15;
    }
    while ( v15 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
    if ( !v14 )
      goto LABEL_20;
    auto_rc<DMMVIDPN>::reset((__int64 *)&v20, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
LABEL_24:
    v17 = 0;
    v18 = 0;
    if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
    {
      do
      {
        if ( !_bittest64((const signed __int64 *)(296LL * v18 + *((_QWORD *)this + 1) + 56), 0x2Du) )
        {
          v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v18, 0LL);
          v8 = v19;
          if ( v19 == -1073741275 )
          {
            ++v17;
          }
          else if ( v19 < 0 )
          {
            WdLogSingleEntry5(2LL, v19, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v18);
            goto LABEL_5;
          }
        }
        ++v18;
      }
      while ( v18 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      if ( !v17 )
        goto LABEL_21;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  WdLogSingleEntry5(
    2LL,
    ClientVidPnFromLastClientCommitedVidPn,
    v12,
    *((_QWORD *)this + 1),
    *((int *)a1 + 102),
    *((unsigned int *)a1 + 101));
LABEL_36:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v20, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21);
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  if ( v24 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  return v8;
}
