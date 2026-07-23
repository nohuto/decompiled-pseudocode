/*
 * XREFs of sub_1406433D0 @ 0x1406433D0
 * Callers:
 *     sub_1403DAA2C @ 0x1403DAA2C (sub_1403DAA2C.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140643B40 @ 0x140643B40 (sub_140643B40.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 */

char __fastcall sub_1406433D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)&KeGetPcr()[92].Unused2;
  if ( !v2 )
    return 0;
  v3 = sub_140643F2C(*(_QWORD *)(v2 + 8), *(unsigned int *)(a1 + 24));
  v4 = v3;
  if ( !v3 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  v7 = 0;
  v5 = sub_140643B40(v3, &v7);
  if ( !v5 )
    return 0;
  if ( sub_1403C0934(v4, 2, 0) )
    sub_14042A5E0(v4 + 96, a1);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  sub_140646270(*(_QWORD *)(v2 + 16), v5);
  return 1;
}
