/*
 * XREFs of sub_140918C40 @ 0x140918C40
 * Callers:
 *     sub_14090E7A0 @ 0x14090E7A0 (sub_14090E7A0.c)
 * Callees:
 *     sub_14025E900 @ 0x14025E900 (sub_14025E900.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_140918C40(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *i; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rdi

  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)sub_140AB46D0(a1, a2, a3) )
  {
    sub_14071B6EC();
    if ( dword_140D01100 )
    {
      v4 = -1073741431;
      sub_140AB4260(v6, v5, v7, v8);
    }
    else
    {
      for ( i = sub_14071B350(0LL); ; i = sub_14071B350(v12) )
      {
        v12 = (struct _EX_RUNDOWN_REF *)i;
        if ( !i )
          break;
        if ( (i[20] & 3) == 0 )
        {
          *(_OWORD *)(i[8] + 4056) = *(_OWORD *)(i[8] + 112);
          *(_OWORD *)(i[8] + 4040) = *(_OWORD *)(i[8] + 148);
          *(_OWORD *)(i[8] + 4072) = *(_OWORD *)(i[8] + 128);
          *(_OWORD *)(i[8] + 112) = 0LL;
          *(_OWORD *)(i[8] + 148) = 0LL;
          *(_OWORD *)(i[8] + 128) = 0LL;
          *(_DWORD *)(i[8] + 164) = 0;
          if ( (i[514] & 0x300) != 0x100 && !*((_DWORD *)i + 26) )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 10), 0LL);
            sub_1406CA514((__int64)v12);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v12[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&v12[10]);
            sub_1402AFC00((ULONG_PTR)&v12[10]);
          }
        }
      }
      v13 = dword_140C0C6A8;
      dword_140D01100 = 1;
      if ( v3 )
        v13 = v3;
      sub_1402E2D20((unsigned __int64)&stru_140C492A0, -10000000LL * v13, 0, 0, (__int64)&stru_140C49260);
      sub_14025E900(2u);
      sub_140AB4260(v15, v14, v16, v17);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      for ( j = 0LL; ; j = v21 )
      {
        v20 = sub_14071B350(j);
        v21 = (struct _EX_RUNDOWN_REF *)v20;
        if ( !v20 )
          break;
        if ( (v20[20] & 3) == 0 )
        {
          v4 = sub_1406885A4((ULONG_PTR)v20, 0xDu);
          if ( v4 < 0 )
          {
            sub_1402AD030(v21 + 205);
            sub_140918E48();
            v4 = -1073741491;
            break;
          }
        }
      }
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    sub_140AB42A0(v10, v9);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
