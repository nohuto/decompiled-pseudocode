/*
 * XREFs of KeHwPolicyLocateResource @ 0x140AFAC30
 * Callers:
 *     sub_140A55FBC @ 0x140A55FBC (sub_140A55FBC.c)
 *     sub_140AF9508 @ 0x140AF9508 (sub_140AF9508.c)
 * Callees:
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     sub_140AFACD8 @ 0x140AFACD8 (sub_140AFACD8.c)
 */

__int64 __fastcall KeHwPolicyLocateResource(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  unsigned __int64 v7; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = qword_140C2B118;
  if ( qword_140C2B118 || !byte_140C2B120 && (qword_140C2B118 = sub_140AFACD8(a1), (v7 = qword_140C2B118) != 0) )
  {
    v11[2] = 0LL;
    v11[0] = a2;
    v11[1] = a3;
    return LdrResSearchResource(v7, v11, 3u, 48, a4, a5, 0LL, 0LL);
  }
  else
  {
    byte_140C2B120 = 1;
    return 3221226092LL;
  }
}
