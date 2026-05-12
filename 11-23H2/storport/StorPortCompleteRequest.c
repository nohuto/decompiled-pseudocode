/*
 * XREFs of StorPortCompleteRequest @ 0x1C0045F40
 * Callers:
 *     sub_1C00B2170 @ 0x1C00B2170 (sub_1C00B2170.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  int v7; // ebp
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0LL;
  v6 = a4;
  HIBYTE(v15) = 0;
  v7 = a3;
  v8 = a2;
  v9 = (__int64)sub_1C000E2EC(a1);
  v10 = v9;
  if ( !v9 )
    return v9;
  if ( (qword_1C0093468 & 0x40) != 0 )
    sub_1C0019E4C(
      v9,
      12,
      v9,
      v6 | (int)(*(_DWORD *)(v9 + 56) << 24) | (unsigned __int64)((v7 | (unsigned int)(v8 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF || (_BYTE)v6 == 0xFF )
  {
    sub_1C0019CFC(v10);
  }
  else
  {
    LOBYTE(v15) = v8;
    BYTE1(v15) = v7;
    BYTE2(v15) = v6;
    v11 = sub_1C00081BC(v10, v15);
    v5 = v11;
    if ( !v11 )
    {
      v9 = (__int64)&off_1C0093070;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
      {
        LODWORD(v9) = HIDWORD(off_1C0093070->Timer);
        if ( (v9 & 8) != 0 && BYTE1(off_1C0093070->Timer) >= 3u )
        {
          LODWORD(v14) = v6;
          LODWORD(v13) = v7;
          LOBYTE(v9) = sub_1C003EEB0(
                         (__int64)off_1C0093070->AttachedDevice,
                         0x19u,
                         (__int64)&unk_1C0083380,
                         v8,
                         v13,
                         v14);
        }
      }
      return v9;
    }
    sub_1C0045080(v11);
  }
  LOBYTE(v9) = KeInsertQueueDpc((PRKDPC)(v10 + 1784), (PVOID)(v6 | ((v7 | (unsigned int)(v8 << 8)) << 8)), (PVOID)a5);
  if ( !(_BYTE)v9 )
  {
    if ( (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF || (_BYTE)v6 == 0xFF )
      LOBYTE(v9) = sub_1C0019D54(v10);
    else
      LOBYTE(v9) = sub_1C0012FC0(v5);
  }
  return v9;
}
