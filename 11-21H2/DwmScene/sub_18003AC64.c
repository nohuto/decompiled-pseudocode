/*
 * XREFs of sub_18003AC64 @ 0x18003AC64
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     sub_180031968 @ 0x180031968 (sub_180031968.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003AC64(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = a1;
  *(_QWORD *)&v5 = sub_18003A520;
  DWORD2(v5) = 0;
  v6 = v5;
  sub_180031968(&v8, &v6, &v7);
  result = o__beginthreadex(0LL, 0LL, sub_180031700, v8, 0, (char *)&v5 + 8);
  *(_QWORD *)&v5 = result;
  if ( !result )
  {
    DWORD2(v5) = 0;
    std::_Throw_Cpp_error(6);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 1192) )
  {
LABEL_5:
    sub_180029930(v4, v3);
    JUMPOUT(0x18003AD0FLL);
  }
  *(_OWORD *)(a1 + 1184) = v5;
  return result;
}
