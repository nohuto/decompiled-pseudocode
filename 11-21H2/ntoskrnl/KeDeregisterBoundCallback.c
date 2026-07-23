/*
 * XREFs of KeDeregisterBoundCallback @ 0x14056A090
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_1409FB4DC @ 0x1409FB4DC (sub_1409FB4DC.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // di
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --*((_WORD *)CurrentThread + 242);
  v4 = sub_140281870(&qword_140C2BD40);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( v4[1].Count == a1 )
      v6 = sub_1403C7678(&qword_140C2BD40, 0LL, (__int64)v4);
    _m_prefetchw(&qword_140C2BD40);
    v7 = qword_140C2BD40;
    while ( ((unsigned __int64)v5 ^ v7) < 0xF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&qword_140C2BD40, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_8;
    }
    sub_1402AD030(v5);
LABEL_8:
    if ( v6 )
    {
      sub_1409FB4DC(v5);
      sub_1406D9550(v5);
      v3 = 0;
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v3;
}
