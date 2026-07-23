/*
 * XREFs of sub_140843CD4 @ 0x140843CD4
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 *     sub_140842F74 @ 0x140842F74 (sub_140842F74.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A13764 @ 0x140A13764 (sub_140A13764.c)
 */

__int64 __fastcall sub_140843CD4(__int64 a1, unsigned int a2, _QWORD *a3, int *a4)
{
  unsigned int v6; // ecx
  int v7; // ebx
  __int128 *v9; // r8
  int v10; // eax
  __int64 v11; // rax
  __int128 v13; // xmm0
  unsigned int v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF

  v15 = 0LL;
  v6 = 1;
  v7 = a2 & 0xFFFFFFF;
  v14 = a2 >> 28;
  v9 = (__int128 *)(a1 + 32 * ((a2 >> 28) + 1LL));
  v10 = *((_DWORD *)v9 + 6);
  if ( (v10 & 2) != 0 )
  {
    v11 = *((_QWORD *)v9 + 2);
    *(_OWORD *)(v11 + 28) = *v9;
  }
  else
  {
    if ( (v10 & 1) == 0 )
      goto LABEL_10;
    v13 = *v9;
    *((_DWORD *)v9 + 6) = 0;
    v16 = v13;
    v6 = sub_140A13764(a1, (unsigned int)&v16, (_DWORD)v9, (unsigned int)&v15, (__int64)&v14);
    v11 = v15;
  }
  if ( v11 )
  {
    if ( v6 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  v6 = 0;
LABEL_11:
  v11 = 0LL;
  v7 = 0;
LABEL_5:
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v7;
  return v6;
}
