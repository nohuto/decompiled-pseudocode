/*
 * XREFs of sub_1406F7D78 @ 0x1406F7D78
 * Callers:
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D75D4 @ 0x1402D75D4 (sub_1402D75D4.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405B21D0 @ 0x1405B21D0 (sub_1405B21D0.c)
 *     sub_1406F7EFC @ 0x1406F7EFC (sub_1406F7EFC.c)
 */

__int64 __fastcall sub_1406F7D78(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v5; // eax
  unsigned __int64 v6; // rbx
  int v8; // r13d
  void *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  _OWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v22[0] = 0LL;
  v5 = a4;
  v6 = a2;
  v8 = 1;
LABEL_2:
  if ( v5 )
    sub_14030B820((__int64)CurrentThread, a1);
  else
    sub_14030EB30((__int64)CurrentThread, a1);
  if ( !v8 || (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
    return 0LL;
  if ( v6 == -1LL )
    v9 = sub_1402D75D4(a1);
  else
    v9 = sub_1403126F0(v6);
  v10 = 0LL;
  v11 = (unsigned __int64)v9;
  v12 = 0LL;
  for ( i = (unsigned __int64)v9; i; i = v14 )
  {
    v14 = sub_140281C00(i);
    if ( a3 == -1LL )
      goto LABEL_13;
    v15 = *(unsigned int *)(i + 28);
    if ( a3 <= (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
    {
      v14 = 0LL;
      goto LABEL_13;
    }
    if ( v14 )
    {
      if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 == (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
        goto LABEL_13;
      v14 = 0LL;
    }
    v8 = 0;
LABEL_13:
    if ( (unsigned int)sub_1406F7EFC(i) )
    {
      *((_QWORD *)v22 + v12) = i;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(i + 40, 0LL);
      else
        sub_14030B7F0((__int64)CurrentThread, i);
      if ( (unsigned int)sub_14030EB80(i) || !v8 )
      {
        sub_14030EB64(v16);
        if ( v11 != i )
        {
          do
          {
            v20 = sub_140281C00(v11);
            if ( !(unsigned int)sub_1406F7EFC(v11) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v11 + 40);
              sub_1402AFC00(v11 + 40);
            }
            v11 = v20;
          }
          while ( v20 != i );
        }
        if ( a4 )
          sub_140281A58((__int64)CurrentThread, a1);
        else
          sub_1405B21D0((__int64)CurrentThread, a1);
        if ( (unsigned int)sub_14030EB80(i) )
          sub_140202010(v21);
        sub_14032E700((char *)i);
        v5 = a4;
        v6 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
  }
  if ( v8 && (_DWORD)v12 )
  {
    v18 = (__int64 *)v22;
    v19 = (unsigned int)v12;
    do
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(*v18 + 40, 0LL);
      else
        sub_14030B7F0((__int64)CurrentThread, *v18);
      ++v10;
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  return v10;
}
