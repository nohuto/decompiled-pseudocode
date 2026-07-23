/*
 * XREFs of sub_140A59654 @ 0x140A59654
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1403C1E10 @ 0x1403C1E10 (sub_1403C1E10.c)
 *     sub_1403C1E60 @ 0x1403C1E60 (sub_1403C1E60.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_140A59654(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 33600;
  memset(DeferredContext + 33600, 0, 0x230uLL);
  *((_DWORD *)DeferredContext + 8302) = 0x10000;
  *((_QWORD *)v1 + 29) = sub_1408553A0;
  v1[248] = 1;
  *((_WORD *)v1 + 213) = 100;
  v1[216] = 2;
  KeInitializeDpc((PRKDPC)(v1 + 280), (PKDEFERRED_ROUTINE)sub_140343B00, DeferredContext);
  sub_1403C1E60((__int64)DeferredContext, 1);
  if ( !*((_QWORD *)v1 + 42) )
    *((_WORD *)v1 + 141) = *((_DWORD *)DeferredContext + 9) + 2048;
  v1[281] = 3;
  result = sub_1403C1E10();
  if ( result )
  {
    *((_DWORD *)v1 + 56) = 0;
  }
  else
  {
    result = -(dword_140D0688C & 2);
    *((_DWORD *)v1 + 56) = ((dword_140D0688C & 2) != 0) + 1;
  }
  v1[432] = 1;
  return result;
}
