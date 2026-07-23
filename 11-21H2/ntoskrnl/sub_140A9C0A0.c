/*
 * XREFs of sub_140A9C0A0 @ 0x140A9C0A0
 * Callers:
 *     sub_140A91260 @ 0x140A91260 (sub_140A91260.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 */

__int64 __fastcall sub_140A9C0A0(_QWORD *a1, int a2)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( a2 == 1 && (*((_DWORD *)a1 + 6))-- == 1 )
  {
    sub_140602294(&v6);
    v4 = *a1;
    sub_14042A5E0(a1, *a1);
    *a1 = 0LL;
    sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v4 >> 12))), v4);
    result = sub_1406022DC(v6);
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 5);
  return result;
}
