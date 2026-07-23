/*
 * XREFs of sub_1406C16F8 @ 0x1406C16F8
 * Callers:
 *     sub_1406C1694 @ 0x1406C1694 (sub_1406C1694.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C16F8(signed __int64 a1, char a2)
{
  __int64 *v2; // r10
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  __int64 v6; // rax
  __int64 **v7; // rdx

  v2 = (__int64 *)(a1 + 32);
  v3 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  v4 = 0;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  do
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v4 + 136), a1, 0LL) )
      goto LABEL_3;
    ++v4;
  }
  while ( v4 < 4 );
  if ( (a2 & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8) + 120LL;
    v7 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 128LL);
    if ( *v7 != (__int64 *)v6 )
      __fastfail(3u);
    *v2 = v6;
    *(_QWORD *)(a1 + 40) = v7;
    *v7 = v2;
    *(_QWORD *)(v6 + 8) = v2;
LABEL_3:
    *(_WORD *)(a1 + 48) |= 0x40u;
    return v3;
  }
  return (unsigned int)-1073741267;
}
