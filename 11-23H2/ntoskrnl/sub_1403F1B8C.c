/*
 * XREFs of sub_1403F1B8C @ 0x1403F1B8C
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     sub_1403F1C6C @ 0x1403F1C6C (sub_1403F1C6C.c)
 *     sub_1403F2BA0 @ 0x1403F2BA0 (sub_1403F2BA0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0D7A8 @ 0x140B0D7A8 (sub_140B0D7A8.c)
 *     sub_140B18070 @ 0x140B18070 (sub_140B18070.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403F1B8C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
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
