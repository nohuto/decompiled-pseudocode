/*
 * XREFs of sub_140A18CD0 @ 0x140A18CD0
 * Callers:
 *     sub_140A19614 @ 0x140A19614 (sub_140A19614.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A193C4 @ 0x140A193C4 (sub_140A193C4.c)
 *     sub_140A19738 @ 0x140A19738 (sub_140A19738.c)
 *     sub_140A19878 @ 0x140A19878 (sub_140A19878.c)
 *     sub_140A19CEC @ 0x140A19CEC (sub_140A19CEC.c)
 */

__int64 __fastcall sub_140A18CD0(_DWORD *a1, __int64 a2)
{
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  *a1 = 0;
  v8 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  v5 = sub_140A193C4(&v8, a2);
  if ( v5 < 0 )
    goto LABEL_4;
  v6 = v8;
  if ( (unsigned int)sub_140A19878(v8) )
  {
    *a1 = 1;
    return 0;
  }
  v5 = sub_140A19738(&v7, v6, a2);
  if ( v5 >= 0 )
  {
    if ( v7 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)sub_140A19CEC(v6) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( v5 == -1073741275 )
  {
    sub_1406E0C3C(2LL, (__int64)"AslpFileGetExeWrapper");
    return (unsigned int)v5;
  }
LABEL_4:
  sub_1406E0C3C(1LL, (__int64)"AslpFileGetExeWrapper");
  return (unsigned int)v5;
}
