/*
 * XREFs of sub_18008A650 @ 0x18008A650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B038 @ 0x18009B038 (sub_18009B038.c)
 *     sub_18009B3D8 @ 0x18009B3D8 (sub_18009B3D8.c)
 *     sub_18009B3EC @ 0x18009B3EC (sub_18009B3EC.c)
 *     sub_18009B400 @ 0x18009B400 (sub_18009B400.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 *     sub_18009B420 @ 0x18009B420 (sub_18009B420.c)
 *     sub_18009B430 @ 0x18009B430 (sub_18009B430.c)
 *     sub_18009B440 @ 0x18009B440 (sub_18009B440.c)
 */

__int64 sub_18008A650()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  v0 = sub_18009B410();
  v2 = sub_18009B400(v1, v0);
  v5 = sub_18009B420(v4, v2 | v3);
  v8 = sub_18009B038(v7, v5 | v6);
  v11 = sub_18009B430(v10, v8 | v9);
  v14 = sub_18009B440(v13, v11 | v12);
  v17 = sub_18009B3EC(v16, v14 | v15);
  result = sub_18009B3D8(v19, v17 | v18);
  *(_QWORD *)(v22 + 112) = result | v21;
  return result;
}
