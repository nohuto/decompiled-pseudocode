/*
 * XREFs of sub_140A18C2C @ 0x140A18C2C
 * Callers:
 *     sub_140A18724 @ 0x140A18724 (sub_140A18724.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A14BDC @ 0x140A14BDC (sub_140A14BDC.c)
 */

__int64 __fastcall sub_140A18C2C(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // r8d
  _BYTE *v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rbx

  v3 = *(_QWORD *)(a2 + 16);
  v4 = 0;
  if ( v3 >= 0x2000 )
  {
    v7 = *(_BYTE **)(a2 + 24);
    v8 = &v7[v3];
    v4 = sub_140A14BDC(0, v7, 0x1000u);
    v6 = v8 - 4096;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(_BYTE **)(a2 + 24);
  }
  *a1 = sub_140A14BDC(v4, v6, v5);
  return 0LL;
}
