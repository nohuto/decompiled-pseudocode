/*
 * XREFs of sub_14065CFD4 @ 0x14065CFD4
 * Callers:
 *     sub_14065CF84 @ 0x14065CF84 (sub_14065CF84.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14065DDC4 @ 0x14065DDC4 (sub_14065DDC4.c)
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14065CFD4(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  ULONG_PTR v8; // rdx
  unsigned int *v9; // rcx
  ULONG_PTR v10; // rdx

  v3 = *(ULONG_PTR **)(a1 + 104);
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 68);
    switch ( v6 )
    {
      case 0:
        goto LABEL_11;
      case 1:
        goto LABEL_24;
      case 2:
        goto LABEL_12;
      case 3:
LABEL_24:
        *(_QWORD *)(a1 + 104) = 0LL;
        return;
    }
    if ( v6 <= 3 )
      return;
    if ( v6 <= 6 )
    {
      sub_14065DDC4(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v3);
      v9 = *(unsigned int **)(a1 + 112);
      *(_QWORD *)(a1 + 104) = 0LL;
      if ( v9 )
      {
        v10 = *v9;
        if ( (_DWORD)v10 != -1 )
        {
          sub_14079B22C(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v10);
          v9 = *(unsigned int **)(a1 + 112);
        }
        sub_140346D64(v9, 0x77554D43u);
LABEL_15:
        *(_QWORD *)(a1 + 112) = 0LL;
      }
    }
    else
    {
      if ( v6 != 9 )
      {
        if ( v6 != 10 )
        {
          if ( v6 != 12 )
            return;
LABEL_11:
          sub_1407164DC(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) = *(_DWORD *)(a1 + 88);
          *(_DWORD *)(a1 + 88) = 0;
          v3 = *(ULONG_PTR **)(a1 + 104);
          if ( !v3 )
          {
LABEL_13:
            v7 = *(_QWORD *)(a1 + 112);
            if ( !v7 )
              return;
            sub_14067E8A8(v7, a3);
            SeFreePrivileges(*(PPRIVILEGE_SET *)(a1 + 112));
            goto LABEL_15;
          }
LABEL_12:
          sub_14065E380(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), v3);
          *(_QWORD *)(a1 + 104) = 0LL;
          goto LABEL_13;
        }
        goto LABEL_24;
      }
      v8 = *(unsigned int *)v3;
      if ( (_DWORD)v8 != -1 )
        sub_1402A2104(v3[1], v8);
      ExFreePoolWithTag(v3, 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
}
