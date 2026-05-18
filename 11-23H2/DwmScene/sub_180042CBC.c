/*
 * XREFs of sub_180042CBC @ 0x180042CBC
 * Callers:
 *     sub_180040C58 @ 0x180040C58 (sub_180040C58.c)
 * Callees:
 *     sub_18003F494 @ 0x18003F494 (sub_18003F494.c)
 *     sub_18003F5A8 @ 0x18003F5A8 (sub_18003F5A8.c)
 *     sub_18003F604 @ 0x18003F604 (sub_18003F604.c)
 */

__int64 __fastcall sub_180042CBC(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // r11
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_18003F604(a2);
  v5 = (__int64 *)sub_18003F494(a1, v11, v4, v3)[1];
  if ( !v5 )
    return 0LL;
  v6 = a1[3];
  v7 = 2 * (v3 & a1[6]);
  if ( *(__int64 **)(v6 + 16 * (v3 & a1[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v6 + 16 * (v3 & a1[6])) == v5 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = v8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(__int64 **)(v6 + 16 * (v3 & a1[6])) == v5 )
  {
    *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = *v5;
  }
  v9 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  sub_18003F5A8(v9, v5);
  return 1LL;
}
