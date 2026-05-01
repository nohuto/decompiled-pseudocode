/*
 * XREFs of ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x1800362BC
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180034F80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostComputeQuiesceAction(
        struct _HAM_HOST_QUIESCE_ACTION *a1,
        struct _HAM_HOST_STATE_SNAPSHOT *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_HOST_QUIESCE_ACTION *a6)
{
  int v6; // r10d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // r11
  char v11; // dl
  struct _HAM_HOST_QUIESCE_ACTION *v12; // rax
  int v13; // ecx
  int v14; // ecx
  unsigned __int64 v15; // rax

  v6 = *(_DWORD *)a2;
  v7 = a4;
  if ( (*(_DWORD *)a2 & 6) != 0 )
    a3 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2) + *((_QWORD *)a1 + 1) - a3;
  if ( v8 >= a5 )
    v8 = a5;
  if ( (v6 & 8) != 0 )
  {
    v12 = a6;
    *(_OWORD *)a6 = 0LL;
    *(_BYTE *)a6 = 5;
    goto LABEL_11;
  }
  v9 = *(unsigned __int8 *)a1 - 1;
  if ( !v9 )
  {
    v10 = a5 - v8;
    if ( (v6 & 1) == 0 )
      v10 = a3;
    v11 = ((*(_DWORD *)a2 & 1) != 0) + 1;
    a3 = v10;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_14;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v11 = 1;
    if ( (v6 & 1) != 0 )
    {
      v11 = 2;
    }
    else
    {
      v15 = v7;
      if ( v7 >= a3 )
        v15 = a3;
      a3 = v15;
    }
    if ( !a3 )
    {
      v11 = 3;
      a3 = 1000LL;
    }
    goto LABEL_10;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v11 = 4 - (a3 != 0);
    goto LABEL_10;
  }
  if ( v14 == 1 )
  {
    a3 = 0LL;
LABEL_14:
    v11 = 4;
LABEL_10:
    v12 = a6;
    *(_OWORD *)a6 = 0LL;
    *(_BYTE *)a6 = v11;
    *((_QWORD *)a6 + 1) = a3;
LABEL_11:
    *((_QWORD *)v12 + 2) = v8;
  }
}
