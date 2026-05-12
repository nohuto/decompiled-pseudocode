/*
 * XREFs of sub_1C007D14C @ 0x1C007D14C
 * Callers:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C0055770 @ 0x1C0055770 (sub_1C0055770.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C00560B8 @ 0x1C00560B8 (sub_1C00560B8.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 */

__int64 __fastcall sub_1C007D14C(_DWORD *a1, ULONG_PTR a2, __int64 a3, char a4)
{
  int v7; // esi
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  char v13[16]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = a3;
  v15 = 0;
  v7 = 10000;
  v8 = 1;
  while ( 1 )
  {
    v9 = sub_1C00557CC((__int64)a1, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( !a4 || v9 != -2147483631 )
        return v10;
      goto LABEL_12;
    }
    if ( !a4 )
      return v10;
    *(_QWORD *)v13 = 0LL;
    sub_1C0055B44(a1, a2, v13, &v15);
    if ( v15 < 0x14 )
      break;
    v11 = *(_QWORD *)v13;
    v14 = *(_DWORD *)(*(_QWORD *)v13 + 16LL);
    sub_1C007A4E8((char *)&v14, 4u);
    *(_DWORD *)v13 = *(_DWORD *)(v11 + 8);
    sub_1C007A4E8(v13, 4u);
    if ( v14 )
      return v10;
    if ( !*(_DWORD *)v13 )
      break;
    if ( *(_DWORD *)v13 > 1u )
      return (unsigned int)-2147483643;
    v10 = -2147483631;
    if ( --v7 )
    {
      sub_1C00560B8(a1, a2);
      sub_1C0055770(v8);
      v8 = 5;
    }
    else
    {
LABEL_12:
      if ( !v7 )
        return v10;
    }
  }
  return (unsigned int)-1073741435;
}
