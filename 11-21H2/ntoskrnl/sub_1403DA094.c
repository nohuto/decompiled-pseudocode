/*
 * XREFs of sub_1403DA094 @ 0x1403DA094
 * Callers:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 * Callees:
 *     sub_1402D75FC @ 0x1402D75FC (sub_1402D75FC.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 */

bool __fastcall sub_1403DA094(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  int v12; // eax
  _DWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  if ( (a5 & 0x1000) != 0 )
  {
    v12 = sub_1406E3AE0((_DWORD)a1, 0, (unsigned int)&v14, 4096, 1);
    if ( v12 >= 0 )
    {
      if ( (int)sub_1406E3AE0((_DWORD)a2, 0, (unsigned int)&v13, 4096, 0) < 0 )
        return 0;
      v8 = v14;
      v9 = v13;
LABEL_4:
      v10 = *(_QWORD *)(v8 + 11) - *(_QWORD *)(v9 + 11);
      if ( !v10 )
        v10 = *(_QWORD *)(v8 + 13) - *(_QWORD *)(v9 + 13);
      return !v10 && ((a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)((char *)v9 + (unsigned int)v9[29])));
    }
    if ( v12 != -1073741686 )
      return 0;
  }
  else
  {
    v8 = sub_1402D75FC(a1, (__int64)a2, 0, 1);
    if ( v8 )
    {
      v9 = sub_1402D75FC(a2, v7, 0, 0);
      if ( !v9 )
        return 0;
      goto LABEL_4;
    }
  }
  return (a5 & 0x1000000) != 0;
}
