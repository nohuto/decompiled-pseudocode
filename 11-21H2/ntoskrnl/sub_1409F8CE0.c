/*
 * XREFs of sub_1409F8CE0 @ 0x1409F8CE0
 * Callers:
 *     sub_1409AC724 @ 0x1409AC724 (sub_1409AC724.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_1409F8CE0(bool *a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B0h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0;
  memset(v5, 0, 0x70uLL);
  LODWORD(v5[1]) = 292;
  LODWORD(v5[4]) = 67108868;
  v5[2] = L"Enabled";
  v5[3] = &v6;
  v2 = sub_140781F40(2, L"StateSeparation\\Policy", (__int64)v5, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
    goto LABEL_4;
  if ( v2 == -1073741772 )
  {
    v3 = 0;
LABEL_4:
    *a1 = v6 != 0;
  }
  return v3;
}
