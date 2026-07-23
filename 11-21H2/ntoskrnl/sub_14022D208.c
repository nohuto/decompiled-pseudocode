/*
 * XREFs of sub_14022D208 @ 0x14022D208
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 * Callees:
 *     sub_14022D300 @ 0x14022D300 (sub_14022D300.c)
 *     sub_14064A7E8 @ 0x14064A7E8 (sub_14064A7E8.c)
 *     sub_14064A834 @ 0x14064A834 (sub_14064A834.c)
 */

__int64 __fastcall sub_14022D208(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
  char v6; // bl
  unsigned int v9; // r13d
  unsigned int v11; // edi
  unsigned __int16 *v12; // rsi
  int v13; // ecx
  __int64 result; // rax
  unsigned int v15; // ecx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rbp
  unsigned int *v20; // rbx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  int v28; // ecx

  v6 = 0;
  v9 = a2;
  if ( !a6 )
  {
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    v15 = *((_DWORD *)v12 + 6);
    result = v15 & ~a5;
    *((_DWORD *)v12 + 6) = result;
    if ( v15 == (_DWORD)result )
      return result;
LABEL_8:
    v16 = 0x10000;
LABEL_9:
    result = sub_14022D300(v11 & v15, v16, a4, *((_QWORD *)v12 + 5), 0);
    goto LABEL_5;
  }
  if ( a6 == 1 )
  {
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    v13 = *((_DWORD *)v12 + 7);
    a2 = (unsigned int)~*((_DWORD *)v12 + 8);
    result = v13 | a5 & ~*((_DWORD *)v12 + 8);
    *((_DWORD *)v12 + 7) = result;
    if ( v13 == (_DWORD)result )
      goto LABEL_4;
    v15 = a2 & ~v13;
    goto LABEL_8;
  }
  if ( a6 != 2 )
  {
    if ( a6 != 3 )
      return result;
    v11 = a5;
    v12 = (unsigned __int16 *)(a1 + 48LL * a3);
    result = *((unsigned int *)v12 + 7);
    v17 = a5 & *((_DWORD *)v12 + 7);
    *((_DWORD *)v12 + 7) = v17;
    if ( (_DWORD)result != (_DWORD)v17 )
    {
      result = sub_14064A7E8(v17, a2, a4, *((_QWORD *)v12 + 5));
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v11 = a5;
  v12 = (unsigned __int16 *)(a1 + 48LL * a3);
  v18 = *((_DWORD *)v12 + 8);
  a2 = (unsigned int)~*((_DWORD *)v12 + 7);
  result = v18 | a5 & ~*((_DWORD *)v12 + 7);
  *((_DWORD *)v12 + 8) = result;
  if ( v18 != (_DWORD)result )
  {
    v15 = a2 & ~v18;
    v16 = 0x20000;
    goto LABEL_9;
  }
LABEL_4:
  v6 = 1;
LABEL_5:
  if ( v9 != 1 )
  {
    if ( !v6 )
      result = sub_14064A834(a1, v9, a3, a4, a6);
    v19 = a3 + 1;
    if ( (unsigned int)v19 < v9 )
    {
      v20 = (unsigned int *)(48 * v19 + a1 + 28);
      do
      {
        result = *v12;
        if ( *((_WORD *)v20 - 14) <= (unsigned __int16)result )
          return result;
        if ( a6 )
        {
          if ( a6 != 1 )
          {
            if ( a6 != 2 )
            {
              v21 = (v11 & *v20) == 0;
              v22 = v11 & *v20;
              *v20 = v22;
              if ( !v21 )
                result = sub_14064A7E8(v22, a2, a4, *(_QWORD *)(v20 + 3));
              goto LABEL_35;
            }
            result = v20[1];
            v23 = ~*v20;
            v24 = v23 & ~v20[1];
            a2 = (unsigned int)result | v11 & v23;
            v20[1] = a2;
            v25 = v11 & v24;
            if ( v25 )
            {
              v26 = 0x20000;
LABEL_34:
              result = sub_14022D300(v25, v26, a4, *(_QWORD *)(v20 + 3), 0);
              goto LABEL_35;
            }
            goto LABEL_35;
          }
          result = *v20;
          v27 = ~v20[1];
          v28 = v27 & ~*v20;
          a2 = (unsigned int)result | v11 & v27;
          *v20 = a2;
        }
        else
        {
          a2 = *(v20 - 1);
          v28 = a2;
          result = (unsigned int)a2 & ~v11;
          *(v20 - 1) = result;
        }
        v25 = v11 & v28;
        if ( v25 )
        {
          v26 = 0x10000;
          goto LABEL_34;
        }
LABEL_35:
        LODWORD(v19) = v19 + 1;
        v20 += 12;
      }
      while ( (unsigned int)v19 < v9 );
    }
  }
  return result;
}
