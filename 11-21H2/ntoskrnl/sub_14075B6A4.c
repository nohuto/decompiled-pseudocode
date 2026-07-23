/*
 * XREFs of sub_14075B6A4 @ 0x14075B6A4
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 * Callees:
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 *     sub_140842820 @ 0x140842820 (sub_140842820.c)
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 *     sub_14085CF70 @ 0x14085CF70 (sub_14085CF70.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 */

__int64 __fastcall sub_14075B6A4(__int64 a1, int a2, const wchar_t *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  void *v7; // rsi
  unsigned __int16 v10; // r14
  int v11; // r15d
  wchar_t *v12; // rax
  const WCHAR *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned int v19; // edi
  unsigned int i; // eax
  int v21; // r9d
  unsigned int v22; // ebx
  _OWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(void **)(a1 + 8);
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0;
    goto LABEL_10;
  }
  v10 = 28700;
  v11 = (int)a3;
  v12 = wcsrchr(a3, 0x5Cu);
  if ( !v12 )
  {
LABEL_10:
    v13 = a3;
    goto LABEL_4;
  }
  v13 = v12 + 1;
LABEL_4:
  v26 = 0;
  v14 = sub_14075B7F4((_DWORD)v7, v10, 24577, (_DWORD)v13, (__int64)v24);
  v17 = a7;
  v18 = a6;
  while ( 1 )
  {
    v19 = v14;
    if ( !v14 )
    {
      for ( i = sub_14075B48C(v7, v10, v15, v13, (unsigned int *)v24); ; i = sub_140A146FC(v7, v24) )
      {
        v22 = i;
        if ( !i )
          break;
        if ( (unsigned int)sub_140843160(a1, i, v11, v21, a5, v18, v17) )
        {
          if ( (unsigned int)sub_14085CF70(a1, v7, v22, &v26) )
            return v26;
          goto LABEL_18;
        }
      }
      return v26;
    }
    if ( (unsigned int)sub_140843160(a1, v14, v11, v16, a5, v18, v17) )
      break;
    v14 = sub_140842820(v7, v24);
  }
  if ( !(unsigned int)sub_14085CF70(a1, v7, v19, &v26) )
LABEL_18:
    sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseMatchEx");
  return v26;
}
