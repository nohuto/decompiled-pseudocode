/*
 * XREFs of LpcRequestPort @ 0x1407A7CB0
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v6[0] = a1;
  LODWORD(v6[6]) = 65538;
  LODWORD(a1) = sub_1407A9ED0(v6, a2, 0LL, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)a1;
}
