/*
 * XREFs of sub_1405BB938 @ 0x1405BB938
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1405BB938(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  volatile LONG *v6; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-40h] BYREF

  v5 = a1 + 1664;
  memset(v15, 0, sizeof(v15));
  sub_14030D5C0(a1, 0LL, (__int64)v15, a4);
  v6 = (volatile LONG *)sub_140282AD0(v5);
  v7 = ExAcquireSpinLockExclusive(v6);
  *((_DWORD *)v6 + 1) = 0;
  v8 = v7;
  v10 = 48 * (((unsigned __int64)sub_140317A10(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v14, v9, v11, v12);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( a2 )
    sub_140274508(v10, 1LL, v11);
  else
    sub_140336AD8(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  sub_14030FA80(v5, v8);
  return sub_1402D0930((__int64)v15, 0LL);
}
