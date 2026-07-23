/*
 * XREFs of sub_140644878 @ 0x140644878
 * Callers:
 *     sub_140644930 @ 0x140644930 (sub_140644930.c)
 * Callees:
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_1406447D0 @ 0x1406447D0 (sub_1406447D0.c)
 */

volatile signed __int32 *__fastcall sub_140644878(unsigned int a1)
{
  __int64 *v1; // rax
  __int64 v2; // r9
  _QWORD *v3; // r11
  __int64 v4; // rdi
  unsigned int v5; // r10d
  volatile signed __int32 *v6; // r8
  __int64 v7; // rbx
  volatile signed __int32 v8; // ett

  v1 = sub_140643F2C((__int64)&unk_140CE1A98, a1);
  if ( !sub_1406447D0((unsigned __int64)(v1 + 12) & -(__int64)(v1 != 0LL)) )
    return 0LL;
  v4 = *(unsigned int *)(v2 + 64);
  v5 = 0;
  v6 = *(volatile signed __int32 **)(v2 + 72);
  v7 = *(_QWORD *)(v2 + 144);
  if ( !*(_DWORD *)(v2 + 68) )
    return 0LL;
  while ( 1 )
  {
    if ( (*v6 & 0xF0000000) != 0x80000000 )
    {
      v8 = *v6;
      if ( v8 == _InterlockedCompareExchange(v6, *v6 | 0x80000000, *v6) )
        break;
    }
    v6 = (volatile signed __int32 *)((char *)v6 + v4);
    if ( ++v5 >= *(_DWORD *)(v2 + 68) )
      return 0LL;
  }
  if ( v3 )
    *v3 = v7 + 104LL * v5;
  return v6;
}
