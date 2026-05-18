/*
 * XREFs of sub_1800E0100 @ 0x1800E0100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     sub_1800DE1E8 @ 0x1800DE1E8 (sub_1800DE1E8.c)
 *     sub_1800DFDF4 @ 0x1800DFDF4 (sub_1800DFDF4.c)
 *     sub_1800DFE20 @ 0x1800DFE20 (sub_1800DFE20.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E0100(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  void *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  sub_1800DFE20((__int64 *)v5);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  v2 = *(_BYTE *)(a1 + 112);
  *(_BYTE *)(a1 + 112) = 1;
  sub_1800DFDF4((__int64 *)v5, (__int64 *)(a1 + 96));
  Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( !v2 )
  {
    v3 = *(_QWORD *)v5[0];
    v6 = *(_QWORD *)v5[0];
    while ( !*(_BYTE *)(v3 + 25) )
    {
      sub_180025DA4(v3 + 40);
      sub_18001D3F8(&v6);
      v3 = v6;
    }
  }
  return sub_1800DE1E8(v5);
}
