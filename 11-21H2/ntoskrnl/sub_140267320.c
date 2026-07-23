/*
 * XREFs of sub_140267320 @ 0x140267320
 * Callers:
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_14058DE20 @ 0x14058DE20 (sub_14058DE20.c)
 * Callees:
 *     sub_14023B3C8 @ 0x14023B3C8 (sub_14023B3C8.c)
 *     NaptrDnsRecordConvert @ 0x140267594 (NaptrDnsRecordConvert.c)
 *     sub_1402676A8 @ 0x1402676A8 (sub_1402676A8.c)
 *     sub_140267708 @ 0x140267708 (sub_140267708.c)
 *     sub_140267820 @ 0x140267820 (sub_140267820.c)
 *     sub_1402678C8 @ 0x1402678C8 (sub_1402678C8.c)
 *     sub_140267B58 @ 0x140267B58 (sub_140267B58.c)
 *     sub_140267CA8 @ 0x140267CA8 (sub_140267CA8.c)
 *     sub_140268BB0 @ 0x140268BB0 (sub_140268BB0.c)
 *     sub_140268BEC @ 0x140268BEC (sub_140268BEC.c)
 *     sub_140268CA8 @ 0x140268CA8 (sub_140268CA8.c)
 *     sub_140268E74 @ 0x140268E74 (sub_140268E74.c)
 *     sub_140269464 @ 0x140269464 (sub_140269464.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A0964 @ 0x1405A0964 (sub_1405A0964.c)
 */

__int64 __fastcall sub_140267320(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  signed __int32 v16[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v17[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = *(_QWORD *)(a1 + 16600);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 88) )
    *(_QWORD *)(v4 + 88) = KeGetCurrentThread();
  sub_1402678C8(a1, 0LL, 0LL);
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    sub_140267820();
    sub_140267708();
    sub_1402676A8();
  }
  sub_1403122F0(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x18) != 0 )
    sub_14023B3C8(a1, (__int64)sub_14023A710, 0LL, 0xFFFFFFFF);
  NaptrDnsRecordConvert(a1, 1LL);
  sub_1402864A0(a1, 0LL);
  if ( ++*(_DWORD *)(v4 + 32) == *(_DWORD *)(v4 + 36) )
  {
    v13 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v14 = ((_BYTE)v13 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v14;
    v15 = ((_BYTE)v14 - 8) & 0xF;
    if ( *(_QWORD *)(88 * v15 + a1 + 5120) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v15 + 285)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &StartContext && !a2 )
    KePulseEvent(&stru_140C53350, 0, 0);
  v17[4] = 1;
  while ( 1 )
  {
    v6 = v17[4];
    while ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      sub_140373F80(a1);
    sub_14030BBF0(a1, v17);
    while ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      sub_140373F80(a1);
    if ( v17[4] == 1 )
      break;
    if ( v6 == v17[4] )
    {
      v17[4] = 1;
      ++*(_DWORD *)(v4 + 2576);
    }
    else
    {
      sub_140268CA8(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
      ++*(_DWORD *)(v4 + 2572);
      sub_140268BEC(a1);
      v5 = 1;
    }
  }
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    sub_140269464();
    if ( byte_140C4F2EA )
      sub_1405A0964(0LL);
  }
  sub_140268E74(a1);
  if ( !v5 )
  {
    sub_140268CA8(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
    sub_140268BEC(a1);
  }
  if ( (unsigned int)sub_140268BB0(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1096) )
    {
      _InterlockedOr(v16, 0);
      LOBYTE(v7) = 1;
      v8 = sub_1402F5718(v7);
      if ( (unsigned __int64)(v8 - *(_QWORD *)(a1 + 1104)) >= 0x861C46800LL )
      {
        if ( byte_140C529C1 )
        {
          *(_QWORD *)(a1 + 1104) = v8 - 33000000000LL;
        }
        else if ( (unsigned __int8)sub_1403606EC(*(_QWORD *)(a1 + 176), 36000000000LL, v9) )
        {
          *(_QWORD *)(a1 + 1072) = 0LL;
          *(_QWORD *)(a1 + 1088) = sub_14059D170;
          *(_QWORD *)(a1 + 1096) = a1;
          sub_1402EF060(a1 + 1072);
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 17280);
  v11 = *(_QWORD *)(a1 + 17504);
  if ( v10 > v11 && v10 - v11 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
  sub_140267CA8(a1);
  return sub_140267B58(a1);
}
