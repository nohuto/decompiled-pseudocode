/*
 * XREFs of ?pxrlStrRead01AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00DFC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v9; // ebx
  unsigned __int8 *v10; // r15
  ULONG v11; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // r14d
  int v15; // r11d
  int v16; // r12d
  unsigned int *v17; // r13
  struct _XLATEOBJ *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // rcx
  _DWORD *v22; // r9
  int v23; // r9d
  __int64 v24; // r14
  unsigned __int8 *v25; // rax
  _DWORD *v26; // r9
  ULONG *pulXlate; // rax
  struct _XLATEOBJ *v29; // [rsp+48h] [rbp+28h]
  int v30; // [rsp+50h] [rbp+30h]

  v7 = a6;
  v9 = a6 & 0x1F;
  v10 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v11 = *pulXlate;
    v12 = pulXlate[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v13 = *(_DWORD *)a1;
  v14 = 0;
  *((_DWORD *)a2 + 2) = v13;
  v15 = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
  if ( a6 < a7 )
  {
    v16 = *(_DWORD *)v10;
    v17 = (unsigned int *)((char *)a1 + 32);
    v18 = 0LL;
    v19 = a6 & 0x1F;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = *v17;
      v30 = v14 + 1;
      v29 = (struct _XLATEOBJ *)((char *)&v18->iUniq + 1);
      if ( (dword_1C02ED6E0[v19] & v16) != 0 )
      {
        if ( (_DWORD)v21 )
        {
          v15 += v21;
          v26 = (_DWORD *)((char *)a2 + 4 * v20 + 16);
          v20 += v21;
          do
          {
            *v26++ &= v12;
            LODWORD(v21) = v21 - 1;
          }
          while ( (_DWORD)v21 );
        }
        else
        {
          *((_DWORD *)a2 + v20 + 4) &= v12;
        }
      }
      else if ( (_DWORD)v21 )
      {
        v15 += v21;
        v22 = (_DWORD *)((char *)a2 + 4 * v20 + 16);
        v20 += v21;
        do
        {
          *v22++ &= v11;
          LODWORD(v21) = v21 - 1;
        }
        while ( (_DWORD)v21 );
      }
      else
      {
        *((_DWORD *)a2 + v20 + 4) &= v11;
      }
      ++v7;
      v23 = v9 + 1;
      v24 = v19 + 1;
      if ( v7 >= a7 )
        break;
      if ( (v23 & 0x20) != 0 )
        v16 = *((_DWORD *)v10 + 1);
      ++v17;
      v25 = v10 + 4;
      if ( (v23 & 0x20) == 0 )
        v25 = v10;
      v9 = 0;
      v10 = v25;
      v18 = v29;
      if ( (v23 & 0x20) == 0 )
        v9 = v23;
      v19 = 0LL;
      if ( (v23 & 0x20) == 0 )
        v19 = v24;
      v14 = v30;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v15 + 16);
}
