/*
 * XREFs of Crashdump_Register_ResetPort @ 0x1C004BA30
 * Callers:
 *     Crashdump_InitializeWithControllerReset @ 0x1C004A724 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_ResetDevice @ 0x1C004AC00 (Crashdump_ResetDevice.c)
 * Callees:
 *     Crashdump_Register_LogRHPortInfo @ 0x1C004B78C (Crashdump_Register_LogRHPortInfo.c)
 */

__int64 __fastcall Crashdump_Register_ResetPort(__int64 a1, int a2, int a3)
{
  int *v6; // r14
  unsigned int v7; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebp
  int v12; // ebp
  int v13; // ebx
  int v15; // ebx
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_ResetPort: begin: port %u\n", a2);
  v6 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * ((unsigned int)(a2 - 1) + 64LL));
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Polling port %u for device presence\n", a2);
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *v6;
    if ( (*v6 & 1) != 0 || a3 == 30 && (((*v6 & 0x1E0) - 192) & 0xFFFFFF7F) == 0 )
      break;
    KeStallExecutionProcessor(0xC8u);
    if ( (unsigned int)++v8 >= 0x4E20 )
    {
      if ( v8 == 20000 )
      {
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Unable to detect a device on port %u in %u ms\n", a2, 4000);
        v7 = -1073741632;
        goto LABEL_18;
      }
      break;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device found present on port %u\n", a2);
  *v6 = v9 & 0xE00C200 | 0x20000;
  _InterlockedOr(v17, 0);
  v10 = *v6;
  v11 = 16;
  if ( (*v6 & 0x10) != 0 )
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Port reset is underway on port %u.\n", a2);
  }
  else
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Issuing port reset on port %u.\n", a2);
    if ( a3 != 20 )
      v11 = 0x80000000;
    *v6 = v10 & 0xE00C200 | v11;
    _InterlockedOr(v17, 0);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Checking port %u for reset completion.\n", a2);
  v12 = 0;
  while ( 1 )
  {
    v13 = *v6;
    if ( (*v6 & 0x1E0) == 0 && (*v6 & 0x200013) == 2097155 && (((*v6 & 0x3C00) - 1024) & 0xFFFFFBFF) != 0 )
      break;
    KeStallExecutionProcessor(0x1F4u);
    if ( (unsigned int)++v12 >= 0x3E8 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Port %u failed to reset in %u ms\n", a2, 500 * v12 / 0x3E8u);
      v7 = -1073741630;
      goto LABEL_18;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Port %u is correctly reset in %u ms\n", a2, 500 * v12 / 0x3E8u);
  v15 = v13 & 0xE00C200;
  v16 = v15 | 0x80000;
  if ( a3 != 30 )
    v16 = v15;
  *v6 = v16 | 0x200000;
  _InterlockedOr(v17, 0);
LABEL_18:
  Crashdump_Register_LogRHPortInfo(a1, a2);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_ResetPort: end 0x%X\n", v7);
  return v7;
}
