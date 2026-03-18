/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C01A23A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00601EC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C01B0070 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        DXGADAPTER *this,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int appended; // edi
  _QWORD *v8; // rax
  void *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-79h] BYREF
  DXGADAPTER *v12; // [rsp+28h] [rbp-71h]
  char v13; // [rsp+30h] [rbp-69h]
  _BYTE v14[16]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  DXGADAPTER *v16; // [rsp+58h] [rbp-41h]
  char v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+90h] [rbp-9h]
  DXGADAPTER *v20; // [rsp+98h] [rbp-1h]
  char v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]

  v12 = this;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  v18 = 0LL;
  v14[1] = 0;
  v16 = this;
  v17 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v15 = -1LL;
  }
  v22 = 0LL;
  v20 = this;
  v21 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v19 = -1LL;
  }
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  appended = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_9;
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = this;
    v8[4] = *((int *)this + 102);
    v8[5] = *((unsigned int *)this + 101);
    v8[6] = a2;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 2705) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_8:
    appended = 0;
    goto LABEL_9;
  }
  appended = DmmAppendCcdConnectedSetForAdapter(v10, (struct _UNICODE_STRING *)(a2 + 8));
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return appended;
}
