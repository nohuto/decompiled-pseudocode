/*
 * XREFs of DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1C02D1350
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0043C3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetIndirectDisplayRenderAdapterByHandle(unsigned int a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  struct DXGADAPTER *v7; // rbx
  unsigned int v8; // ebx
  struct DXGADAPTER *v9; // rdi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rbx
  bool v12; // zf
  struct DXGADAPTER *v14[2]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp+17h] BYREF
  DXGADAPTER *v16[2]; // [rsp+78h] [rbp+27h] BYREF
  _BYTE v17[8]; // [rsp+88h] [rbp+37h] BYREF
  struct DXGADAPTER *v18; // [rsp+90h] [rbp+3Fh]
  char v19; // [rsp+98h] [rbp+47h]

  v14[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v14, a1, (__int64)a3, a4);
  v7 = v14[0];
  if ( !v14[0] )
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
LABEL_5:
    v8 = -1073741585;
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v14[0] + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v14[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v18 = v14[0];
  v19 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  v9 = v14[0];
  if ( *((_DWORD *)v7 + 50) != 1 || *((_BYTE *)v14[0] + 2705) )
  {
    v8 = -1073741130;
    WdLogSingleEntry2(3LL, v14[0], -1073741130LL);
  }
  else
  {
    v10 = (ADAPTER_DISPLAY *)*((_QWORD *)v14[0] + 349);
    v16[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter(v10, v16, 0LL);
    if ( v16[0] )
      *a2 = *(_QWORD *)((char *)v16[0] + 404);
    else
      *a2 = 0LL;
    v11 = *((_QWORD *)v9 + 349);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(v11 + 200), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v12 = v15[8] == 0;
    *a3 = *(_QWORD *)(v11 + 280);
    if ( !v12 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    v8 = 0;
    DXGADAPTER_REFERENCE::Assign(v16, 0LL);
  }
  if ( v19 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
LABEL_17:
  DXGADAPTER_REFERENCE::Assign(v14, 0LL);
  return v8;
}
