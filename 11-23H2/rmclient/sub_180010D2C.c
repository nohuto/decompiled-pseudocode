/*
 * XREFs of sub_180010D2C @ 0x180010D2C
 * Callers:
 *     sub_18000DAC4 @ 0x18000DAC4 (sub_18000DAC4.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 * Callees:
 *     sub_18001192C @ 0x18001192C (sub_18001192C.c)
 */

__int64 __fastcall sub_180010D2C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v9; // r10
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r8
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v6 = 0LL;
  v9 = (v4[1] - (_QWORD)v5) >> 4;
  if ( v9 )
  {
    v10 = v5;
    while ( 1 )
    {
      v11 = v6 + 1;
      if ( !*v10 )
        break;
      v10 += 2;
      ++v6;
      if ( v11 >= v9 )
        goto LABEL_5;
    }
    result = 2 * v6;
    v5[result] = a3;
    v5[result + 1] = a4;
    *a2 = v11;
  }
  else
  {
LABEL_5:
    v13[0] = a3;
    v13[1] = a4;
    result = sub_18001192C(v4, v13, 16LL);
    if ( (_BYTE)result )
    {
      result = (v4[1] - *v4) >> 4;
      *a2 = result;
    }
  }
  return result;
}
