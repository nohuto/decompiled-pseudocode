/*
 * XREFs of sub_14040C590 @ 0x14040C590
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_14040B644 @ 0x14040B644 (sub_14040B644.c)
 *     sub_14040D478 @ 0x14040D478 (sub_14040D478.c)
 */

__int64 __fastcall sub_14040C590(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r14d
  int v7; // ebp
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // ebp

  v3 = *(_DWORD *)(a1 + 4);
  _misaligned_access();
  v7 = sub_14040D478(a2, v3, 0LL);
  result = sub_14040B644(a1 + 128, a2, (__int64)a3, v3);
  v9 = 16 * v3;
  if ( v9 )
  {
    v10 = ~v7;
    result = v9;
    do
    {
      *a3++ &= v10;
      --result;
    }
    while ( result );
  }
  return result;
}
