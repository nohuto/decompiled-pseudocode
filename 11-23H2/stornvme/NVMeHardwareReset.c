/*
 * XREFs of NVMeHardwareReset @ 0x1C000F3FC
 * Callers:
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     IsNVMeResetComplete @ 0x1C000C1E0 (IsNVMeResetComplete.c)
 */

__int64 NVMeHardwareReset(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LOBYTE(v8) = 0;
  if ( (unsigned int)StorPortExtendedFunction(109LL, a1, (__int64 *)va) || (_BYTE)v8 )
  {
    v6 = -1056964600;
    goto LABEL_14;
  }
  v5 = StorPortExtendedFunction(114LL, a1, a2);
  if ( !IsNVMeResetComplete(a1) )
  {
    v6 = -1056964607;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL);
    goto LABEL_14;
  }
  v6 = v5;
  if ( v5 )
  {
LABEL_14:
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        ++*(_DWORD *)(a1 + 4452);
        *(_DWORD *)(a1 + 36) = 28;
      }
      else if ( a2 == 1 )
      {
        ++*(_DWORD *)(a1 + 4460);
        *(_DWORD *)(a1 + 36) = 29;
      }
    }
    else
    {
      ++*(_DWORD *)(a1 + 4444);
      *(_DWORD *)(a1 + 36) = 25;
    }
    return v6;
  }
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      ++*(_DWORD *)(a1 + 4448);
    }
    else if ( a2 == 1 )
    {
      ++*(_DWORD *)(a1 + 4456);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 4440);
  }
  return v6;
}
