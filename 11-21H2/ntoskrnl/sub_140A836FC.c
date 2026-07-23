/*
 * XREFs of sub_140A836FC @ 0x140A836FC
 * Callers:
 *     VfQueryDeviceContext @ 0x1405FE1E0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1405FE220 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x1405FE260 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x1405FE2A0 (VfQueryThreadContext.c)
 * Callees:
 *     sub_140A8362C @ 0x140A8362C (sub_140A8362C.c)
 *     sub_140A836B4 @ 0x140A836B4 (sub_140A836B4.c)
 */

signed __int64 *__fastcall sub_140A836FC(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  signed __int64 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rdx

  v4 = (unsigned int)a3;
  v5 = 0LL;
  result = (signed __int64 *)sub_140A8362C(a1, a2, a3, a4);
  v10 = result;
  if ( result )
  {
    if ( sub_140A836B4(result, v7, v8, v9) )
    {
      v11 = *(_QWORD *)(*v10 + 8 * v4 + 8);
      if ( v11 )
      {
        v5 = *(_QWORD *)(*v10 + 8 * v4 + 8);
        _InterlockedAdd((volatile signed __int32 *)(v11 + 4), 1u);
      }
      _InterlockedExchangeAdd64(v10, 1uLL);
    }
    return (signed __int64 *)v5;
  }
  return result;
}
