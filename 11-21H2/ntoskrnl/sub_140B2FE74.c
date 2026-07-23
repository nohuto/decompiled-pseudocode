/*
 * XREFs of sub_140B2FE74 @ 0x140B2FE74
 * Callers:
 *     sub_140AD6B50 @ 0x140AD6B50 (sub_140AD6B50.c)
 * Callees:
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 */

_QWORD *__fastcall sub_140B2FE74(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  PVOID v3; // rbx
  _QWORD *result; // rax
  unsigned __int64 v5; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v2 = sub_1402FDA80(a1, 1);
  v3 = (PVOID)v2[6];
  result = (_QWORD *)sub_1402FDD20((unsigned __int64)v3);
  if ( !(_DWORD)result || v3 == qword_140D068F0 || v3 == qword_140D06988 )
  {
    result = (_QWORD *)sub_140760B20((__int64)v2, 0, 0, a1, &v7, (unsigned __int64 *)&v8);
    v5 = v7;
    if ( v7 )
    {
      v6 = sub_1406F5B50();
      sub_14075F23C(v2, v5, v8, 0);
      return sub_1406F5AF0((__int64)v6);
    }
  }
  return result;
}
