/*
 * XREFs of sub_140252A60 @ 0x140252A60
 * Callers:
 *     sub_14025298C @ 0x14025298C (sub_14025298C.c)
 *     sub_14063E084 @ 0x14063E084 (sub_14063E084.c)
 * Callees:
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 */

char __fastcall sub_140252A60(__int64 a1, _QWORD *a2, int *a3, unsigned int *a4)
{
  char v8; // r8
  int v9; // ecx
  int v10; // eax

  v8 = sub_140357840(a1, 0LL);
  if ( v8 )
  {
    v9 = *(unsigned __int8 *)(a1 + 1);
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = 2;
    if ( (v9 & 1) != 0 )
    {
      *a3 = 1;
    }
    else
    {
      v10 = *a3;
      if ( (v9 & 2) != 0 )
        v10 = 3;
      *a3 = v10;
    }
    *a4 = ((v9 & 0xFFFFFFFC) << 16) / 0x2710;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v8;
}
