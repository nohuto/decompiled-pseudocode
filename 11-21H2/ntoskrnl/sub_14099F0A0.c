/*
 * XREFs of sub_14099F0A0 @ 0x14099F0A0
 * Callers:
 *     sub_14098BD1C @ 0x14098BD1C (sub_14098BD1C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_140943144 @ 0x140943144 (sub_140943144.c)
 *     sub_14098C094 @ 0x14098C094 (sub_14098C094.c)
 */

void sub_14099F0A0()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *i; // rax
  _QWORD *v5; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(&dword_140C1CB40);
  v0 = dword_140C1CB40;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&dword_140C1CB40, v0, v0);
  }
  while ( v1 != v0 );
  if ( v0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1CB30, 0LL);
    v8 = qword_140C21FA8;
    sub_140811764(byte_140C1CB28 != 0 ? 4 : 2, &v8);
    sub_140943144(1);
    v3 = qword_140C46278;
    for ( i = (_QWORD *)*((_QWORD *)qword_140C46278 + 1); i; i = (_QWORD *)i[1] )
      v3 = i;
    while ( v3 != qword_140C46278 )
    {
      if ( v3[10] )
      {
        Buffer[1] = *((unsigned __int16 *)v3 + 20) >> 1;
        v7 = v3[6];
        Buffer[0] = 1;
        if ( RtlLookupElementGenericTableAvl(&stru_140C1CAC0, Buffer) )
          sub_14098C094(v3[10]);
      }
      v5 = (_QWORD *)*v3;
      if ( *v3 )
      {
        do
        {
          v3 = v5;
          v5 = (_QWORD *)v5[1];
        }
        while ( v5 );
      }
      else
      {
        v3 = (_QWORD *)v3[2];
      }
    }
    sub_140943144(0);
    sub_140811764(byte_140C1CB28 != 0 ? 5 : 3, &v8);
    sub_1402935D0((ULONG_PTR)&qword_140C1CB30);
  }
}
