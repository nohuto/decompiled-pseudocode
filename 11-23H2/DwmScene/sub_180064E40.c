/*
 * XREFs of sub_180064E40 @ 0x180064E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_18006BADC @ 0x18006BADC (sub_18006BADC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180064E40(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v4 = sub_18001246C(&v12, a2);
  sub_180033EB4(a1, &v10, v5, v4);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 440) & 0x2000000) != 0 )
    {
      v7 = sub_1800631C0(&v13, &v10);
      LOBYTE(v8) = 1;
      sub_18006B8F4(a1, v7, v8);
      if ( v14 )
        sub_180010530(v14);
    }
  }
  LOBYTE(v6) = 1;
  result = sub_18006BADC(a1, a2, v6);
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
