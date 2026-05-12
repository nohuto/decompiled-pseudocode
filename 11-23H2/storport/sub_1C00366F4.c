/*
 * XREFs of sub_1C00366F4 @ 0x1C00366F4
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     StorPortLogError @ 0x1C00468B0 (StorPortLogError.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005B360 @ 0x1C005B360 (sub_1C005B360.c)
 */

void __fastcall sub_1C00366F4(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi
  int v9; // eax

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
    v9 = sub_1C005B360(a3);
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 13) = v9;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1C0093C54);
  }
}
