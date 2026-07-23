/*
 * XREFs of sub_140A10C20 @ 0x140A10C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140A10C20(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx

  v6 = *(_QWORD *)(a2 + 1480);
  v7 = 0;
  *a1 = 0;
  if ( v6 && (v10 = sub_140792CCC(a3, a5, 24577)) != 0 && (v11 = sub_140842A24(a3, v10)) != 0 )
  {
    v7 = 1;
    *a1 = sub_14042A5E0(v11, v12);
    if ( a6 )
      *(_DWORD *)(a6 + 80) = 1;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingDevice");
  }
  return v7;
}
