/*
 * XREFs of ReportHangInternal @ 0x180052A14
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18008F1C0 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     GetTickCount_0 @ 0x18004A362 (GetTickCount_0.c)
 *     CloseHandle_0 @ 0x18004A36E (CloseHandle_0.c)
 *     GetCurrentDesktopName @ 0x180052990 (GetCurrentDesktopName.c)
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x180052CFC (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _alloca_probe @ 0x180053520 (_alloca_probe.c)
 *     RhpCaptureSnapshots @ 0x18008F47C (RhpCaptureSnapshots.c)
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097334 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 */

__int64 __fastcall ReportHangInternal(__int64 a1, unsigned int *a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  int v10; // ebx
  DWORD v11; // edx
  unsigned int v12; // r9d
  const wchar_t *v13; // rcx
  _QWORD *v14; // rsi
  unsigned int *v15; // r8
  DWORD v16; // ecx
  __int64 v17; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE Src[1408]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[40]; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned int v22; // [rsp+5E8h] [rbp+4E8h]
  int v23; // [rsp+5ECh] [rbp+4ECh]
  HWND hwnd; // [rsp+5F0h] [rbp+4F0h]
  HANDLE hObject; // [rsp+B28h] [rbp+A28h]
  HANDLE v26; // [rsp+B30h] [rbp+A30h]
  _DWORD v27[12]; // [rsp+B40h] [rbp+A40h] BYREF
  _BYTE v28[64]; // [rsp+B70h] [rbp+A70h] BYREF
  int v29; // [rsp+BB0h] [rbp+AB0h]
  _BYTE v30[128]; // [rsp+BB8h] [rbp+AB8h] BYREF
  char v31; // [rsp+C38h] [rbp+B38h] BYREF
  int v32; // [rsp+C48h] [rbp+B48h] BYREF
  __int64 v33; // [rsp+C88h] [rbp+B88h]
  _WORD pvInfo[520]; // [rsp+C90h] [rbp+B90h] BYREF
  int v35; // [rsp+10A0h] [rbp+FA0h]
  DWORD TickCount_0; // [rsp+10A4h] [rbp+FA4h]

  v5 = a3;
  memset_0(v27, 0, 0x578uLL);
  memset_0(v21, 0, 0x578uLL);
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
  memset_0(Src, 0, 0x578uLL);
  memcpy_0(v27, Src, 0x578uLL);
  v27[0] = 91751760;
  v27[10] = 0x10000000;
  v29 = a4;
  v33 = 0LL;
  TickCount_0 = GetTickCount_0();
  memcpy_0(v28, a2, 4 * v5);
  if ( (a5 & 2) != 0 )
    pvInfo[260] = 0;
  if ( !(unsigned int)GetCurrentDesktopName(pvInfo, v11) )
    pvInfo[0] = 0;
  v35 = a5;
  if ( (a5 & 0x84000) != 0 )
  {
    v13 = (const wchar_t *)((a5 & 0x80000) != 0 ? -1073741248 : -1073741822);
    v32 = (a5 & 0x80000) != 0 ? -1073741248 : -1073741822;
  }
  else
  {
    RhpCaptureSnapshots((unsigned int)v30, (unsigned int)&v31, (unsigned int)&v32, v12, (__int64)v28);
  }
  v10 = WersvcSendMessage(v13, (struct _WERSVC_MSG *)v27, (struct _WERSVC_MSG *)v21, v12);
  v14 = v30;
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
    v15 = (unsigned int *)v22;
    switch ( v22 )
    {
      case 0x10000001u:
        goto LABEL_23;
      case 0x10000002u:
        v10 = v23;
        if ( v23 < 0 )
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
        if ( v26 )
        {
          v17 = v16++;
          Handles[v17] = v26;
        }
        if ( (a5 & 0x20) != 0 && v16 )
        {
          WaitForMultipleObjects(v16, Handles, 0, 0xFFFFFFFF);
          v15 = (unsigned int *)v22;
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
  if ( v26 )
    CloseHandle_0(v26);
  return (unsigned int)v10;
}
