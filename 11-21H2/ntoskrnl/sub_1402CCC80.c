/*
 * XREFs of sub_1402CCC80 @ 0x1402CCC80
 * Callers:
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_1402CCC80(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)a1;
  if ( (unsigned int)sub_140317A80(a1)
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8 * ((a1 >> 3) & 0x1FF));
      v8 = v1 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v1;
      v1 = v8;
      if ( (v7 & 0x42) != 0 )
        v1 = v8 | 0x42;
    }
  }
  _InterlockedOr(v10, 0);
  if ( v1 && qword_140C50780 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_140C50780 & v1;
  }
  CurrentThread = (struct _KTHREAD *)sub_1402CCC50(((unsigned __int64)(unsigned int)dword_140D31080 << 32) | (unsigned int)v1);
  v4 = (__int64)CurrentThread;
  if ( !v5 )
    goto LABEL_4;
  if ( !(unsigned int)sub_140229550() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *(_QWORD *)a1 = v4;
    return (char)CurrentThread;
  }
  if ( !HIBYTE(word_140C51864) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  LOBYTE(CurrentThread) = sub_1402294F0(a1, v4);
  return (char)CurrentThread;
}
