/*
 * XREFs of sub_1C000EF50 @ 0x1C000EF50
 * Callers:
 *     sub_1C0008ED0 @ 0x1C0008ED0 (sub_1C0008ED0.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C000F470 @ 0x1C000F470 (sub_1C000F470.c)
 *     sub_1C0037120 @ 0x1C0037120 (sub_1C0037120.c)
 *     sub_1C003DD30 @ 0x1C003DD30 (sub_1C003DD30.c)
 *     sub_1C00615D0 @ 0x1C00615D0 (sub_1C00615D0.c)
 * Callees:
 *     sub_1C000F110 @ 0x1C000F110 (sub_1C000F110.c)
 *     sub_1C001175C @ 0x1C001175C (sub_1C001175C.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

char __fastcall sub_1C000EF50(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  struct _KDPC *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-B8h]
  int v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v21; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v22[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5024));
  if ( a3 )
    goto LABEL_6;
  if ( (((unsigned __int64)qword_1C0093468 >> 3) & 1) != 0 )
    sub_1C000F110(a2);
  if ( (*(_BYTE *)(a1 + 564) & 0x10) == 0
    || (LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v7 != 1) )
  {
LABEL_6:
    v5 = *(_QWORD *)(a2 + 160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 141);
      v8 = v6 == -85;
      LOBYTE(v7) = v6 + 85;
      if ( v8 || (_BYTE)v7 == 1 )
      {
        if ( (unsigned int)dword_1C00930C8 > 5 )
        {
          LOBYTE(v7) = sub_1C001ABEC(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4656);
            v22[4] = a1 + 5000;
            v21 = *(_DWORD *)(a1 + 56);
            v22[6] = (__int64)&v21;
            v22[5] = 16LL;
            v22[7] = 4LL;
            sub_1C001AA4C(v23, v12);
            v13 = *(_QWORD *)(a1 + 4664);
            v19 = *(_BYTE *)(a1 + 4212);
            v24 = &v19;
            v25 = 1LL;
            sub_1C001AA4C(v26, v13);
            LOBYTE(v7) = sub_1C001175C((int)v22, (int)&dword_1C00849D1, v14, v15, v17, v18, 7u, (__int64)v22);
          }
        }
        return (char)v7;
      }
      *(_BYTE *)(v5 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
    ProcNumber = v9;
    if ( v9.Group == 0xFFFF )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1 + 4307) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v9.Group = ProcNumber.Group;
    }
    if ( v9.Group >= (unsigned int)dword_1C0093AA8
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)qword_1C0093AA0 + v9.Group) )
    {
LABEL_19:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 256), (PSLIST_ENTRY)(a2 + 32));
      v10 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v11 = 0LL;
      goto LABEL_17;
    }
    v7 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)P + 8 * (unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v7 )
    {
      LOBYTE(v7) = ProcNumber.Number;
      v10 = (struct _KDPC *)((char *)P + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      if ( LODWORD(v10[1].ProcessorHistory) != 2 )
      {
        v11 = *(void **)(a1 + 8);
LABEL_17:
        LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
      }
    }
  }
  return (char)v7;
}
