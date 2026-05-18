/*
 * XREFs of sub_18005F190 @ 0x18005F190
 * Callers:
 *     sub_18005E7AC @ 0x18005E7AC (sub_18005E7AC.c)
 * Callees:
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_18005E758 @ 0x18005E758 (sub_18005E758.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005F190(__int64 a1)
{
  char v2; // al
  char *v3; // rdx
  char v4; // al
  char *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+58h] [rbp+18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  LOBYTE(v10) = 0;
  sub_1800441CC(a1 + 426);
  v2 = sub_1800441E4((__int64)&v10);
  *v3 = v2;
  LOBYTE(v10) = 1;
  sub_1800441CC(a1 + 425);
  v4 = sub_1800441E4((__int64)&v10);
  *v5 = v4;
  v10 = a1;
  v11 = sub_18005FE50;
  sub_18005E758(&v12, &v11, &v10);
  result = o__beginthreadex(0LL, 0LL, sub_18005E710, v12, 0, (char *)&v9 + 8);
  *(_QWORD *)&v9 = result;
  if ( !result )
  {
    DWORD2(v9) = 0;
    std::_Throw_Cpp_error(6);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 112) )
  {
LABEL_5:
    sub_180029930(v8, v7);
    JUMPOUT(0x18005F265LL);
  }
  *(_OWORD *)(a1 + 104) = v9;
  return result;
}
