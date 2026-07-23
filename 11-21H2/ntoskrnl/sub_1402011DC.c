/*
 * XREFs of sub_1402011DC @ 0x1402011DC
 * Callers:
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_1402011DC(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v14 = sub_140317A10(a3);
  v8 = 48 * (((unsigned __int64)sub_140317A10(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( _bittest64((const signed __int64 *)(v8 + 40), 0x28u) || *(__int64 *)(v8 + 8) <= 0 )
  {
    v11 = sub_140234F14(*((_QWORD *)KeGetCurrentThread() + 23), *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
    v5 = v11 & -(__int64)(*(_QWORD *)(v11 + 96) < *(_QWORD *)(*(_QWORD *)(v12 + 1680) + 344LL));
  }
  v9 = sub_140316400((__int64)(a3 << 25) >> 16);
  if ( v9 < 0 )
  {
    sub_14020D8D0(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v13) = a2;
    sub_1402B0CE0(a1, v13);
    sub_1405BCAF8(a1, (unsigned int)v9);
    return 2LL;
  }
  else
  {
    LOBYTE(v4) = v5 != 0;
    return v4;
  }
}
