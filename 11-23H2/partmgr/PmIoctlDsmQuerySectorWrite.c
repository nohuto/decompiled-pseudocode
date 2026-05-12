/*
 * XREFs of PmIoctlDsmQuerySectorWrite @ 0x1C0025660
 * Callers:
 *     ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C (-PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 *     PmIoctlRedirect @ 0x1C001DAB0 (PmIoctlRedirect.c)
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmIoctlDsmQuerySectorWrite(__int64 a1, _BYTE *a2, __int64 *a3, __int64 *a4)
{
  NTSTATUS v4; // r10d
  __int64 v5; // rdi
  unsigned int v9; // r11d
  int *v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 184);
  v9 = *(_DWORD *)(v5 + 16);
  if ( v9 < 0x1C )
    return (unsigned int)-1073741811;
  v10 = *(int **)(a1 + 24);
  v11 = v10[6];
  if ( v11 )
  {
    if ( (v10[2] & 1) != 0 )
      return (unsigned int)-1073741811;
    v12 = v10[5];
    if ( !v12 || (v11 & 0xF) != 0 || v12 < 0x1C || v9 < v12 + v11 )
      return (unsigned int)-1073741811;
  }
  if ( v10[1] < 0 )
    goto LABEL_14;
  if ( (v10[2] & 1) != 0 )
  {
    v4 = PmSendDeviceControl(*(PDEVICE_OBJECT *)(v5 + 40), 0x7405Cu, 0LL, 0, &v22, 8u, 0);
    if ( v4 >= 0 )
    {
      *a3 = 0LL;
      v13 = v22;
LABEL_27:
      *a2 = 1;
      *a4 = v13;
    }
    return (unsigned int)v4;
  }
  if ( !v11 )
  {
LABEL_14:
    *a2 = 0;
    return (unsigned int)v4;
  }
  v14 = 0LL;
  v15 = (__int64 *)((char *)v10 + (unsigned int)v10[5]);
  v16 = 0x7FFFFFFFFFFFFFFFLL;
  if ( ((unsigned __int8)v15 & 7) != 0 )
    return (unsigned int)-1073741811;
  while ( 1 )
  {
    if ( v11 < 0x10 )
    {
      *a3 = v16;
      v13 = v14 - v16 + 1;
      goto LABEL_27;
    }
    v17 = *v15;
    v18 = *v15;
    if ( *v15 >= v16 )
      v18 = v16;
    v16 = v18;
    if ( v17 < 0 )
      return (unsigned int)-1073741811;
    v19 = v17 + v15[1];
    if ( v19 < (unsigned __int64)v17 )
      break;
    v4 = 0;
    if ( v19 < 0 )
      break;
    v20 = v19 - 1;
    if ( v19 <= v14 )
      v20 = v14;
    v15 += 2;
    v11 -= 16;
    v14 = v20;
  }
  return (unsigned int)-1073741675;
}
