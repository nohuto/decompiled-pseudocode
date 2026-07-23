/*
 * XREFs of sub_14033BC30 @ 0x14033BC30
 * Callers:
 *     sub_140269118 @ 0x140269118 (sub_140269118.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 */

void __fastcall sub_14033BC30(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r13
  char *v9; // r14
  unsigned __int8 v10; // al
  __int64 v11; // r9
  __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  bool v17; // zf
  signed __int32 v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  _OWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-18h]
  unsigned int v23; // [rsp+B0h] [rbp+48h]
  unsigned __int8 v24; // [rsp+B8h] [rbp+50h]
  _QWORD *v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( (a2 & 1) != 0 )
  {
    v2 = 18LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v2 = 3LL;
  }
  else
  {
    v2 = (unsigned __int8)byte_140C5304C;
  }
  v3 = (unsigned int)v2;
  v23 = v2 + 1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a1 - 8 * v2;
  v7 = (_QWORD *)v6;
  v25 = (_QWORD *)v6;
  v8 = v6 + 8LL * (unsigned int)(v2 + 1);
  v9 = sub_14026DFC0(4);
  v10 = sub_1402CF4F0((__int64)v9);
  v24 = v10;
  if ( v6 >= v8 )
    goto LABEL_16;
  do
  {
    if ( v4 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_7;
      sub_14020D8D0((__int64)v9, v4);
    }
    v4 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00((__int64)v9, v4, 0LL, v11);
LABEL_7:
    v12 = *(_QWORD *)v6;
    if ( sub_140317A80(v6)
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v12 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
    }
    v26 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48
                       + 8
                       * ((*(_QWORD *)(48
                                     * (((unsigned __int64)sub_140317A10((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
                                     - 0x220000000000LL
                                     + 40) >> 43) & 0x3FFLL));
      sub_14033BEC0(v9, v6, 0LL, v21);
      ++*(_QWORD *)&v21[0];
    }
    v6 += 8LL;
  }
  while ( v6 < v8 );
  if ( v4 )
    sub_14020D8D0((__int64)v9, v4);
  v10 = v24;
  v7 = v25;
LABEL_16:
  sub_1402B0CE0((__int64)v9, v10);
  if ( (ULONG_PTR *)v5 != &StartContext
    || (_InterlockedExchangeAdd64(&qword_140C53548, -v3),
        CurrentPrcb = KeGetCurrentPrcb(),
        v14 = *(_QWORD *)&v21[0],
        v15 = *((int *)CurrentPrcb + 8615),
        (_DWORD)v15 == -1) )
  {
    v14 = *(_QWORD *)&v21[0];
  }
  else
  {
    v16 = *(_QWORD *)&v21[0];
    if ( (unsigned __int64)(*(_QWORD *)&v21[0] + v15) <= 0x100 )
    {
      do
      {
        if ( v16 >= 0x80000 )
          break;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v15 + v16, v15);
        v17 = (_DWORD)v15 == v18;
        LODWORD(v15) = v18;
        if ( v17 )
          goto LABEL_21;
        if ( v18 == -1 )
          break;
        v16 = *(_QWORD *)&v21[0];
      }
      while ( (unsigned __int64)(*(_QWORD *)&v21[0] + v18) <= 0x100 );
    }
    if ( (int)v15 > 192
      && (_DWORD)v15 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v15) )
    {
      v14 = *(_QWORD *)&v21[0] + (int)v15 - 192;
    }
  }
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v14);
LABEL_21:
  sub_1402BB6D0((__int64)&unk_140C52F98, v7, v23);
  sub_14028CE10(v5, v3 - *((_QWORD *)&v21[0] + 1));
}
