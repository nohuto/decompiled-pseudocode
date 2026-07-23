/*
 * XREFs of sub_140208D94 @ 0x140208D94
 * Callers:
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140681824 @ 0x140681824 (sub_140681824.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_14069F770 @ 0x14069F770 (sub_14069F770.c)
 *     sub_14069FD1C @ 0x14069FD1C (sub_14069FD1C.c)
 *     sub_14069FFC0 @ 0x14069FFC0 (sub_14069FFC0.c)
 *     sub_14069FFE8 @ 0x14069FFE8 (sub_14069FFE8.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 *     sub_1409193DC @ 0x1409193DC (sub_1409193DC.c)
 *     sub_140AB419C @ 0x140AB419C (sub_140AB419C.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

char __fastcall sub_140208D94(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v4; // bp
  char v5; // r14
  ULONG_PTR Count; // rcx
  __int64 v8; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v14[0] = 0LL;
  v4 = 0;
  v5 = 0;
  sub_140681824(v14);
  if ( (unsigned __int8)sub_140AB419C() )
  {
LABEL_27:
    sub_140681834(v14);
    return 0;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)a2 != 2LL && ((unsigned __int8)sub_14069F770(a2) || *(_QWORD *)a2 != 2LL) )
    {
LABEL_23:
      if ( !v4 )
        goto LABEL_27;
      goto LABEL_24;
    }
    if ( !v4 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      sub_140AB4260();
      sub_14068934C();
      _InterlockedIncrement(&dword_140CE1C20);
      ExWaitForRundownProtectionRelease(a1 + 205);
      ExRundownCompleted(a1 + 205);
      v4 = 1;
      goto LABEL_10;
    }
    Count = a1[519].Count;
    if ( !Count || v5 )
      break;
    if ( (int)sub_1406A0094(Count, v14) < 0 )
      goto LABEL_24;
    sub_1406A0070(a2, 11LL, v14);
    sub_140AB4260();
    if ( !LODWORD(v14[0]) )
    {
      v9 = (void *)sub_14069FFE8(a1[519].Count, 0LL);
      v10 = (void *)sub_14069FFC0(a1[519].Count);
      sub_14068934C();
      if ( v9 )
        ZwClose(v9);
      if ( v10 )
        ZwClose(v10);
      sub_1406893EC();
      LOBYTE(v11) = 1;
      sub_14069FD1C(a1[519].Count, v11);
      v5 = 1;
      goto LABEL_11;
    }
    v15 = 0;
    sub_14068934C();
    if ( (int)sub_1406A0010(v14, &v15) < 0 )
    {
      sub_1406893EC();
      LOBYTE(v12) = 1;
      sub_140689388(v12);
LABEL_24:
      *(_DWORD *)(a2 + 8) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 0LL);
      if ( _InterlockedExchangeAdd(&dword_140CE1C20, 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v13, 0);
        if ( qword_140C49428 )
          sub_140369634(&qword_140C49428, 0LL, 0LL);
      }
      goto LABEL_27;
    }
    if ( v15 == 1 )
      sub_1409193DC(a1[519].Count);
LABEL_10:
    sub_1406893EC();
LABEL_11:
    LOBYTE(v8) = 1;
    sub_140689388(v8);
    if ( (unsigned __int8)sub_140AB419C() )
      goto LABEL_23;
  }
  if ( _InterlockedExchangeAdd(&dword_140CE1C20, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v13, 0);
    if ( qword_140C49428 )
      sub_140369634(&qword_140C49428, 0LL, 0LL);
  }
  sub_140681834(v14);
  return 1;
}
