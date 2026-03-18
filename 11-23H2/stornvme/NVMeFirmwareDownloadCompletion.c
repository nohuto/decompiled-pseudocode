/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C00154C0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // ecx

  result = GetSrbExtension(a2);
  v8 = result;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v9 = *(_QWORD *)(v7 + 64);
  else
    v9 = *(_QWORD *)(v7 + 24);
  if ( a3 )
  {
    *(_DWORD *)(v9 + 20) = *(_BYTE *)(v7 + 3) != 1;
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 8) != 0 || (v10 = *(_QWORD *)(v8 + 4216)) == 0 )
    {
      *(_DWORD *)(v8 + 4216) = 0;
    }
    else
    {
      result = StorPortExtendedFunction(1LL, a1, v10);
      *(_QWORD *)(v8 + 4216) = 0LL;
    }
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      v11 = 6;
      result = *(unsigned __int16 *)(a3 + 14) >> 1;
      if ( (unsigned __int8)result != 6 )
      {
        v11 = 16;
        if ( (unsigned __int8)result == 7 )
          v11 = 7;
      }
      *(_DWORD *)(v9 + 20) = v11;
      if ( *(_BYTE *)(a1 + 22) )
        result = StorPortExtendedFunction(85LL, a1, 0LL);
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(v7 + 3) = 4;
  }
  *(_BYTE *)(v8 + 4253) |= 8u;
  return result;
}
