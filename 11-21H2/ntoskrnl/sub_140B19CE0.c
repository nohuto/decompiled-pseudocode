/*
 * XREFs of sub_140B19CE0 @ 0x140B19CE0
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_140B19F5C @ 0x140B19F5C (sub_140B19F5C.c)
 */

__int64 __fastcall sub_140B19CE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h]

  v9 = a1;
  v8 = &v7;
  v10 = a1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    LODWORD(result) = -1;
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 12) = 1;
  while ( 1 )
  {
    v2 = v9;
    v3 = *(_DWORD *)(v9 + 12);
    if ( !v3 )
      break;
    if ( v3 != 11 )
    {
      if ( v3 != 1 )
        goto LABEL_10;
      local_unwind(v8, &loc_140B19D1A);
    }
    local_unwind(v8, &loc_140B19D0C);
LABEL_10:
    *(_DWORD *)(v2 + 12) = 0;
  }
  *(_DWORD *)(v9 + 12) = 11;
  ++**(_DWORD **)v9;
  v4 = *(_DWORD *)(v9 + 12) + 11;
  *(_DWORD *)(v9 + 12) = v4;
  if ( v4 == 99 )
    local_unwind(v8, &loc_140B19D0C);
  ++**(_DWORD **)v2;
  *(_DWORD *)(v2 + 12) += 11;
  if ( *(_DWORD *)(v2 + 12) == 55 )
    *(_DWORD *)(v2 + 12) = 66;
  else
    ++**(_DWORD **)v2;
  v5 = *(_DWORD *)(v2 + 12) + 11;
  *(_DWORD *)(v2 + 12) = v5;
  if ( v5 == 99 )
    ++**(_DWORD **)v2;
  else
    local_unwind(v8, &loc_140B19D0C);
  v6 = *(_DWORD *)(v2 + 12) + 11;
  *(_DWORD *)(v2 + 12) = v6;
  if ( v6 == 99 )
    ++**(_DWORD **)v2;
  else
    sub_140B19F5C();
  LODWORD(result) = *(_DWORD *)(v10 + 12);
  a1 = v9;
LABEL_3:
  result = (int)result;
  *(_QWORD *)(a1 + 24) += (int)result;
  return result;
}
