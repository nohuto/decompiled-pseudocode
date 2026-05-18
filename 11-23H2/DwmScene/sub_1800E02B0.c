/*
 * XREFs of sub_1800E02B0 @ 0x1800E02B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001CB14 @ 0x18001CB14 (sub_18001CB14.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_18002F04C @ 0x18002F04C (sub_18002F04C.c)
 */

int __fastcall sub_1800E02B0(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  sub_18002F04C((__int64 *)(a1 + 96), (__int64)v7, &v9);
  if ( !*(_BYTE *)(v8 + 25) && a2 >= *(_DWORD *)(v8 + 32) && v8 != *(_QWORD *)(a1 + 96) )
  {
    v4 = sub_180028C50((_QWORD *)(a1 + 96), v8);
    sub_18001CB14(v5, (char *)v4);
  }
  return Mtx_unlock((_Mtx_t)(a1 + 8));
}
