/*
 * XREFs of sub_1406C8888 @ 0x1406C8888
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 * Callees:
 *     sub_140248BC8 @ 0x140248BC8 (sub_140248BC8.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1403DF20C @ 0x1403DF20C (sub_1403DF20C.c)
 *     sub_1406C8984 @ 0x1406C8984 (sub_1406C8984.c)
 *     sub_1406C8B40 @ 0x1406C8B40 (sub_1406C8B40.c)
 */

__int64 __fastcall sub_1406C8888(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // eax
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  _QWORD *i; // rdi
  _QWORD *v13; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v8 = sub_1406C8984();
  --*((_WORD *)CurrentThread + 242);
  v9 = 0LL;
  v10 = qword_140D3CBC8 + 24LL * v8;
  if ( a4 )
    ExAcquirePushLockExclusiveEx(v10, 0LL);
  else
    ExAcquirePushLockSharedEx(v10, 0LL);
  if ( a1 )
  {
    for ( i = *(_QWORD **)(v10 + 8); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v10 + 8) )
        goto LABEL_6;
      if ( RtlEqualSid(a1, i + 7) )
        break;
    }
    v9 = (__int64)(i - 65);
  }
  else
  {
    if ( !a3 )
      goto LABEL_6;
    v9 = qword_140D3CCF8;
  }
  if ( v9 )
  {
    if ( (unsigned int)sub_1406C8B40(v9) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 516));
    }
    else
    {
      if ( a4 && !a3 )
      {
        v15 = (_QWORD *)(v9 + 520);
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_31;
        v17 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v17 != v15 )
          goto LABEL_31;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
      }
      v9 = 0LL;
    }
  }
LABEL_6:
  if ( a4 )
  {
    if ( v9 )
    {
LABEL_17:
      sub_1403DF20C((__int64)CurrentThread, v10);
      return v9;
    }
    v13 = (_QWORD *)(a4 + 520);
    if ( a3 )
    {
      qword_140D3CCF8 = a4;
      *v13 = 1LL;
      goto LABEL_17;
    }
    v18 = *(_QWORD **)(v10 + 16);
    if ( *v18 == v10 + 8 )
    {
      *v13 = v10 + 8;
      *(_QWORD *)(a4 + 528) = v18;
      *v18 = v13;
      *(_QWORD *)(v10 + 16) = v13;
      goto LABEL_17;
    }
LABEL_31:
    __fastfail(3u);
  }
  sub_140248BC8((__int64)CurrentThread, (volatile signed __int64 *)v10);
  return v9;
}
