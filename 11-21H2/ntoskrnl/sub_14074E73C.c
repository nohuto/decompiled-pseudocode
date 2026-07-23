/*
 * XREFs of sub_14074E73C @ 0x14074E73C
 * Callers:
 *     sub_14074D800 @ 0x14074D800 (sub_14074D800.c)
 *     sub_14074DA90 @ 0x14074DA90 (sub_14074DA90.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074E85C @ 0x14074E85C (sub_14074E85C.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 */

__int64 __fastcall sub_14074E73C(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  ULONG_PTR v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  result = *(unsigned int *)(a1 + 416);
  v3 = *(_DWORD *)(a1 + 416) & 6;
  if ( v3 != 2 && (result & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v3 == 4) )
  {
    result = *(_QWORD *)(a1 + 16);
    v4 = _InterlockedExchange64((volatile __int64 *)(result + 72), 0LL);
    if ( v4 )
    {
      sub_1407A6A34(v4);
      --*(_WORD *)(v4 - 30);
      *(_DWORD *)(v4 + 264) &= ~0x80000000;
      *(_BYTE *)(v4 + 244) = 0;
      *(_WORD *)(v4 + 244) |= 5u;
      *(_DWORD *)(v4 + 240) = 3145736;
      *(_WORD *)(v4 + 246) = 0;
      *(_QWORD *)(v4 + 280) = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1128LL);
      *(_QWORD *)(v4 + 248) = 0LL;
      *(_QWORD *)(v4 + 256) = 0LL;
      v5[0] = a1;
      v5[1] = v4;
      LODWORD(v5[6]) = 0x10000;
      result = sub_14074E85C(v5);
      if ( (int)result < 0 )
        return sub_1407A7628(v4);
    }
  }
  return result;
}
