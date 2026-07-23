/*
 * XREFs of sub_1405CFA04 @ 0x1405CFA04
 * Callers:
 *     sub_1406CA588 @ 0x1406CA588 (sub_1406CA588.c)
 *     sub_14098F0F0 @ 0x14098F0F0 (sub_14098F0F0.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1405CFA04(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *i; // rdi
  signed __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  char v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+21h] [rbp-17h]
  char v10; // [rsp+23h] [rbp-15h]
  int v11; // [rsp+24h] [rbp-14h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v11 = a2;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v8 = *(_BYTE *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23910, 0LL);
  for ( i = (signed __int64 *)off_140C06770; i != (signed __int64 *)&off_140C06770; i = (signed __int64 *)*i )
  {
    v4 = i + 2;
    v5 = sub_140281870(i + 2);
    if ( v5 )
    {
      if ( *((_BYTE *)i - 16) != v8 )
        sub_14042A5E0(v5, &v8);
      _m_prefetchw(v4);
      v6 = *v4;
      while ( ((unsigned __int64)v5 ^ v6) < 0xF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v4, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      sub_1402AD030(v5);
    }
LABEL_9:
    ;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C23910);
}
