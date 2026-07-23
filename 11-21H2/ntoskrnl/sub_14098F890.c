/*
 * XREFs of sub_14098F890 @ 0x14098F890
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14098F890(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  int v5; // eax
  unsigned int *v6; // rsi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int *v15; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v5 = sub_14098F634(0, 1u, &P);
  v6 = (unsigned int *)P;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)P;
    if ( *(_DWORD *)P
      && v8 != 1380075848
      && v8 != 1381258066
      && v8 != 1162559831
      && v8 != 1347113538
      && v8 != 1297239880 )
    {
      goto LABEL_8;
    }
    v9 = *((_DWORD *)P + 242);
    if ( !v9 )
      goto LABEL_8;
    v10 = sub_14098F634(2u, v9, (PVOID *)&v15);
    v2 = v15;
    v7 = v10;
    if ( v10 < 0 )
      goto LABEL_18;
    v11 = (unsigned __int64)v6[242] << 12;
    if ( !is_mul_ok(v6[242], 0x1000uLL) )
      goto LABEL_12;
    if ( *v15 != 1 )
      goto LABEL_8;
    v12 = v15[1];
    if ( v12 > v11 )
      goto LABEL_8;
    v13 = 48LL * v15[2];
    if ( v13 > 0xFFFFFFFF )
    {
LABEL_12:
      v7 = -1073741675;
      goto LABEL_18;
    }
    v7 = 0;
    if ( (unsigned int)v13 > (unsigned int)v12 )
    {
LABEL_8:
      v7 = -1073741271;
      goto LABEL_18;
    }
    memset((char *)v15 + v12, 0, v11 - v12);
    *a1 = v2[1];
    *a2 = v2;
  }
LABEL_18:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x206D654Du);
  if ( v7 < 0 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0x206D654Du);
    *a2 = 0LL;
    *a1 = 0;
  }
  return (unsigned int)v7;
}
