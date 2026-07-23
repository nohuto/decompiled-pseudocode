/*
 * XREFs of sub_1402E80DC @ 0x1402E80DC
 * Callers:
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 * Callees:
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1403D3284 @ 0x1403D3284 (sub_1403D3284.c)
 */

unsigned __int64 __fastcall sub_1402E80DC(unsigned __int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8

  v2 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
  if ( v2 )
  {
    result = sub_1402C6260((unsigned __int64 *)(v2 + 12448), 3u, a1, 0);
    *(_QWORD *)(v2 + 12344) = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4272);
    v5 = v4 & 0xFFFFFFFFFFFFF000uLL;
    if ( 64 - (v4 & 0xFFF) > a1 )
    {
      v6 = v5 + ((v4 & 0xFFF) << 12);
    }
    else
    {
      sub_1403D3284(v4 & 0xFFF, 4095LL, (unsigned int)v4);
      v4 = v5;
      v6 = v5;
    }
    result = v6;
    *((_QWORD *)KeGetCurrentPrcb() + 4272) = v4 + a1;
  }
  return result;
}
