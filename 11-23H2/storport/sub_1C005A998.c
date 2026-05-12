/*
 * XREFs of sub_1C005A998 @ 0x1C005A998
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void __fastcall sub_1C005A998(void *a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v8; // rbx

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 0x48u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset_0(ErrorLogEntry, 0, 0x48uLL);
    v8[3] = -2147221448;
    *((_WORD *)v8 + 1) = 32;
    v8[4] = 10;
    v8[5] = -1073741801;
    *((_QWORD *)v8 + 6) = a2;
    *((_QWORD *)v8 + 7) = a3;
    v8[16] = a4;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1C0093C54);
  }
}
