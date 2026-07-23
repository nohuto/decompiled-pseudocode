/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x14096C8D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  PVOID v7; // rax
  void *v8; // rbx
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v11 = 0;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( a3 != 1 )
    return 3221225713LL;
  v7 = sub_1402828F0(64, 0x30uLL, 0x6F49694Du);
  v8 = v7;
  if ( !v7 )
    return 3221225626LL;
  *((_QWORD *)v7 + 3) = v5;
  *((_DWORD *)v7 + 10) = 1;
  *((_QWORD *)v7 + 4) = v5 + v6 - 1;
  v10 = 0;
  v9 = v7;
  KeGenericCallDpc((__int64)sub_140591A10, (__int64)&v9);
  result = (unsigned int)v10;
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v10;
  }
  return result;
}
