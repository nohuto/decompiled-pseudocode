/*
 * XREFs of sub_1409C5570 @ 0x1409C5570
 * Callers:
 *     RtlIsNormalizedString @ 0x1409BE480 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x1409BE510 (RtlNormalizeString.c)
 * Callees:
 *     sub_14041D740 @ 0x14041D740 (sub_14041D740.c)
 *     sub_1405F2970 @ 0x1405F2970 (sub_1405F2970.c)
 *     sub_1405F2998 @ 0x1405F2998 (sub_1405F2998.c)
 *     sub_1405F29CC @ 0x1405F29CC (sub_1405F29CC.c)
 *     sub_1405F29FC @ 0x1405F29FC (sub_1405F29FC.c)
 *     sub_1405F2A2C @ 0x1405F2A2C (sub_1405F2A2C.c)
 *     sub_1409BD8B4 @ 0x1409BD8B4 (sub_1409BD8B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409C5570(unsigned int a1, char **a2)
{
  __int64 result; // rax
  int v5; // ecx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  char *v10; // rax
  _DWORD *v11; // rbx
  int v12; // ebp
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  unsigned __int16 *v14; // [rsp+60h] [rbp+18h]

  if ( !a2 )
    return 3221225712LL;
  sub_1405F29CC();
  v6 = sub_1405F29FC(a1);
  if ( !v6 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v7 = sub_1405F29FC(v5 ^ 0x100u);
    if ( v7 )
    {
      v14 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
      v13 = *((_QWORD *)v7 + 2);
    }
    else
    {
      v8 = a1;
      LODWORD(v8) = a1 & 0xFFFFFEFF;
      v9 = sub_14041D740(12LL, v8);
      if ( v9 < 0 )
        goto LABEL_12;
    }
    v10 = (char *)sub_1405F2970();
    v11 = v10;
    if ( !v10 )
    {
      v9 = -1073741801;
LABEL_12:
      sub_1405F2A2C();
      return (unsigned int)v9;
    }
    v6 = v10 + 24;
    v12 = sub_1409BD8B4(a1, v14, v13, (_DWORD *)v10 + 6);
    if ( v12 < 0 )
    {
      ExFreePoolWithTag(v11, 0);
      v9 = v12;
      goto LABEL_12;
    }
    v11[4] = a1;
    sub_1405F2998((__int64)v11);
  }
  sub_1405F2A2C();
  result = 0LL;
  *a2 = v6;
  return result;
}
