/*
 * XREFs of ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180040114
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18004A7EE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 */

__int64 *__fastcall Win32kInterop::CreateDeviceInfo(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // xmm0_8

  v7 = operator new(0x60CuLL);
  memset_0(v7, 0, 0x60CuLL);
  v7[2] = 1548;
  *a2 = (__int64)v7;
  *v7 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(*a2 + 4) = a3;
  *(_BYTE *)(*a2 + 12) = *(_DWORD *)(a4 + 12) != 0;
  *(_DWORD *)(*a2 + 16) = *(_DWORD *)(a4 + 16);
  v10 = *a2;
  *(_DWORD *)(*a2 + 72) = *(_DWORD *)(a4 + 48);
  v11 = *(_DWORD *)(a4 + 48);
  v12 = *a2 + 76;
  if ( !v11 )
    goto LABEL_12;
  v13 = 2LL * v11;
  if ( v13 )
  {
    if ( *a2 == -76 )
      goto LABEL_17;
    if ( a4 != -52 && v13 <= 0x208 )
    {
      memcpy_0((void *)(*a2 + 76), (const void *)(a4 + 52), 2LL * v11);
      goto LABEL_7;
    }
    memset_0((void *)(*a2 + 76), 0, 0x208uLL);
    if ( a4 == -52 )
    {
LABEL_17:
      *(_DWORD *)_o__errno(v10, v8, v9) = 22;
    }
    else
    {
      if ( v13 <= 0x208 )
        goto LABEL_7;
      *(_DWORD *)_o__errno(v10, v8, v9) = 34;
    }
    invalid_parameter_noinfo();
  }
LABEL_7:
  if ( v11 > 2 && *(_WORD *)(a4 + 52) == 92 && *(_WORD *)(a4 + 54) == 63 && *(_WORD *)(a4 + 56) == 63 )
    *(_WORD *)(v12 + 2) = 92;
LABEL_12:
  if ( a3 == 2 )
  {
    v14 = *a2;
    v15 = *(_DWORD *)(a4 + 28);
    *(_QWORD *)(v14 + 44) = *(_QWORD *)(a4 + 20);
    *(_DWORD *)(v14 + 52) = v15;
  }
  else if ( a3 == 4 )
  {
    v17 = *a2;
    v18 = *(_DWORD *)(a4 + 44);
    v19 = *(_QWORD *)(a4 + 36);
    *(_OWORD *)(v17 + 44) = *(_OWORD *)(a4 + 20);
    *(_QWORD *)(v17 + 60) = v19;
    *(_DWORD *)(v17 + 68) = v18;
  }
  else
  {
    *(_WORD *)(*a2 + 32) = *(_WORD *)(a4 + 24);
    *(_WORD *)(*a2 + 34) = *(_WORD *)(a4 + 26);
    *(_WORD *)(*a2 + 36) = *(_WORD *)(a4 + 28);
  }
  return a2;
}
