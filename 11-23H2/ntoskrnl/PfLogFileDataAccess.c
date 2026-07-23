/*
 * XREFs of PfLogFileDataAccess @ 0x1402DFE64
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF7B0 (PfFileInfoNotify.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 * Callees:
 *     PfLogEvent @ 0x14028C318 (PfLogEvent.c)
 *     PsGetPagePriorityThread @ 0x1402E17B0 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int PagePriorityThread; // eax
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r11
  unsigned int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  PagePriorityThread = PsGetPagePriorityThread(a2);
  if ( PagePriorityThread < v10 )
    return 0LL;
  v11 = *(_QWORD *)(v9 + 544);
  v12 = *(_QWORD *)(v11 + 1088) ^ *(_QWORD *)(v11 + 1128);
  v14[2] = v8 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v14[1] = v7 >> 12;
  v15 = dword_140D0C190;
  v16 = *(_DWORD *)(v11 + 1088);
  v14[3] = v12 & 0x1FFFFFFFFFFFFFFFLL;
  v14[0] = a1;
  return PfLogEvent(
           10,
           dword_140C64FAC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           v14,
           0x28u);
}
