/*
 * XREFs of sub_140A5AE1C @ 0x140A5AE1C
 * Callers:
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 * Callees:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 *     sub_1403D2A68 @ 0x1403D2A68 (sub_1403D2A68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140A5AE1C(__int64 a1)
{
  int v1; // ecx
  __int64 ***v2; // r9
  __int64 *v3; // rax
  int v4; // r8d
  __int64 v5; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 28);
  v7[0] = &qword_140C4BB00;
  v2 = (__int64 ***)v7;
  v7[1] = &qword_140C4BC60;
  v7[2] = &qword_140C4BB20;
  v7[3] = &qword_140C4BC50;
  v7[4] = &qword_140C4BB10;
  while ( 1 )
  {
    v3 = sub_1403D2A68(v1, *v2);
    if ( v3 )
      break;
    v2 = (__int64 ***)(v5 + 8);
    if ( (unsigned int)(v4 + 1) >= 5 )
      return (char)v3;
  }
  LOBYTE(v3) = sub_14021294C((__int64)v3);
  return (char)v3;
}
