/*
 * XREFs of sub_14024DD20 @ 0x14024DD20
 * Callers:
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 * Callees:
 *     sub_14024E640 @ 0x14024E640 (sub_14024E640.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14024DD20(__int64 a1)
{
  void *result; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  signed __int32 v7[8]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v8[112]; // [rsp+20h] [rbp-88h] BYREF

  result = memset(v8, 0, 0x68uLL);
  if ( !*(_WORD *)(a1 + 32) )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = (v3 >> 43) & 0x3FF;
    v5 = *(_QWORD *)(qword_140C51F48 + 8 * v4);
    v6 = *(_QWORD *)(v5 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 6632);
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      if ( (v3 & 0x20000000000000LL) != 0 )
      {
        _InterlockedOr(v7, 0);
        return (void *)sub_14033C33C(a1, (unsigned int)dword_140D31080, 1LL);
      }
      v6 = v5 + 88LL * (unsigned int)sub_140273234(a1) + 2880;
    }
    else if ( *(_DWORD *)(v6 + 8) == 3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
        v6 = 88LL * *(unsigned int *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 8)
           + v5
           + 5120;
      else
        v6 = sub_14024E640(a1, *(_QWORD *)(qword_140C51F48 + 8 * v4));
    }
    ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *))sub_1403277D0)(v6, a1, 1LL, v8);
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)dword_140D31080 << 59)) & 0x3800000000000000LL;
    return (void *)sub_140338D00(v6, v8);
  }
  return result;
}
