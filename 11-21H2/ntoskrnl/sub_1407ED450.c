/*
 * XREFs of sub_1407ED450 @ 0x1407ED450
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 */

__int64 __fastcall sub_1407ED450(_WORD *a1, _QWORD *a2)
{
  char *v4; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  int v7; // edi
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v12; // eax
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  v4 = (char *)sub_1402D84BC(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 + 56;
    v6[1] = v6;
    *v6 = v6;
    v7 = sub_14075C924((__int64)(v5 + 40), a1);
    if ( v7 < 0 )
      goto LABEL_17;
    v8 = sub_14075C68C(&v13);
    v9 = (__int64)v13;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = sub_1407ED53C(*v13, &qword_140C2A6E0, a1, v5);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741275 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        if ( !v10
          || (v12 = sub_1407ED53C(v10, &qword_140C2A6E0, a1, v5), ((v12 + 0x80000000) & 0x80000000) != 0)
          || v12 == -1073741275 )
        {
          *a2 = v5;
          v5 = 0LL;
        }
      }
    }
    if ( v9 )
      sub_14075C588(v9);
    if ( v5 )
LABEL_17:
      sub_140965070(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
