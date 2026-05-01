/*
 * XREFs of ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18009C838
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180093AEC (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     GetTickCount_0 @ 0x18004F192 (GetTickCount_0.c)
 *     CloseHandle_0 @ 0x18004F1AA (CloseHandle_0.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     RhpCaptureSnapshots @ 0x180093DA8 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x180094070 (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18009C7B4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18009CAF4 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 */

__int64 __fastcall ReportHangInternal(HWND a1, unsigned int *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  int v10; // ebx
  DWORD v11; // edx
  int v12; // r9d
  const unsigned __int16 *v13; // rcx
  _QWORD *v14; // rsi
  unsigned int *v15; // r8
  DWORD v16; // ecx
  __int64 v17; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[40]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ch] [rbp-94h]
  HWND hwnd; // [rsp+70h] [rbp-90h]
  HANDLE hObject; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v25; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v26[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  int v27[18]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _QWORD v28[16]; // [rsp+638h] [rbp+538h] BYREF
  __int128 v29; // [rsp+6B8h] [rbp+5B8h] BYREF
  __m128i v30[4]; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v31; // [rsp+708h] [rbp+608h]
  _WORD pvInfo[520]; // [rsp+710h] [rbp+610h] BYREF
  unsigned int v33; // [rsp+B20h] [rbp+A20h]
  DWORD TickCount_0; // [rsp+B24h] [rbp+A24h]

  v5 = a3;
  memset_0(v26, 0, 0x578uLL);
  memset_0(v20, 0, 0x578uLL);
  if ( !a2 || !(_DWORD)v5 || (v8 = *a2, (a5 & 0xFFF00000) != 0) )
  {
    v10 = -1073741811;
    goto LABEL_37;
  }
  v9 = 16LL;
  if ( (unsigned int)v5 > 0x10 )
  {
    v10 = -1073740757;
    goto LABEL_37;
  }
  memset_0(v26, 0, 0x578uLL);
  v26[0] = 91751760;
  v26[10] = 0x10000000;
  v27[16] = a4;
  v31 = 0LL;
  TickCount_0 = GetTickCount_0();
  memcpy_0(v27, a2, 4 * v5);
  if ( (a5 & 2) != 0 )
    pvInfo[260] = 0;
  if ( !(unsigned int)GetCurrentDesktopName(pvInfo, v11) )
    pvInfo[0] = 0;
  v33 = a5;
  if ( (a5 & 0x84000) != 0 )
  {
    v13 = (const unsigned __int16 *)((a5 & 0x80000) != 0 ? -1073741248 : -1073741822);
    v30[0].m128i_i32[0] = (a5 & 0x80000) != 0 ? -1073741248 : -1073741822;
  }
  else
  {
    RhpCaptureSnapshots(v28, &v29, v30, v12, v27);
  }
  v10 = WersvcSendMessage(v13, (struct _WERSVC_MSG *)v26, (struct _WERSVC_MSG *)v20);
  v14 = v28;
  do
  {
    if ( *v14 )
      PssNtFreeSnapshot();
    ++v14;
    --v9;
  }
  while ( v9 );
  if ( v10 >= 0 )
  {
    if ( v10 == 258 )
    {
      v10 = -1073741248;
      goto LABEL_37;
    }
    v15 = (unsigned int *)v21;
    switch ( v21 )
    {
      case 0x10000001u:
        goto LABEL_23;
      case 0x10000002u:
        v10 = v22;
        if ( v22 < 0 )
          goto LABEL_37;
        break;
      case 0x10000005u:
LABEL_23:
        v16 = 0;
        if ( hObject )
        {
          Handles[0] = hObject;
          v16 = 1;
        }
        if ( v25 )
        {
          v17 = v16++;
          Handles[v17] = v25;
        }
        if ( (a5 & 0x20) != 0 && v16 )
        {
          WaitForMultipleObjects(v16, Handles, 0, 0xFFFFFFFF);
          v15 = (unsigned int *)v21;
        }
        if ( hwnd && (_DWORD)v15 == 268435461 )
          UtilRegisterErrorReportingDialog(hwnd, v8, v15);
        v10 = 0;
        goto LABEL_37;
    }
    v10 = -1073741823;
  }
LABEL_37:
  if ( hObject )
    CloseHandle_0(hObject);
  if ( v25 )
    CloseHandle_0(v25);
  return (unsigned int)v10;
}
