/*
 * XREFs of sub_180074700 @ 0x180074700
 * Callers:
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

bool sub_180074700()
{
  __int64 v0; // rdx
  volatile __int32 *v1; // rax
  __int32 v2; // r10d
  __int64 v3; // rdx
  _DWORD *v4; // rax
  int v5; // r8d
  int v6; // r9d
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 1;
  sub_18002E120(&v8);
  v1 = (volatile __int32 *)sub_18001C7FC(v0);
  while ( _InterlockedExchange(v1, v2) )
    ;
  v8 = 0;
  sub_18002E114(&v8);
  v4 = (_DWORD *)sub_18002E108(v3);
  *v4 = v5;
  return v6 == 0;
}
