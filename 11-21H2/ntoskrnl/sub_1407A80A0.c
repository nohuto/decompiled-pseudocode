/*
 * XREFs of sub_1407A80A0 @ 0x1407A80A0
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 */

__int64 __fastcall sub_1407A80A0(PVOID Object, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  PVOID Objecta; // [rsp+78h] [rbp+20h]

  if ( !*((_BYTE *)KeGetCurrentThread() + 562) )
    return sub_1407A817C(Object, a3);
  Objecta = *(PVOID *)(a2 + 16);
  result = sub_1407A817C(Object, a3);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = Objecta;
  return result;
}
