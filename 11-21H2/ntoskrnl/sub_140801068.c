/*
 * XREFs of sub_140801068 @ 0x140801068
 * Callers:
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 * Callees:
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 */

__int64 __fastcall sub_140801068(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  qword_140C236A8 = qword_140C22BD0;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) << 12;
  v3 = sub_140801624(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140C236B8 = v5;
    qword_140C236C0 = v6;
    qword_140C236B0 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
