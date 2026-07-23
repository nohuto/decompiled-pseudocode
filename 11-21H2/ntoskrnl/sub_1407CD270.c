/*
 * XREFs of sub_1407CD270 @ 0x1407CD270
 * Callers:
 *     sub_140715BA0 @ 0x140715BA0 (sub_140715BA0.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 *     sub_140920C6C @ 0x140920C6C (sub_140920C6C.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1407C4180 @ 0x1407C4180 (sub_1407C4180.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 */

__int64 __fastcall sub_1407CD270(
        ULONG_PTR a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        unsigned __int16 *a4,
        _DWORD *a5,
        int *a6)
{
  int v6; // eax
  int v7; // r13d
  ULONG_PTR v11; // r10
  int v12; // ebx
  __int64 v13; // rbp
  __int64 result; // rax
  __int16 v15; // cx
  _DWORD *v16; // rdi
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // rbx
  unsigned int v20; // edx
  _BYTE *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // r11
  __int64 v25; // rbx
  unsigned __int16 v26; // dx
  unsigned int v27; // r9d
  int v28; // r8d
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // r8
  __int64 v31; // r10
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned __int16 *v34; // r10
  int v35; // r8d
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v40; // [rsp+88h] [rbp+10h]

  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = 0;
  v11 = a1;
  v12 = v6 - 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v15 = *(_WORD *)a2;
    v16 = a5;
    v40 = v12;
    *a5 = -1;
    if ( ((v15 - 26220) & 0xFDFF) != 0 )
    {
      v17 = sub_1407C4460(v11, a3, a4, *(unsigned int *)(a2 + 4 * v13 + 4));
      v18 = v17;
      if ( v17 == 2 )
        goto LABEL_64;
      if ( !v17 )
        *a5 = *(_DWORD *)(a2 + 4 * v13 + 4);
    }
    else
    {
      v19 = (_DWORD *)(8 * v13 + a2 + 4);
      if ( v15 != 26220 )
        goto LABEL_43;
      v20 = 4;
      v21 = v19 + 1;
      v22 = 0;
      while ( *v21 )
      {
        ++v22;
        ++v21;
        if ( v22 >= 4 )
          goto LABEL_13;
      }
      v20 = v22;
LABEL_13:
      if ( a4 )
        v23 = *a4;
      else
        v23 = a3->Length >> 1;
      if ( v23 >= v20 )
        v23 = v20;
      v24 = 0LL;
      if ( !v23 )
      {
LABEL_42:
        v16 = a5;
LABEL_43:
        v36 = sub_1407C4460(v11, a3, a4, (unsigned int)*v19);
        v18 = v36;
        if ( v36 == 2 )
          goto LABEL_63;
        if ( !v36 )
          *v16 = *v19;
        goto LABEL_46;
      }
      v25 = 0LL;
      while ( 1 )
      {
        v26 = a4 ? *(unsigned __int8 *)(*((_QWORD *)a4 + 1) + v24) : a3->Buffer[v25];
        v27 = *(unsigned __int8 *)(8 * v13 + v24 + a2 + 8);
        if ( v26 >= 0x61u )
        {
          if ( v26 <= 0x7Au )
          {
            v28 = v26 - 32;
          }
          else
          {
            v31 = *((_QWORD *)sub_140347DB0() + 154);
            if ( v31 && v29 >= v30 )
              v28 = (unsigned __int16)(v29
                                     + *(_WORD *)(v31
                                                + 2LL
                                                * ((v29 & 0xF)
                                                 + (unsigned int)*(unsigned __int16 *)(v31
                                                                                     + 2LL
                                                                                     * (((v29 >> 4) & 0xF)
                                                                                      + (unsigned int)*(unsigned __int16 *)(v31 + 2 * ((unsigned __int64)v29 >> 8)))))));
            else
              v28 = v29;
          }
        }
        else
        {
          v28 = v26;
        }
        if ( v27 >= 0x61 )
        {
          if ( v27 <= 0x7A )
          {
            v32 = v27 - 32;
          }
          else
          {
            v34 = (unsigned __int16 *)*((_QWORD *)sub_140347DB0() + 154);
            if ( v34 && (unsigned __int16)v33 >= 0xC0u )
              v32 = (unsigned __int16)(v33 + v34[(v33 & 0xF) + v34[*v34 + (v33 >> 4)]]);
            else
              v32 = (unsigned __int16)v33;
          }
        }
        else
        {
          v32 = v27;
        }
        v35 = v28 - v32;
        if ( v35 )
          break;
        v24 = (unsigned int)(v24 + 1);
        ++v25;
        if ( (unsigned int)v24 >= v23 )
        {
          v19 = (_DWORD *)(8 * v13 + a2 + 4);
          v11 = a1;
          goto LABEL_42;
        }
      }
      v18 = 1;
      if ( v35 <= 0 )
        v18 = -1;
    }
LABEL_46:
    if ( v18 == 2 )
    {
LABEL_63:
      v16 = a5;
      goto LABEL_64;
    }
    if ( !v18 )
    {
      *a6 = v13;
      return 0LL;
    }
    v12 = v13;
    if ( v18 >= 0 )
    {
      v7 = v13;
      v12 = v40;
    }
    if ( (unsigned int)(v12 - v7) <= 1 )
      break;
    v11 = a1;
    v13 = v7 + ((unsigned int)(v12 - v7) >> 1);
  }
  v16 = a5;
  v37 = sub_1407C4180(a1, a3, (unsigned __int8 **)a4, v7, (__int16 *)a2, (__int64)a5);
  if ( v37 != 2 )
  {
    if ( !v37 )
    {
      *a6 = v7;
      return 0LL;
    }
    if ( v37 < 0 )
    {
      *a6 = v7;
      return 3221225524LL;
    }
    v38 = sub_1407C4180(a1, a3, (unsigned __int8 **)a4, v12, (__int16 *)a2, (__int64)a5);
    if ( v38 != 2 )
    {
      result = v38 != 0 ? 0xC0000034 : 0;
      *a6 = v12;
      return result;
    }
  }
LABEL_64:
  *v16 = -1;
  *a6 = 0x80000000;
  return 3221225626LL;
}
