/*
 * XREFs of sub_140842C30 @ 0x140842C30
 * Callers:
 *     sub_140842820 @ 0x140842820 (sub_140842820.c)
 *     sub_140842978 @ 0x140842978 (sub_140842978.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B988 @ 0x14075B988 (sub_14075B988.c)
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 *     sub_14079422C @ 0x14079422C (sub_14079422C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140842C30(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // edi
  unsigned int v13; // esi
  __int16 v14; // si
  __int16 v15; // ax

  v4 = a2;
  if ( (unsigned __int16)sub_14079499C(a1, a2) == 0x9801 && (v6 = sub_14075B988(a1, v4)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v13 = a3[1];
      if ( !v13 )
        v13 = *(_DWORD *)(v6 + 12LL * (unsigned int)a3[4] + 8);
      v11 = sub_1407941A4(a1, v13);
      v14 = sub_14079499C(a1, v13);
      v15 = sub_14079499C(a1, v11);
      if ( v15 && (v15 & 0xF000) == 0x7000 && v15 == v14 && v11 != a3[2] )
      {
        a3[1] = v11;
        return v11;
      }
    }
    else
    {
      v7 = sub_14079422C(a1, v4);
      v8 = (unsigned int)a3[4];
      if ( (_DWORD)v8 != v7 / 0xC - 1 )
      {
        v9 = 3 * v8;
        v10 = (unsigned int)(v8 + 1);
        if ( *(_QWORD *)(v6 + 4 * v9) == *(_QWORD *)(v6 + 12 * v10) )
        {
          a3[4] = v10;
          return *(unsigned int *)(v6 + 12 * v10 + 8);
        }
      }
    }
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetNextIndexedRecord");
  }
  return 0LL;
}
