/*
 * XREFs of sub_140557078 @ 0x140557078
 * Callers:
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 */

void __fastcall sub_140557078(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // edx
  int v5; // eax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 && *(_DWORD *)(v3 + 80) )
  {
    *(_DWORD *)(v2 + 16) &= 0xFFF1FFFF;
    v4 = *(_DWORD *)(v3 + 80);
  }
  else
  {
    v5 = sub_14033D760((__int64)KeGetCurrentThread());
    *(_DWORD *)(v2 + 16) &= 0xFFF1FFFF;
    v4 = v5 + 1;
  }
  *(_DWORD *)(v2 + 16) |= v4 << 17;
}
