/*
 * XREFs of sub_140A18F30 @ 0x140A18F30
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 *     sub_140A18AA0 @ 0x140A18AA0 (sub_140A18AA0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A15148 @ 0x140A15148 (sub_140A15148.c)
 */

__int64 __fastcall sub_140A18F30(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v3 = sub_140A15148(&v6, a2);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_DWORD *)(a1 + 920) |= 1u;
    *(_QWORD *)(a1 + 912) = v4;
    v3 = 0;
    *(_DWORD *)(a1 + 896) = 2;
    *(_QWORD *)(a1 + 904) = 4LL;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"AslpFileGetFileKindDetailAttribute");
  }
  return (unsigned int)v3;
}
