/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x1405EE040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EE200 @ 0x1405EE200 (sub_1405EE200.c)
 *     sub_1405EE4E0 @ 0x1405EE4E0 (sub_1405EE4E0.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // bl
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int i; // eax

  sub_1405EE200();
  v6 = 0;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 == a1 )
    {
      i = *(_DWORD *)(a2 + 8);
      LODWORD(v7) = i;
      if ( i < *(_DWORD *)(a1 + 112) )
      {
        v8 = *(_QWORD *)(a2 + 16);
        goto LABEL_9;
      }
    }
  }
  else
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v7) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    v8 = **(_QWORD **)(a1 + 120);
    for ( i = 0; ; ++i )
    {
      *(_QWORD *)(a2 + 16) = v8;
LABEL_9:
      if ( v8 )
        break;
      v7 = i + 1;
      *(_DWORD *)(a2 + 8) = v7;
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 112) )
        goto LABEL_11;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7);
    }
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 112) )
      goto LABEL_13;
LABEL_11:
    if ( !v8 )
    {
      *a3 = 0LL;
      goto LABEL_14;
    }
LABEL_13:
    *a3 = v8;
    v6 = 1;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  }
LABEL_14:
  sub_1405EE4E0(a1);
  return v6;
}
