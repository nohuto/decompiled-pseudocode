/*
 * XREFs of sub_1800748C4 @ 0x1800748C4
 * Callers:
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001C7FC @ 0x18001C7FC (sub_18001C7FC.c)
 *     sub_18002E108 @ 0x18002E108 (sub_18002E108.c)
 *     sub_18002E114 @ 0x18002E114 (sub_18002E114.c)
 *     sub_18002E120 @ 0x18002E120 (sub_18002E120.c)
 */

_DWORD *__fastcall sub_1800748C4(__int64 a1)
{
  volatile __int32 *v2; // rax
  __int32 v3; // r8d
  __int64 v4; // r9
  __int64 v5; // rcx
  _DWORD *result; // rax
  int v7; // edx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v8) = 1;
  sub_18002E120((unsigned int *)&v8);
  v2 = (volatile __int32 *)sub_18001C7FC(a1 + 48);
  while ( _InterlockedExchange(v2, v3) )
    ;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 16);
  v5 = *sub_180011CA0(&v8);
  LODWORD(v8) = 0;
  *(_QWORD *)(a1 + 80) = v5;
  sub_18002E114((unsigned int *)&v8);
  result = (_DWORD *)sub_18002E108(a1 + 48);
  *result = v7;
  return result;
}
