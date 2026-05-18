/*
 * XREFs of sub_1800CE0A0 @ 0x1800CE0A0
 * Callers:
 *     sub_1800CF04C @ 0x1800CF04C (sub_1800CF04C.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_1800566B0 @ 0x1800566B0 (sub_1800566B0.c)
 *     sub_1800568A8 @ 0x1800568A8 (sub_1800568A8.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 */

char __fastcall sub_1800CE0A0(__int64 a1)
{
  __int64 *v1; // rbx
  char result; // al
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 *v7; // r11
  int v8; // r8d
  __int64 v9; // r10
  __int64 *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rcx
  char v13; // al
  __int64 *v14; // r11
  int v15; // r8d
  __int64 v16; // r10
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 160);
  result = sub_18001070C((_QWORD *)(a1 + 160));
  if ( !result )
  {
    if ( sub_18001070C((_QWORD *)(v3 + 168)) )
    {
      sub_1800568A8(v4);
      v6 = sub_1800566B0(v5);
      v10 = sub_1800CDC58(v9, &v17, *v7, v6, v8);
    }
    else
    {
      result = sub_18001070C((_QWORD *)(v4 + 176));
      if ( !result )
        return result;
      sub_1800568A8(v11);
      v13 = sub_1800566B0(v12);
      v10 = sub_1800CDE90(v16, &v17, *v14, v13, v15);
    }
    sub_1800CB6E8(v1, v10);
    return sub_18000E72C(&v17);
  }
  return result;
}
