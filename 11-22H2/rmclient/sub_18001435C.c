/*
 * XREFs of sub_18001435C @ 0x18001435C
 * Callers:
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 * Callees:
 *     sub_1800013C0 @ 0x1800013C0 (sub_1800013C0.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

ULONG __fastcall sub_18001435C(__int64 a1, __int64 a2)
{
  ULONG result; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  ULONG v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  sub_18001F1C4(a1 + 64);
  *(_DWORD *)(a1 + 104) &= ~0x40u;
  *(_DWORD *)(a1 + 72) = 0;
  RtlReleaseSRWLockExclusive(a1 + 64);
  result = MemUtilEmptyProcess(*(_QWORD *)(a1 + 40), 8LL, 0LL);
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 )
  {
    v7 = qword_180032018 & 3;
    if ( v7 == qword_180032018 )
    {
      v8 = result;
      v9 = *(_DWORD *)(a1 + 80);
      v10 = a2;
      return sub_1800013C0(v7, byte_18002A523, v5, v6, (__int64)&v9, (__int64)&v10, (__int64)&v8);
    }
  }
  return result;
}
