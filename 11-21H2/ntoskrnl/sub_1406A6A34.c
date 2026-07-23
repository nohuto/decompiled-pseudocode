/*
 * XREFs of sub_1406A6A34 @ 0x1406A6A34
 * Callers:
 *     sub_1406A6990 @ 0x1406A6990 (sub_1406A6990.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1409E1FA0 @ 0x1409E1FA0 (sub_1409E1FA0.c)
 */

__int64 __fastcall sub_1406A6A34(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbp
  int v9; // ebx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v6 = (*(__int64 *)a4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  sub_14030F6D0((volatile signed __int64 *)v6);
  v12 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v9 = sub_140733B40(3, (unsigned int)&v12, a1, (int)v6 + 48, 0, 0, 0LL);
  if ( v9 < 0 )
  {
    ObfDereferenceObject((PVOID)(v6 + 48));
  }
  else if ( (xmmword_140D06910 & 0x40) != 0 )
  {
    sub_1409E1FA0(
      a2,
      a2,
      v6 + 48,
      *(_DWORD *)(a1 + 1344),
      *(_DWORD *)(a1 + 1088),
      qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)]);
  }
  return (unsigned int)v9;
}
