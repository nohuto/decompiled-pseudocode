/*
 * XREFs of sub_180050CB0 @ 0x180050CB0
 * Callers:
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_1800503B4 @ 0x1800503B4 (sub_1800503B4.c)
 *     sub_180050504 @ 0x180050504 (sub_180050504.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 */

__int64 *__fastcall sub_180050CB0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *result; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  sub_18001CAA0(a1, (__int64)v10, a3);
  v6 = a3;
  v7 = v11;
  if ( !sub_18001CB40(v8, v11, v6) )
    v7 = *a1;
  result = a2;
  *a2 = v7;
  return result;
}
