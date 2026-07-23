/*
 * XREFs of sub_140A1A118 @ 0x140A1A118
 * Callers:
 *     sub_140A1A024 @ 0x140A1A024 (sub_140A1A024.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A14BDC @ 0x140A14BDC (sub_140A14BDC.c)
 */

__int64 __fastcall sub_140A1A118(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  unsigned int v12; // r8d

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  v5 = a2[6];
  if ( !v5 )
    return 3221225485LL;
  v6 = a2[7];
  if ( v6 < 0x1000 )
    return 3221225485LL;
  v7 = (_BYTE *)a2[2];
  if ( !v7 || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  v8 = v4 - a2[8];
  if ( v8 <= v6 )
  {
    v10 = (_BYTE *)(v5 + v8 - 4096);
    v11 = sub_140A14BDC(0, v7, 0x1000u);
    *a1 = sub_140A14BDC(v11, v10, v12);
    return 0LL;
  }
  else
  {
    sub_1406E0C3C(0LL, (__int64)"AslpFileLargeGetCrcChecksum");
    sub_1406E0C3C(0LL, (__int64)"AslpFileLargeGetCrcChecksum");
    sub_1406E0C3C(0LL, (__int64)"AslpFileLargeGetCrcChecksum");
    sub_1406E0C3C(0LL, (__int64)"AslpFileLargeGetCrcChecksum");
    sub_1406E0C3C(0LL, (__int64)"AslpFileLargeGetCrcChecksum");
    sub_1406E0C3C(1LL, (__int64)"AslpFileLargeGetCrcChecksum");
    return 3221226016LL;
  }
}
