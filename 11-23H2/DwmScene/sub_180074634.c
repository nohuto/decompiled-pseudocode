/*
 * XREFs of sub_180074634 @ 0x180074634
 * Callers:
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

__int64 sub_180074634()
{
  __int64 v0; // r9
  volatile __int32 *v1; // rax
  __int32 v2; // r10d
  __int64 v3; // r9
  _DWORD *v4; // rax
  int v5; // r8d
  __int64 v6; // r9
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 1;
  sub_18002E120(&v8);
  v1 = (volatile __int32 *)sub_18001C7FC(v0 + 48);
  while ( _InterlockedExchange(v1, v2) )
    ;
  v8 = 0;
  sub_18002E114(&v8);
  v4 = (_DWORD *)sub_18002E108(v3 + 48);
  *v4 = v5;
  return v6;
}
