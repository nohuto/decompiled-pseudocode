/*
 * XREFs of sub_14080FBCC @ 0x14080FBCC
 * Callers:
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14080FCA4 @ 0x14080FCA4 (sub_14080FCA4.c)
 *     sub_14080FCD0 @ 0x14080FCD0 (sub_14080FCD0.c)
 *     sub_14080FD00 @ 0x14080FD00 (sub_14080FD00.c)
 */

__int64 __fastcall sub_14080FBCC(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C49220, 0LL);
  v5 = qword_140C49228;
  v6 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v5 == &qword_140C49228 )
      goto LABEL_5;
    if ( *(_QWORD *)(v5 + 24) == a1 )
      break;
    v5 = *(_QWORD *)v5;
  }
  if ( v5 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 16)) <= 1 )
      __fastfail(0xEu);
LABEL_8:
    *a2 = v5;
    sub_14080FCA4();
    return v6;
  }
LABEL_5:
  sub_14080FCA4();
  v5 = sub_14080FD00(a1);
  if ( v5 )
  {
    *(_WORD *)(a1 + 8) |= 0x80u;
    sub_14080FCD0();
    v7 = (__int64 *)qword_140C49230;
    if ( *(__int64 **)qword_140C49230 != &qword_140C49228 )
      __fastfail(3u);
    *(_QWORD *)v5 = &qword_140C49228;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    qword_140C49230 = v5;
    goto LABEL_8;
  }
  return (unsigned int)-1073741670;
}
