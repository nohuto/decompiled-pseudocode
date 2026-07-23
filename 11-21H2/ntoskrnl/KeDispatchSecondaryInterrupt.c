/*
 * XREFs of KeDispatchSecondaryInterrupt @ 0x14056EBB0
 * Callers:
 *     sub_14051D820 @ 0x14051D820 (sub_14051D820.c)
 * Callees:
 *     sub_14056F060 @ 0x14056F060 (sub_14056F060.c)
 *     sub_140575CD8 @ 0x140575CD8 (sub_140575CD8.c)
 */

char __fastcall KeDispatchSecondaryInterrupt(int a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // rdi
  char v5; // si
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[1] = v7;
  v7[0] = v7;
  CurrentIrql = KeGetCurrentIrql();
  v4 = v7;
  if ( !CurrentIrql )
    v4 = 0LL;
  v5 = sub_140575CD8(1, a1, (a2 >> 20) & 1, (_DWORD)v4, a3);
  if ( CurrentIrql )
    sub_14056F060(v4);
  return v5;
}
