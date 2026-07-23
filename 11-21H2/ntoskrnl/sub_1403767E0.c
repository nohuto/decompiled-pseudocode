/*
 * XREFs of sub_1403767E0 @ 0x1403767E0
 * Callers:
 *     sub_140204EA0 @ 0x140204EA0 (sub_140204EA0.c)
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 *     sub_14064A67C @ 0x14064A67C (sub_14064A67C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403767E0(_DWORD *a1, __int64 *a2, char a3, char a4)
{
  __int64 *v5; // rax
  __int64 **v6; // r8
  __int64 v7; // r8
  __int64 **v8; // r9

  if ( a4 && (a2[7] & 2) != 0 )
  {
    v7 = a2[2];
    if ( *(__int64 **)(v7 + 8) != a2 + 2 )
      goto LABEL_9;
    v8 = (__int64 **)a2[3];
    if ( *v8 != a2 + 2 )
      goto LABEL_9;
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_DWORD *)a2 + 14) &= ~2u;
    if ( a1 )
      --a1[6];
  }
  if ( a3 && (a2[7] & 1) != 0 )
  {
    v5 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) == a2 )
    {
      v6 = (__int64 **)a2[1];
      if ( *v6 == a2 )
      {
        *v6 = v5;
        v5[1] = (__int64)v6;
        *((_DWORD *)a2 + 14) &= ~1u;
        if ( a1 )
          --*a1;
        return;
      }
    }
LABEL_9:
    __fastfail(3u);
  }
}
