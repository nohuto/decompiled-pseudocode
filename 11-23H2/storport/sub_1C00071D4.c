/*
 * XREFs of sub_1C00071D4 @ 0x1C00071D4
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 *     sub_1C001250C @ 0x1C001250C (sub_1C001250C.c)
 *     sub_1C0012644 @ 0x1C0012644 (sub_1C0012644.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C001AFF0 @ 0x1C001AFF0 (sub_1C001AFF0.c)
 *     sub_1C001C288 @ 0x1C001C288 (sub_1C001C288.c)
 *     sub_1C001FFFC @ 0x1C001FFFC (sub_1C001FFFC.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 *     sub_1C0034218 @ 0x1C0034218 (sub_1C0034218.c)
 *     sub_1C005E3A8 @ 0x1C005E3A8 (sub_1C005E3A8.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061378 @ 0x1C0061378 (sub_1C0061378.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 *     sub_1C00AADD0 @ 0x1C00AADD0 (sub_1C00AADD0.c)
 * Callees:
 *     sub_1C000724C @ 0x1C000724C (sub_1C000724C.c)
 */

__int64 __fastcall sub_1C00071D4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // ebx
  __int64 v7; // r10

  v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v4 = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 32));
  while ( (v4 & 1) == 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 32)), v4 + 2, v4);
    if ( v5 == v4 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 968));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = sub_1C000724C(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 968), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
