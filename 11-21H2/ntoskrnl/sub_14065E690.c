/*
 * XREFs of sub_14065E690 @ 0x14065E690
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E690(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v8 = 0;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_DWORD *)(v1 + 40);
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    v4 = sub_1406BF400(v2, *(unsigned int *)(v1 + 40));
  else
    v4 = sub_1407C9820(v2);
  if ( v4 )
  {
    v5 = sub_14071F300(v2, v3);
    if ( v5 >= 0 )
      v5 = 0;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      sub_1406BF450(v2, &v7);
    else
      sub_1407C97C0(v2, &v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
