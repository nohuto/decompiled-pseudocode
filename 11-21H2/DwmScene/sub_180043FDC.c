/*
 * XREFs of sub_180043FDC @ 0x180043FDC
 * Callers:
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800F90A0 @ 0x1800F90A0 (sub_1800F90A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043FDC(char *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned int v5; // edi
  unsigned __int16 v6; // r8
  signed __int64 v7; // rcx
  unsigned int v8; // eax
  bool v9; // cc
  unsigned __int16 v10; // r8

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  v4 = v2;
  if ( v2 >= v3 )
    v4 = v3;
  v5 = 0;
  if ( !v4 )
  {
LABEL_14:
    if ( v3 >= v2 )
    {
      LOBYTE(v5) = v3 > v2;
      v8 = v5;
      return v8 >> 31;
    }
    goto LABEL_13;
  }
  v6 = *(_WORD *)a1;
  if ( *(_WORD *)a1 < *(_WORD *)a2 )
  {
LABEL_13:
    v8 = -1;
    return v8 >> 31;
  }
  v7 = a1 - (char *)a2;
  v8 = 1;
  v9 = v6 <= *(_WORD *)a2;
  while ( v9 )
  {
    if ( v4 == 1 )
      goto LABEL_14;
    a2 = (_QWORD *)((char *)a2 + 2);
    --v4;
    v10 = *(_WORD *)((char *)a2 + v7);
    v9 = v10 <= *(_WORD *)a2;
    if ( v10 < *(_WORD *)a2 )
      goto LABEL_13;
  }
  return v8 >> 31;
}
