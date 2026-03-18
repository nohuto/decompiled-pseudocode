/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC290
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00CC200 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0019220 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0019260 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0019EB0 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // rsi
  _DWORD *v5; // r13
  int v6; // eax
  int v7; // r15d
  bool v8; // zf
  _DWORD *v10; // rbx
  int v11; // r14d
  __int64 v12; // r12
  _DWORD *v13; // rsi
  int v14; // edi
  int v15; // ecx
  LONG v16; // eax
  signed int v17; // r14d
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // rsi
  int v22; // edi
  LONG v23; // eax
  int v24; // r8d
  LONG v25; // edx
  int v26; // eax
  int v27; // edi
  int v28; // r10d
  int v29; // eax
  __int64 v30; // r9
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // r8d
  LONG v37; // edx
  signed int v38; // r10d
  signed int v39; // edi
  int v40; // eax
  int v41; // eax
  __int64 v42; // r9
  int v43; // eax
  signed int v44; // ecx
  int v45; // ecx
  int v46; // eax
  int *v47; // rsi
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  LONG v57; // eax
  int v58; // eax
  int v59; // [rsp+20h] [rbp-28h]
  int v60; // [rsp+24h] [rbp-24h]
  struct _POINTL v61; // [rsp+28h] [rbp-20h] BYREF
  int v62; // [rsp+30h] [rbp-18h]
  int v63; // [rsp+34h] [rbp-14h]
  int v66; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD **)(*(_QWORD *)this + 88LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  while ( 2 )
  {
    if ( !v6 )
      return 1LL;
    v7 = 0;
    v60 = v6 - 1;
    v8 = *v5 == 0;
    v59 = *v5;
LABEL_3:
    v66 = v7;
    if ( v8 )
    {
      v6 = v60;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      continue;
    }
    break;
  }
  if ( (int)v5[v7 + 3] > 0x7FFFFFF )
    goto LABEL_24;
  v61.x = v5[v7 + 3];
  v61.y = v5[1];
  v10 = v5;
  v11 = v7;
  if ( (unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v61) )
  {
    v12 = v7 & 1;
    v13 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    v5[v7 + 3] += 0x10000000;
LABEL_10:
    v14 = *v13;
    v15 = 1;
    if ( !*v13 )
      goto LABEL_11;
    while ( 1 )
    {
      v24 = v10[v11 + 3];
      v25 = v24;
      if ( v24 > 0x7FFFFFF )
        v25 = v24 - 0x10000000;
      v26 = v13[(unsigned int)v12 + 3];
      v27 = v14 - v12 - 1;
      v28 = v12;
      if ( v26 > 0x7FFFFFF )
        v26 -= 0x10000000;
      if ( v26 > v25 )
      {
        v27 = v12;
      }
      else
      {
        v29 = v13[v27 + 3];
        if ( v29 > 0x7FFFFFF )
          v29 -= 0x10000000;
        if ( v29 <= v25 )
          goto LABEL_51;
        v30 = (unsigned int)(v27 + v12) >> 1;
        if ( (_DWORD)v30 != (_DWORD)v12 )
        {
          do
          {
            v31 = v13[v30 + 3];
            if ( v31 > 0x7FFFFFF )
              v31 -= 0x10000000;
            v32 = v30;
            if ( v31 <= v25 )
            {
              v32 = v27;
              v28 = v30;
            }
            v27 = v32;
            v30 = (unsigned int)(v28 + v32) >> 1;
          }
          while ( (_DWORD)v30 != v28 );
        }
      }
      if ( (v27 & 1) == (_DWORD)v12 )
      {
        v55 = v13[v27 + 3];
        if ( v55 > 0x7FFFFFF )
          v55 -= 0x10000000;
        v56 = v10[v11 + 4];
        if ( v56 > 0x7FFFFFF )
          v56 -= 0x10000000;
        if ( v55 >= v56 )
          goto LABEL_51;
      }
      else
      {
        --v27;
        if ( v11 )
        {
          v49 = v13[v27 + 3];
          if ( v49 > 0x7FFFFFF )
            v49 -= 0x10000000;
          v50 = v10[v11 + 2];
          if ( v50 > 0x7FFFFFF )
            v50 -= 0x10000000;
          if ( v49 < v50 )
          {
            v15 = -1;
LABEL_11:
            v16 = v10[v11 + 3];
            if ( v16 > 0x7FFFFFF )
              v16 -= 0x10000000;
            v61.x = v16;
            v17 = v15 + v11;
            v61.y = v10[2];
            v63 = v10[2];
            v18 = v10[v17 + 3];
            if ( v18 > 0x7FFFFFF )
              v18 -= 0x10000000;
            v62 = v18;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              return 0LL;
            v19 = *(v10 - 1);
            v10[v17 + 3] += 0x10000000;
            v20 = -1;
            v21 = (_DWORD *)((char *)v10 - (unsigned int)(4 * v19 + 16));
            v22 = *v21;
            if ( *v21 )
            {
              do
              {
                v36 = v10[v17 + 3];
                v37 = v36;
                if ( v36 > 0x7FFFFFF )
                  v37 = v36 - 0x10000000;
                v38 = v12;
                v39 = v22 - v12 - 1;
                v40 = v21[v39 + 3];
                if ( v40 > 0x7FFFFFF )
                  v40 -= 0x10000000;
                if ( v40 >= v37 )
                {
                  v41 = v21[v12 + 3];
                  if ( v41 > 0x7FFFFFF )
                    v41 -= 0x10000000;
                  if ( v41 >= v37 )
                    break;
                  v42 = (unsigned int)(v39 + v12) >> 1;
                  if ( (_DWORD)v42 != (_DWORD)v12 )
                  {
                    do
                    {
                      v43 = v21[v42 + 3];
                      if ( v43 > 0x7FFFFFF )
                        v43 -= 0x10000000;
                      v44 = v42;
                      if ( v43 < v37 )
                      {
                        v44 = v39;
                        v38 = v42;
                      }
                      v39 = v44;
                      v42 = (unsigned int)(v38 + v44) >> 1;
                    }
                    while ( (_DWORD)v42 != v38 );
                  }
                  v39 = v38;
                }
                if ( (v39 & 1) == (_DWORD)v12 )
                {
                  ++v39;
                  if ( v17 < (unsigned int)(*v10 - 1) )
                  {
                    v51 = v21[v39 + 3];
                    if ( v51 > 0x7FFFFFF )
                      v51 -= 0x10000000;
                    v52 = v10[v17 + 4];
                    if ( v52 > 0x7FFFFFF )
                      v52 -= 0x10000000;
                    if ( v51 > v52 )
                    {
                      v20 = 1;
                      goto LABEL_17;
                    }
                  }
                }
                else
                {
                  v53 = v21[v39 + 3];
                  if ( v53 > 0x7FFFFFF )
                    v53 -= 0x10000000;
                  v54 = v10[v17 + 2];
                  if ( v54 > 0x7FFFFFF )
                    v54 -= 0x10000000;
                  if ( v53 <= v54 )
                    break;
                }
                v45 = v21[v39 + 3];
                v46 = v45;
                if ( v45 > 0x7FFFFFF )
                  v46 = v45 - 0x10000000;
                if ( v37 != v46 )
                  goto LABEL_118;
                if ( v36 > 0x7FFFFFF )
                  v36 -= 0x10000000;
                if ( v36 != v46 )
                  goto LABEL_118;
                if ( v45 > 0x7FFFFFF )
                  v45 -= 0x10000000;
                if ( v45 != v46 )
                {
LABEL_118:
                  v61.x = v37;
                  v61.y = v10[1];
                  v63 = v10[1];
                  v62 = v46;
                  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
                    return 0LL;
                }
                v10 = v21;
                v17 = v39;
                v47 = v21 - 1;
                v48 = *v47;
                v10[v39 + 3] += 0x10000000;
                v21 = (int *)((char *)v47 - (unsigned int)(4 * v48 + 16) + 4);
                v22 = *v21;
              }
              while ( *v21 );
              v20 = -1;
            }
LABEL_17:
            if ( v5 != v10 || (v7 = v66, v66 != v17 - 1) )
            {
              v57 = v10[v17 + 3];
              if ( v57 > 0x7FFFFFF )
                v57 -= 0x10000000;
              v61.x = v57;
              v11 = v20 + v17;
              v61.y = v10[1];
              v63 = v10[1];
              v58 = v10[v11 + 3];
              if ( v58 > 0x7FFFFFF )
                v58 -= 0x10000000;
              v62 = v58;
              if ( (unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              {
                v13 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
                v10[v11 + 3] += 0x10000000;
                goto LABEL_10;
              }
              return 0LL;
            }
            v23 = v10[v17 + 3];
            if ( v23 > 0x7FFFFFF )
              v23 -= 0x10000000;
            v4 = a2;
            v61.x = v23;
            v61.y = v10[1];
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 1) || !(unsigned int)EPATHOBJ::bCloseFigure(a2) )
              return 0LL;
            v3 = a3;
LABEL_24:
            v8 = ++v7 == v59;
            goto LABEL_3;
          }
        }
      }
      v33 = v13[v27 + 3];
      v34 = v33;
      if ( v33 > 0x7FFFFFF )
        v34 = v33 - 0x10000000;
      if ( v25 != v34 )
        goto LABEL_119;
      if ( v24 > 0x7FFFFFF )
        v24 -= 0x10000000;
      if ( v24 != v34 )
        goto LABEL_119;
      if ( v33 > 0x7FFFFFF )
        v33 -= 0x10000000;
      if ( v33 != v34 )
      {
LABEL_119:
        v61.x = v25;
        v61.y = v10[2];
        v63 = v10[2];
        v62 = v34;
        if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
          return 0LL;
      }
      v35 = *v13;
      v10 = v13;
      v11 = v27;
      v13[v27 + 3] += 0x10000000;
      v13 = (_DWORD *)((char *)v13 + (unsigned int)(4 * v35 + 16));
      v14 = *v13;
      if ( !*v13 )
      {
LABEL_51:
        v15 = 1;
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
