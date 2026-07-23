/*
 * XREFs of sub_14084C604 @ 0x14084C604
 * Callers:
 *     sub_140749848 @ 0x140749848 (sub_140749848.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140659040 @ 0x140659040 (sub_140659040.c)
 *     sub_14084C784 @ 0x14084C784 (sub_14084C784.c)
 *     sub_140863944 @ 0x140863944 (sub_140863944.c)
 *     sub_140957610 @ 0x140957610 (sub_140957610.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084C604(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  char v9; // cl
  char v10; // dl
  char v11; // al
  char v12; // cl
  __int64 result; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  v14 = 0;
  Pool2 = ExAllocatePool2(256LL, 40LL, 1685089872LL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    goto LABEL_16;
  }
  v8 = sub_14084C784(a2, Pool2);
  if ( v8 < 0 )
    goto LABEL_15;
  if ( (*(_BYTE *)(*v7 + 4LL) & 2) != 0 )
  {
    v8 = sub_140659040(a2, v7 + 3);
    if ( v8 < 0 )
      goto LABEL_15;
  }
  if ( !*(_QWORD *)(a2 + 56) )
  {
    v8 = -1073741637;
    goto LABEL_15;
  }
  v8 = sub_14042A5E0(*(_QWORD *)(a2 + 8), &v15);
  if ( v8 < 0 )
  {
LABEL_15:
    sub_140863944((ULONG_PTR)v7);
    v7 = 0LL;
    goto LABEL_16;
  }
  *((_BYTE *)v7 + 16) ^= (*((_BYTE *)v7 + 16) ^ (8 * (v15 >> 1))) & 8;
  v9 = *((_BYTE *)v7 + 16) ^ (*((_BYTE *)v7 + 16) ^ (4 * v15)) & 4;
  *((_BYTE *)v7 + 16) = v9;
  v10 = v9 ^ (v9 ^ (32 * (v15 >> 3))) & 0x20;
  *((_BYTE *)v7 + 16) = v10;
  v11 = v10 ^ (v10 ^ (16 * (v15 >> 2))) & 0x10;
  *((_BYTE *)v7 + 16) = v11;
  if ( (v11 & 0x24) != 0 )
    sub_140957610(a1, v15);
  v8 = sub_14042A5E0(*v7, &v14);
  if ( v8 < 0 )
  {
    v8 = 0;
  }
  else
  {
    v12 = *((_BYTE *)v7 + 16) ^ (*((_BYTE *)v7 + 16) ^ (32 * v14)) & 0x40;
    *((_BYTE *)v7 + 16) = v12;
    *((_BYTE *)v7 + 16) = (v14 << 7) | v12 & 0x7F;
  }
  *((_DWORD *)v7 + 5) = 2;
LABEL_16:
  result = (unsigned int)v8;
  *a3 = v7;
  return result;
}
