/*
 * XREFs of sub_140A6A480 @ 0x140A6A480
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x14056F9F0 (KeSignalCallDpcSynchronize.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 */

__int64 __fastcall sub_140A6A480(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 result; // rax
  char v12; // [rsp+28h] [rbp-B0h]
  int v13; // [rsp+38h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-70h]
  int v15; // [rsp+A8h] [rbp-30h]
  __int64 v16; // [rsp+B0h] [rbp-28h]
  __int64 v17; // [rsp+B8h] [rbp-20h]
  int v18; // [rsp+C0h] [rbp-18h]

  v7 = KeSignalCallDpcSynchronize(a4, (__int64)a2, (__int64)a3, a4);
  v10 = 0LL;
  if ( v7 )
    *((_DWORD *)a2 + 11) = sub_140A6BF28(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v12,
                             0LL,
                             v13,
                             *(_QWORD *)(a2[1] + 72LL),
                             *(_QWORD *)(a2[1] + 8LL),
                             0LL,
                             0,
                             0LL,
                             v14,
                             a2[2],
                             a2[3],
                             1,
                             *(_WORD *)(*a2 + 136LL),
                             *(PRTL_BITMAP *)(*a2 + 40LL),
                             a2[4],
                             0LL,
                             v15,
                             v16,
                             v17,
                             v18);
  result = KeSignalCallDpcSynchronize(a4, v10, v8, v9);
  _InterlockedDecrement(a3);
  return result;
}
