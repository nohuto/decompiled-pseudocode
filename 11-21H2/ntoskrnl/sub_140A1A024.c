/*
 * XREFs of sub_140A1A024 @ 0x140A1A024
 * Callers:
 *     sub_140A19DE8 @ 0x140A19DE8 (sub_140A19DE8.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A19F30 @ 0x140A19F30 (sub_140A19F30.c)
 *     sub_140A1A118 @ 0x140A1A118 (sub_140A1A118.c)
 */

__int64 __fastcall sub_140A1A024(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v4 = sub_140A19F30(&v8, a2);
  if ( v4 >= 0 )
  {
    v5 = v8;
    *(_DWORD *)(a1 + 88) |= 1u;
    v8 = 0;
    *(_QWORD *)(a1 + 80) = v5;
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 72) = 4LL;
    v4 = sub_140A1A118(&v8, a2);
    if ( v4 >= 0 )
    {
      v6 = v8;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v6;
      v4 = 0;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
      return (unsigned int)v4;
    }
    sub_1406E0C3C(1LL, (__int64)"AslpFileLargeGetChecksumAttributes");
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"AslpFileLargeGetChecksumAttributes");
    *(_DWORD *)(a1 + 88) |= 2u;
  }
  *(_DWORD *)(a1 + 856) |= 2u;
  return (unsigned int)v4;
}
