/*
 * XREFs of sub_180074828 @ 0x180074828
 * Callers:
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

_DWORD *sub_180074828()
{
  __int64 v0; // r9
  volatile __int32 *v1; // rax
  __int64 v2; // r9
  __int32 v3; // r10d
  int v4; // eax
  __int64 v5; // r9
  _DWORD *result; // rax
  int v7; // r8d
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = 1;
  sub_18002E120(&v8);
  v1 = (volatile __int32 *)sub_18001C7FC(v0 + 48);
  while ( _InterlockedExchange(v1, v3) )
    ;
  v4 = *(_DWORD *)(v2 + 16);
  *(_OWORD *)(v2 + 20) = *(_OWORD *)v2;
  *(_DWORD *)(v2 + 36) = v4;
  *(_DWORD *)v2 = -1082130432;
  *(_DWORD *)(v2 + 4) = -1082130432;
  *(_QWORD *)(v2 + 8) = 2LL;
  *(_DWORD *)(v2 + 16) = 0;
  v9 = 0;
  *(_QWORD *)(v2 + 40) = 2LL;
  v8 = 0;
  sub_18002E114(&v8);
  result = (_DWORD *)sub_18002E108(v5 + 48);
  *result = v7;
  return result;
}
