/*
 * XREFs of sub_14069E26C @ 0x14069E26C
 * Callers:
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091D0F0 @ 0x14091D0F0 (sub_14091D0F0.c)
 * Callees:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 */

__int64 __fastcall sub_14069E26C(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v5 = 0LL;
  v6 = 0;
  v9 = 0;
  v4 = 0;
  v7 = a3;
  v8 = a2;
  ((void (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), int *))sub_14069F7AC)(a1, 0LL, sub_14069FC10, &v4);
  result = (unsigned int)v4;
  if ( v4 >= 0 )
  {
    if ( (_DWORD)v5 )
      return 3221225761LL;
    else
      return HIDWORD(v5) != 0 ? 0xC000022D : 0;
  }
  return result;
}
