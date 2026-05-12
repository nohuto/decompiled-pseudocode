/*
 * XREFs of sub_1C005C994 @ 0x1C005C994
 * Callers:
 *     sub_1C0036230 @ 0x1C0036230 (sub_1C0036230.c)
 *     sub_1C003A38C @ 0x1C003A38C (sub_1C003A38C.c)
 *     sub_1C0060DE0 @ 0x1C0060DE0 (sub_1C0060DE0.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void __fastcall sub_1C005C994(__int64 a1, int a2, int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi

  v4 = a2;
  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset_0(ErrorLogEntry, 0, 0x40uLL);
    *((_DWORD *)v8 + 5) = 0;
    *((_WORD *)v8 + 1) = 24;
    *(_WORD *)(v8 + 49) = *(_WORD *)((char *)&a2 + 1);
    *v8 = 15;
    *((_DWORD *)v8 + 4) = a4;
    v8[48] = v4;
    *((_DWORD *)v8 + 3) = a3;
    *((_DWORD *)v8 + 13) = a3;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1C0093C54);
  }
}
