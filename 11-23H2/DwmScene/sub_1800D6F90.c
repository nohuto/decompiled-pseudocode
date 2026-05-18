/*
 * XREFs of sub_1800D6F90 @ 0x1800D6F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 */

bool __fastcall sub_1800D6F90(_QWORD *a1, _QWORD ***a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD **v10; // rcx
  _QWORD *v12; // rsi
  _QWORD ***v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdi

  v4 = a3 - 1;
  if ( !v4 )
  {
    v12 = a1 + 18;
    if ( !sub_180011DD0(a1 + 18) )
    {
      v10 = *v13;
      if ( *(_BYTE *)(v14 + 256) )
      {
        v15 = v14 + 160;
        sub_1800391CC(v10, v14 + 160, v14 + 128);
        v10 = *a2;
      }
      else
      {
        v15 = v14 + 128;
      }
      v9 = v15;
      v8 = (__int64)v12;
      goto LABEL_13;
    }
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return sub_180011DE0(a1 + 22);
  if ( v5 != 1 || sub_180011DD0(a1 + 24) )
    return 0;
  v8 = v6;
  v9 = v7 + 128;
  v10 = *a2;
LABEL_13:
  sub_1800391CC(v10, v8, v9);
  return 1;
}
