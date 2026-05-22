/*
 * XREFs of ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003EC60
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18003EB00 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     memcpy_s @ 0x180035778 (memcpy_s.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall Win32kInterop::CreateDeviceInfo(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _DWORD *v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // xmm0_8

  v7 = operator new(0x60CuLL);
  memset_0(v7, 0, 0x60CuLL);
  v7[2] = 1548;
  *a2 = (__int64)v7;
  *v7 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(*a2 + 4) = a3;
  *(_BYTE *)(*a2 + 12) = *(_DWORD *)(a4 + 12) != 0;
  *(_DWORD *)(*a2 + 16) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(*a2 + 72) = *(_DWORD *)(a4 + 48);
  v8 = *(_DWORD *)(a4 + 48);
  v9 = *a2;
  if ( v8 )
  {
    memcpy_s((void *const)(v9 + 76), 0x208uLL, (const void *const)(a4 + 52), 2LL * v8);
    if ( v8 > 2 && *(_WORD *)(a4 + 52) == 92 && *(_WORD *)(a4 + 54) == 63 && *(_WORD *)(a4 + 56) == 63 )
      *(_WORD *)(v9 + 78) = 92;
  }
  if ( a3 == 2 )
  {
    v10 = *a2;
    v11 = *(_DWORD *)(a4 + 28);
    *(_QWORD *)(v10 + 44) = *(_QWORD *)(a4 + 20);
    *(_DWORD *)(v10 + 52) = v11;
  }
  else if ( a3 == 4 )
  {
    v13 = *a2;
    v14 = *(_DWORD *)(a4 + 44);
    v15 = *(_QWORD *)(a4 + 36);
    *(_OWORD *)(v13 + 44) = *(_OWORD *)(a4 + 20);
    *(_QWORD *)(v13 + 60) = v15;
    *(_DWORD *)(v13 + 68) = v14;
  }
  else
  {
    *(_WORD *)(*a2 + 32) = *(_WORD *)(a4 + 24);
    *(_WORD *)(*a2 + 34) = *(_WORD *)(a4 + 26);
    *(_WORD *)(*a2 + 36) = *(_WORD *)(a4 + 28);
  }
  return a2;
}
