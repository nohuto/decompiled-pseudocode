/*
 * XREFs of sub_140860DAC @ 0x140860DAC
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_1403DC188 @ 0x1403DC188 (sub_1403DC188.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C3F0C @ 0x1406C3F0C (sub_1406C3F0C.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_140968018 @ 0x140968018 (sub_140968018.c)
 */

__int64 __fastcall sub_140860DAC(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // r9
  int v3; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  sub_1403DC188();
  *(_QWORD *)(BugCheckParameter1 + 1680) = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
  sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v6, v2);
  v5 = sub_1406C3F0C(BugCheckParameter1, 0LL);
  if ( v5 )
    v3 = sub_14070A1B8(BugCheckParameter1, &v5);
  else
    v3 = -1073741801;
  sub_1402D0930((__int64)v6, 0LL);
  if ( v3 >= 0 && (dword_140D06994 & 1) != 0 && (dword_140D06994 & 0x10000000) == 0 )
    sub_140968018(BugCheckParameter1);
  return (unsigned int)v3;
}
