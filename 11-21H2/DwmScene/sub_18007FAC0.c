/*
 * XREFs of sub_18007FAC0 @ 0x18007FAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 */

__int64 __fastcall sub_18007FAC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  v5 = sub_1800129F4(v12, (__int64)&qword_1801F8038);
  sub_180045304(v4, (__int64)&v10, -1LL, (__int64)v5);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v6 + 328);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(v6 + 328);
  }
  v8 = *(_QWORD *)(v6 + 320);
  *(_OWORD *)a2 = v10;
  *(_QWORD *)(a2 + 16) = v8;
  v10 = 0LL;
  *(_QWORD *)(a2 + 24) = v7;
  v11 = 0LL;
  sub_180010910((__int64)&v11);
  sub_180010910((__int64)&v10);
  return a2;
}
