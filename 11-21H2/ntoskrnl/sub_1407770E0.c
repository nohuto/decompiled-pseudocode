/*
 * XREFs of sub_1407770E0 @ 0x1407770E0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_140777298 @ 0x140777298 (sub_140777298.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 */

__int64 __fastcall sub_1407770E0(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v9; // edi
  __int64 v10; // r13
  unsigned int v11; // ebp
  int v12; // ecx
  int v13; // r10d
  int v14; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rdx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx

  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
LABEL_2:
    v12 = *(_DWORD *)(a2 + 20);
    if ( v12 )
    {
      if ( v12 != 1 )
        return (unsigned int)-1073741811;
      if ( !*a1 )
      {
        v21 = sub_140777298(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
        v9 = sub_14069984C(1, a1[4], v21, 1, 0, v22, a1);
        if ( v9 == -1073741772 )
        {
          *a1 = -1LL;
          v9 = 0;
        }
      }
      v10 = *a1;
      if ( *a1 == -1 )
      {
        v23 = a1[2];
        v24 = 6LL * *((unsigned int *)a1 + 6);
        *(_OWORD *)(v23 + 8 * v24) = *(_OWORD *)a2;
        *(_OWORD *)(v23 + 8 * v24 + 16) = *(_OWORD *)(a2 + 16);
        ++*((_DWORD *)a1 + 6);
        goto LABEL_31;
      }
      v13 = 0;
      if ( (v9 & 0x80000000) != 0 )
        return v9;
    }
    else
    {
      v13 = sub_140777298(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
    }
    v14 = sub_14077D784(a1[4], v13, v10, a2, *(_DWORD *)(a2 + 20), 0LL, a1[2] + 48LL * *((unsigned int *)a1 + 6));
    v9 = v14;
    if ( v14 != -1073741811 )
    {
      if ( v14 >= 0 )
      {
        *a3 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 32);
        *a4 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 36);
        *a5 = *(_QWORD *)(a1[2] + 48LL * (unsigned int)(*((_DWORD *)a1 + 6))++ + 40);
      }
      return v9;
    }
    v9 = 0;
LABEL_31:
    *a3 = 0;
    *a4 = 0;
    *a5 = 0LL;
    return v9;
  }
  while ( 1 )
  {
    v16 = a1[2];
    v17 = 48LL * v11;
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(v17 + v16 + 16) )
    {
      v18 = *(_QWORD *)a2 - *(_QWORD *)(v17 + v16);
      if ( *(_QWORD *)a2 == *(_QWORD *)(v17 + v16) )
        v18 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v17 + v16 + 8);
      if ( !v18 && *(_DWORD *)(a2 + 20) == *(_DWORD *)(v17 + v16 + 20) )
      {
        v19 = *(const wchar_t **)(a2 + 24);
        v20 = *(const wchar_t **)(v17 + v16 + 24);
        if ( v19 == v20 || v19 && v20 && !wcsicmp(v19, v20) )
          break;
      }
    }
    if ( ++v11 >= *((_DWORD *)a1 + 6) )
      goto LABEL_2;
  }
  *a3 = *(_DWORD *)(a1[2] + 48LL * v11 + 32);
  *a4 = *(_DWORD *)(a1[2] + 48LL * v11 + 36);
  *a5 = *(_QWORD *)(a1[2] + 48LL * v11 + 40);
  return v9;
}
