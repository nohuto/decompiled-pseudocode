/*
 * XREFs of sub_1403A7F70 @ 0x1403A7F70
 * Callers:
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 *     sub_140AACB80 @ 0x140AACB80 (sub_140AACB80.c)
 *     sub_140AB17C4 @ 0x140AB17C4 (sub_140AB17C4.c)
 *     sub_140AB1814 @ 0x140AB1814 (sub_140AB1814.c)
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 * Callees:
 *     sub_1403A8000 @ 0x1403A8000 (sub_1403A8000.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_1403A89B4 @ 0x1403A89B4 (sub_1403A89B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_1403A7F70(_BYTE *a1, __int64 a2)
{
  _BYTE *v4; // rdi
  unsigned int v5; // eax
  _BYTE *v6; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // r9
  _BYTE *v10; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  memset(v11, 0, 0x48uLL);
  v4 = 0LL;
  v10 = 0LL;
  v5 = sub_1403A8368();
  v6 = 0LL;
  if ( *((_DWORD *)a1 + 2) != v5 )
  {
    if ( (dword_140C0DF90 & 0xC00) != 0 )
    {
      v9 = 1LL;
      v10 = v11;
    }
    else
    {
      v9 = 0LL;
    }
    result = sub_1403A89B4(a1, v5, &v10, v9);
    if ( (int)result < 0 )
      return result;
    v4 = v10;
    a1 = v10;
    v6 = v10;
  }
  v7 = sub_1403A8000(a1, a2);
  if ( v6 )
  {
    if ( v6 != v11 )
      sub_140AAD3E0(v4);
  }
  return v7;
}
