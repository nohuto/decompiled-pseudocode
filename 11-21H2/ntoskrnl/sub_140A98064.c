/*
 * XREFs of sub_140A98064 @ 0x140A98064
 * Callers:
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 * Callees:
 *     sub_1406015A4 @ 0x1406015A4 (sub_1406015A4.c)
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A98D0C @ 0x140A98D0C (sub_140A98D0C.c)
 *     sub_140A98DCC @ 0x140A98DCC (sub_140A98DCC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A997C0 @ 0x140A997C0 (sub_140A997C0.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 */

__int64 __fastcall sub_140A98064(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v4; // edi
  unsigned __int8 v5; // r14
  __int64 v6; // rax

  v1 = 0;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
    return 0LL;
  if ( (unsigned int)dword_140D06884 > 4 )
    return 0LL;
  if ( !qword_140D57500 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( dword_140D5751C )
  {
    v2 = sub_140A98DCC(3LL);
    if ( !v2 )
      return 0LL;
  }
  v4 = 0;
  v5 = sub_1406018DC();
  while ( 1 )
  {
    sub_140A994C4(v4);
    v6 = sub_140A9A000(CurrentThread);
    if ( v6 )
      break;
    if ( !dword_140D5751C )
      goto LABEL_14;
    if ( v4 || (v4 = 1, sub_1406015A4()) )
    {
      v6 = sub_140A98D0C(CurrentThread, v2);
      v2 = 0LL;
      break;
    }
    sub_140A994FC(0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
  v1 = 1;
LABEL_14:
  sub_140A994FC(v4);
  sub_140601864(v5);
  if ( v2 )
    sub_140A997C0(v2, 3LL);
  return v1;
}
