/*
 * XREFs of sub_180050E70 @ 0x180050E70
 * Callers:
 *     sub_180050FB8 @ 0x180050FB8 (sub_180050FB8.c)
 * Callees:
 *     sub_18001E580 @ 0x18001E580 (sub_18001E580.c)
 *     sub_18001E804 @ 0x18001E804 (sub_18001E804.c)
 *     sub_180051254 @ 0x180051254 (sub_180051254.c)
 *     sub_180051F3C @ 0x180051F3C (sub_180051F3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180050E70(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v6; // edi
  char v7; // bp
  __int64 v8; // rax
  int i; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned __int8)a3;
  v6 = 0;
  v7 = 0;
  LOBYTE(a3) = 1;
  sub_180051254(v15, a1, a3);
  if ( v15[8] )
  {
    sub_180051F3C(a2);
    v8 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v8); i != -1; i = std::streambuf::snextc(v11) )
    {
      if ( i == v3 )
      {
        v7 = 1;
        v12 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        std::streambuf::sbumpc(v12);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(a2 + 16) >= 0x7FFFFFFFFFFFFFFFuLL )
      {
        v6 = 2;
        goto LABEL_10;
      }
      LOBYTE(v10) = i;
      sub_18001E804((void **)a2, v10);
      v7 = 1;
      v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
    v6 = 1;
  }
LABEL_10:
  v13 = v6 | 2;
  if ( v7 )
    v13 = v6;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v13, 0LL);
  sub_18001E580((__int64)v15);
  return a1;
}
