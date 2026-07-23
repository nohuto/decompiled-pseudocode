/*
 * XREFs of PsIsProcessLoggingEnabled @ 0x140338A70
 * Callers:
 *     NtProtectVirtualMemory @ 0x1406F93E0 (NtProtectVirtualMemory.c)
 *     MiReadWriteVirtualMemory @ 0x1407AE6E0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsIsProcessLoggingEnabled(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // eax
  _DWORD *v5; // r9

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( a3 != 16 )
  {
    switch ( a3 )
    {
      case 8:
        v4 = 0x20000000;
        if ( a1 != a2 )
          v4 = 0x10000000;
        break;
      case 32:
        v4 = 0x2000000;
        goto LABEL_3;
      case 2:
        v4 = 0x100000;
        break;
      case 2048:
        v4 = 0x80000;
        break;
      default:
        goto LABEL_4;
    }
    v5 = (_DWORD *)(a2 + 2172);
    goto LABEL_4;
  }
  v4 = 0x1000000;
LABEL_3:
  v5 = (_DWORD *)(a2 + 1120);
LABEL_4:
  LOBYTE(v3) = (v4 & *v5) != 0;
  return v3;
}
