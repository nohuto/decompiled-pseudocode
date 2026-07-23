/*
 * XREFs of sub_1405BA768 @ 0x1405BA768
 * Callers:
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BACCC @ 0x1405BACCC (sub_1405BACCC.c)
 */

__int64 __fastcall sub_1405BA768(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char *v4; // rsi
  __int64 v5; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // ebp
  _QWORD *v11; // r15
  volatile LONG *v12; // rbx
  KIRQL v13; // al
  __int64 v14; // rax
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v4 = (char *)(a2 + 1664);
  v5 = *a1;
  v16 = 0LL;
  if ( v5 != -1 )
    sub_1405BACCC(a1, v5);
  sub_140339C20(v4, 0, (__int64)&v16);
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v16, 1u);
  v10 = HIDWORD(v16) | v9 & DWORD2(v16);
  v11 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  while ( 1 )
  {
    v14 = sub_1403250B0((__int64)v11, v10, 0x302u);
    *a1 = v14;
    if ( v14 != -1 )
      break;
    sub_14030FA80((__int64)v4, a4);
    sub_1405B8348(v11);
    v12 = (volatile LONG *)sub_140282AD0((__int64)v4);
    v13 = ExAcquireSpinLockExclusive(v12);
    *((_DWORD *)v12 + 1) = 0;
    a4 = v13;
  }
  result = 6 * v14;
  *(_QWORD *)(8 * result - 0x220000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
