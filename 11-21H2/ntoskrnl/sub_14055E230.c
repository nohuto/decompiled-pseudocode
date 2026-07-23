/*
 * XREFs of sub_14055E230 @ 0x14055E230
 * Callers:
 *     sub_14055EF20 @ 0x14055EF20 (sub_14055EF20.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055E138 @ 0x14055E138 (sub_14055E138.c)
 *     sub_140A32E08 @ 0x140A32E08 (sub_140A32E08.c)
 *     sub_140A32E50 @ 0x140A32E50 (sub_140A32E50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14055E230(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  _DWORD *Pool2; // rax
  void *v5; // rbx
  _BYTE v7[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v3 = -1073739510;
  if ( (int)sub_140A32E08(a1, v7) >= 0 && (int)sub_140A32E50(v8, v9) >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 540LL, 1886217299LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      v3 = sub_14055E138((__int64)v9, Pool2);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
