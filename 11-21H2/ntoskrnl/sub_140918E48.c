/*
 * XREFs of sub_140918E48 @ 0x140918E48
 * Callers:
 *     sub_14090FC50 @ 0x14090FC50 (sub_14090FC50.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140918FE0 @ 0x140918FE0 (sub_140918FE0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B63D0 @ 0x1403B63D0 (sub_1403B63D0.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 sub_140918E48()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v0 = 0;
  KeCancelTimer(&stru_140C492A0);
  if ( (unsigned __int8)sub_140AB46D0(v2, v1, v3) )
  {
    sub_14071B6EC();
    if ( dword_140D01100 == 1 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v11 )
      {
        v10 = sub_14071B350(i);
        v11 = (__int64)v10;
        if ( !v10 )
          break;
        v9 = v10[8];
        if ( !*(_DWORD *)(v9 + 164) )
        {
          *(_OWORD *)(v9 + 112) = *(_OWORD *)(v9 + 4056);
          *(_OWORD *)(*(_QWORD *)(v11 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v11 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v11 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v11 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v11 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v11 + 4112) & 0x300) != 0x100 && !*(_DWORD *)(v11 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v11 + 80, 0LL);
            sub_1406CA514(v11);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v11 + 80);
            sub_1402AFC00(v11 + 80);
          }
        }
      }
      while ( (__int64 *)qword_140C49250 != &qword_140C49250 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49240, 0LL);
        v12 = qword_140C49250;
        if ( *(__int64 **)(qword_140C49250 + 8) != &qword_140C49250
          || (v13 = *(_QWORD *)qword_140C49250, *(_QWORD *)(*(_QWORD *)qword_140C49250 + 8LL) != qword_140C49250) )
        {
          __fastfail(3u);
        }
        qword_140C49250 = *(_QWORD *)qword_140C49250;
        *(_QWORD *)(v13 + 8) = &qword_140C49250;
        ExReleasePushLockEx((ULONG_PTR)&qword_140C49240, 0LL);
        KeSetEvent((PRKEVENT)(v12 + 16), 0, 0);
      }
      dword_140D01100 = 0;
      sub_1403B63D0(2);
    }
    else
    {
      v0 = -1073741431;
    }
    sub_140AB4260(v5, v4, v6, v7);
    sub_140AB42A0(v15, v14);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
