/*
 * XREFs of sub_1403FDAA0 @ 0x1403FDAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FCBE0 @ 0x1403FCBE0 (sub_1403FCBE0.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 */

void __fastcall sub_1403FDAA0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v3 = *(_QWORD **)(a3 + 16);
  v5 = (__int64 *)(a2 + 96);
  v6 = 4LL;
  do
  {
    v7 = *v5++;
    *v3++ = _byteswap_uint64(__ROL8__(v7, 32));
    --v6;
  }
  while ( v6 );
  sub_1403FDDE8(a2, 128LL);
  sub_1403FCBE0(a2);
}
