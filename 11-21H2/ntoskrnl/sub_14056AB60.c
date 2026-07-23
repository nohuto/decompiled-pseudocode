/*
 * XREFs of sub_14056AB60 @ 0x14056AB60
 * Callers:
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_14056AB60()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _EX_RUNDOWN_REF *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --*((_WORD *)CurrentThread + 242);
  v4 = sub_140281870(&qword_140C2BD40);
  if ( v4 )
  {
    v1 = sub_14042A5E0(v3, v2);
    _m_prefetchw(&qword_140C2BD40);
    v5 = qword_140C2BD40;
    while ( ((unsigned __int64)v4 ^ v5) < 0xF )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(&qword_140C2BD40, v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_6;
    }
    sub_1402AD030(v4);
  }
LABEL_6:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v1;
}
