/*
 * XREFs of sub_1403F966C @ 0x1403F966C
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_1403F974C @ 0x1403F974C (sub_1403F974C.c)
 *     sub_1403FA684 @ 0x1403FA684 (sub_1403FA684.c)
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall sub_1403F966C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1008))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
