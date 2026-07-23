/*
 * XREFs of sub_140830CF4 @ 0x140830CF4
 * Callers:
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 *     sub_140830BF0 @ 0x140830BF0 (sub_140830BF0.c)
 *     sub_140A34D60 @ 0x140A34D60 (sub_140A34D60.c)
 *     sub_140A355F4 @ 0x140A355F4 (sub_140A355F4.c)
 *     sub_140A356D0 @ 0x140A356D0 (sub_140A356D0.c)
 *     sub_140A35BC0 @ 0x140A35BC0 (sub_140A35BC0.c)
 * Callees:
 *     sub_140830D94 @ 0x140830D94 (sub_140830D94.c)
 *     sub_140A3579C @ 0x140A3579C (sub_140A3579C.c)
 */

__int64 __fastcall sub_140830CF4(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v12 = 0;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_12;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, (*(_DWORD *)a1 & 2) == 0) )
    LOBYTE(a3) = 0;
  v4 = sub_140830D94(*(_QWORD *)(a1 + 32), a2, a3, &v12);
  if ( v4 >= 0 )
    goto LABEL_7;
  if ( v6 )
  {
    v10 = sub_140A3579C(*(PVOID *)(a1 + 32));
    if ( v10 )
    {
      *(_DWORD *)a1 |= 2u;
      LOBYTE(v11) = 1;
      *(_QWORD *)(a1 + 32) = v10;
      v4 = sub_140830D94(v10, a2, v11, 0LL);
      if ( v4 >= 0 )
      {
LABEL_7:
        result = 0LL;
        goto LABEL_8;
      }
    }
    result = 3221225495LL;
  }
  else
  {
LABEL_12:
    result = 3221225485LL;
  }
LABEL_8:
  if ( a4 )
    *a4 = v4;
  return result;
}
