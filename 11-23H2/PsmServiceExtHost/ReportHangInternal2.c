/*
 * XREFs of ReportHangInternal2 @ 0x18008F238
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18008F1C0 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z @ 0x180052CFC (-WersvcSendMessage@@YAJPEB_WPEAU_WERSVC_MSG@@1K@Z.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     RhpCaptureSnapshots @ 0x18008F47C (RhpCaptureSnapshots.c)
 */

__int64 __fastcall ReportHangInternal2(void *Src, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // r9d
  const wchar_t *v9; // rcx
  _QWORD *v10; // rsi
  ULONG v11; // ecx
  __int64 v12; // rax
  HANDLE Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v19; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v20[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  union _LARGE_INTEGER v21; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v22; // [rsp+630h] [rbp+530h]
  _BYTE v23[128]; // [rsp+638h] [rbp+538h] BYREF
  char v24; // [rsp+6B8h] [rbp+5B8h] BYREF
  char v25; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v26; // [rsp+708h] [rbp+608h]
  int v27; // [rsp+B20h] [rbp+A20h]
  int v28; // [rsp+B24h] [rbp+A24h]

  v4 = a2;
  memset_0(v20, 0, 0x578uLL);
  memset_0(v15, 0, 0x578uLL);
  if ( !(_DWORD)v4 && !a3 )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  v7 = 16LL;
  if ( (unsigned int)v4 > 0x10 )
  {
    v6 = -1073740757;
    goto LABEL_23;
  }
  memset_0(v20, 0, 0x578uLL);
  v20[0] = 91751760;
  v20[10] = 0x10000000;
  memcpy_0(&v21, Src, 4 * v4);
  v26 = 0LL;
  v22 = a3;
  v27 = 229500;
  v28 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  RhpCaptureSnapshots((unsigned int)v23, (unsigned int)&v24, (unsigned int)&v25, v8, (__int64)&v21);
  v6 = WersvcSendMessage(v9, (struct _WERSVC_MSG *)v20, (struct _WERSVC_MSG *)v15);
  v10 = v23;
  do
  {
    if ( *v10 )
      PssNtFreeSnapshot();
    ++v10;
    --v7;
  }
  while ( v7 );
  if ( v6 >= 0 )
  {
    if ( v6 == 258 )
    {
      v6 = -1073741248;
      goto LABEL_23;
    }
    switch ( v16 )
    {
      case 268435457:
        goto LABEL_16;
      case 268435458:
        v6 = v17;
        if ( v17 < 0 )
          goto LABEL_23;
        break;
      case 268435461:
LABEL_16:
        v11 = 0;
        if ( Handle )
        {
          Object[0] = Handle;
          v11 = 1;
        }
        if ( v19 )
        {
          v12 = v11++;
          Object[v12] = v19;
        }
        if ( v11 )
          NtWaitForMultipleObjects(v11, Object, WaitAny, 0, 0LL);
        v6 = 0;
        goto LABEL_23;
    }
    v6 = -1073741823;
  }
LABEL_23:
  if ( Handle )
    NtClose(Handle);
  if ( v19 )
    NtClose(v19);
  return (unsigned int)v6;
}
