/*
 * XREFs of sub_1405A6840 @ 0x1405A6840
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 */

__int64 __fastcall sub_1405A6840(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, char a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v14[0] = sub_140317A10(a2);
  v10 = v14[0] & 0x800;
  if ( (v14[0] & 0x800) != 0 || (unsigned int)sub_1402E76C0((__int64)v14) )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( v10 )
        v11 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v11 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(a3 + 8) = v11;
    }
    else if ( (a4 & 2) != 0 )
    {
      sub_14020D8D0(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v12) = a5;
      sub_14032CE60((__int64)(a2 << 25) >> 16, 0LL, 0, v12, 0);
      sub_14020D8D0(a1, a2);
      return 1;
    }
  }
  return v9;
}
