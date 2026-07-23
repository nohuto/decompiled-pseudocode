/*
 * XREFs of sub_140996854 @ 0x140996854
 * Callers:
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409967E4 @ 0x1409967E4 (sub_1409967E4.c)
 */

char sub_140996854()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C207A0, 1u);
  if ( (dword_140C20808 & 2) != 0 )
  {
    _m_prefetchw(&dword_140C1CB40);
    v1 = dword_140C1CB40;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&dword_140C1CB40, v1, v1);
    }
    while ( v2 != v1 );
    if ( !v1 )
    {
      v3 = MEMORY[0xFFFFF78000000008];
      sub_14039AD4C((__int64)&v6);
      v4 = qword_140C22048;
      if ( (dword_140C208C4 & 1) != 0 )
      {
        dword_140C208D4 = 0;
        qword_140C208C8 = 0LL;
        xmmword_140C208F8 = v6;
        dword_140C208D8 = dword_140C20790;
        qword_140C208E0 = v3;
        qword_140C208E8 = v3;
        xmmword_140C20908 = v7;
        sub_1409967E4((__int64)&unk_140C20810);
      }
      if ( (dword_140C209CC & 1) != 0 )
      {
        memset(&unk_140C209D0, 0, 0x50uLL);
        dword_140C209F4 = dword_140C229E4;
        xmmword_140C20A00 = v6;
        qword_140C209F8 = qword_140C541A8;
        xmmword_140C20A10 = v7;
        sub_1409967E4((__int64)&unk_140C20918);
      }
      dword_140C20808 |= 4u;
      qword_140C20A28 = v4;
    }
  }
  ExReleaseResourceLite(&stru_140C207A0);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
