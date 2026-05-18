/*
 * XREFs of sub_180074694 @ 0x180074694
 * Callers:
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 *     sub_180074768 @ 0x180074768 (sub_180074768.c)
 */

__int64 sub_180074694()
{
  __int64 v0; // rdx
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  int v4; // r8d
  __int64 v5; // rdx
  _DWORD *v6; // rax
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 1;
  sub_18002E120(&v10);
  v1 = (volatile __int32 *)sub_18001C7FC(v0);
  while ( _InterlockedExchange(v1, v3) )
    ;
  sub_180074768(*(unsigned int *)(v2 + 44));
  v10 &= v4;
  sub_18002E114(&v10);
  v6 = (_DWORD *)sub_18002E108(v5);
  *v6 = v7;
  return v8;
}
