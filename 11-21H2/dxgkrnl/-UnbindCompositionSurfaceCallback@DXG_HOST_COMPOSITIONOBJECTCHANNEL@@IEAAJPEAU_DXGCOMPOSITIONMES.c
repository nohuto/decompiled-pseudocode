/*
 * XREFs of ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02E1E2C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  int v6; // ebx
  DxgkCompositionObject *v7; // rsi
  BOOL v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v14; // rax
  DxgkCompositionObject *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  _BYTE v22[8]; // [rsp+50h] [rbp-28h] BYREF
  char v23; // [rsp+58h] [rbp-20h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v22);
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 106) & 0x800) == 0 )
      v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))() != 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
LABEL_19:
    WdLogSingleEntry3(3LL, *((unsigned int *)a2 + 3), *((int *)a2 + 4), v6);
    goto LABEL_20;
  }
  v14 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, v14, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v15 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                   *((_QWORD *)this + 1),
                                   *((unsigned int *)a2 + 3),
                                   17LL);
  if ( v15 )
  {
    v7 = v15;
    DxgkCompositionObject::AddRef(v15);
  }
  else
  {
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
  }
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( !v7 )
    goto LABEL_19;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
  v18[3] = *((unsigned int *)a2 + 3);
  v18[4] = v7;
  v18[5] = *((int *)a2 + 4);
  LOBYTE(v19) = *((_DWORD *)a2 + 4) != 0;
  v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v7 + 4) + 32LL))((_QWORD *)v7 + 4, v19);
  v6 = v20;
  if ( v20 < 0 )
    WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), v20);
  DxgkCompositionObject::Release(v7);
  if ( v6 < 0 )
    goto LABEL_19;
LABEL_20:
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}
