/*
 * XREFs of sub_1403DD848 @ 0x1403DD848
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 * Callees:
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_1403DD8CC @ 0x1403DD8CC (sub_1403DD8CC.c)
 *     sub_140AABCD8 @ 0x140AABCD8 (sub_140AABCD8.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

__int64 __fastcall sub_1403DD848(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v3 = sub_140AABCD8(a1, &v7);
  if ( v3 < 0 )
    goto LABEL_12;
  v4 = sub_1403A8368();
  v5 = v7;
  if ( *(_DWORD *)(v7 + 8) != v4 )
  {
    v3 = sub_1403DD8CC(&v7, v4);
    if ( v3 >= 0 )
    {
      v5 = v7;
      goto LABEL_6;
    }
LABEL_12:
    v5 = v7;
    goto LABEL_7;
  }
LABEL_6:
  *a2 = v5;
LABEL_7:
  if ( v5 && v5 != *a2 )
    sub_140AAD3E0(v5);
  return (unsigned int)v3;
}
