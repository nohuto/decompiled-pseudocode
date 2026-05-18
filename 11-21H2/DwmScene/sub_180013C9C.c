/*
 * XREFs of sub_180013C9C @ 0x180013C9C
 * Callers:
 *     sub_18001793C @ 0x18001793C (sub_18001793C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180049AD8 @ 0x180049AD8 (sub_180049AD8.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 */

__int64 __fastcall sub_180013C9C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
    v2 = a2[1];
  }
  v8[0] = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2;
  v8[1] = v4;
  sub_180010910((__int64)v8);
  LOBYTE(v5) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 16) + 112LL) |= 0x10u;
  *(_WORD *)(*(_QWORD *)(a1 + 16) + 112LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 16) + 112LL) |= 1u;
  sub_180049AF0(*(_QWORD *)(a1 + 16), &qword_1801F5D98, v5);
  sub_180049AD8(*(_QWORD *)(a1 + 16), v6, 1LL);
  return 0LL;
}
