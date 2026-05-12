/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C000F8D0
 * Callers:
 *     sub_1C00B22B0 @ 0x1C00B22B0 (sub_1C00B22B0.c)
 * Callees:
 *     <none>
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  PHYSICAL_ADDRESS result; // rax
  unsigned int *v5; // r15
  unsigned __int8 v6; // r9
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r12
  _DWORD **v11; // rcx
  unsigned int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rsi
  _DWORD *v16; // rcx
  _DWORD *v17; // rdi
  int v18; // r13d
  int v19; // ebp
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rbx
  int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // r12d
  unsigned int v27; // ebx
  unsigned __int64 v28; // rdx
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // edx
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // r9
  unsigned int *v40; // rdx
  unsigned int v41; // ebx
  unsigned int v42; // r8d
  unsigned int v43; // ecx
  unsigned int *v44; // r9
  __int64 v45; // rcx
  unsigned int v46; // [rsp+20h] [rbp-48h]
  unsigned int v47; // [rsp+24h] [rbp-44h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]
  unsigned __int8 v49; // [rsp+70h] [rbp+8h]

  result.QuadPart = 0LL;
  v5 = a4;
  v6 = 0;
  v47 = 0;
  v49 = 0;
  v8 = 0;
  v9 = 0;
  *v5 = 0;
  v10 = 0LL;
  v11 = *(_DWORD ***)(a1 - 16);
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !v11 )
    return result;
  v16 = *v11;
  if ( !v16 || *v16 != 1094997074 )
    return result;
  v17 = v16;
  if ( a2 )
  {
    v18 = *(unsigned __int8 *)(a2 + 2);
    if ( (_BYTE)v18 != 40 )
    {
      v25 = *(_DWORD *)(a2 + 16);
      v8 = v25;
      v10 = *(_QWORD *)(a2 + 24);
      v19 = v18;
      v14 = *(_QWORD *)(a2 + 56);
      v46 = v25;
      if ( !(_BYTE)v18 )
      {
        v6 = *(_BYTE *)(a2 + 11);
        v9 = v25;
        v15 = *(_QWORD *)(a2 + 32);
        v12 = 0;
        v49 = v6;
        goto LABEL_23;
      }
      goto LABEL_20;
    }
    v19 = *(_DWORD *)(a2 + 20);
    v10 = *(_QWORD *)(a2 + 64);
    v14 = *(_QWORD *)(a2 + 104);
    v46 = *(_DWORD *)(a2 + 60);
    v48 = v10;
    if ( !v19 )
    {
      v20 = *(_DWORD *)(a2 + 56);
      if ( v20 )
      {
        do
        {
          v21 = *(unsigned int *)(a2 + 4LL * (unsigned int)v13 + 120);
          if ( (unsigned int)v21 >= 0x80 )
          {
            v22 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v21 <= (unsigned int)v22 )
            {
              v23 = (unsigned int)v21;
              v24 = *(_DWORD *)(v21 + a2);
              if ( v24 == 64 )
              {
                if ( v23 + 40 <= v22 )
                  goto LABEL_12;
              }
              else
              {
                v32 = v24 - 65;
                if ( v32 )
                {
                  if ( v32 == 1 && v23 + 40 <= v22 )
                  {
                    v6 = *(_BYTE *)(v23 + a2 + 9);
                    v15 = *(_QWORD *)(v23 + a2 + 24);
                    v49 = v6;
                    goto LABEL_13;
                  }
                }
                else if ( v23 + 56 <= v22 )
                {
LABEL_12:
                  v6 = *(_BYTE *)(v23 + a2 + 9);
                  v15 = *(_QWORD *)(v23 + a2 + 16);
                  v49 = v6;
                  goto LABEL_13;
                }
              }
            }
          }
          LODWORD(v13) = v13 + 1;
        }
        while ( (unsigned int)v13 < v20 );
        v6 = 0;
      }
    }
LABEL_13:
    if ( (*(_BYTE *)(a2 + 24) & 0xC0) == 0xC0 )
    {
      v26 = *(_DWORD *)(a2 + 56);
      v27 = 0;
      if ( v26 )
      {
        while ( 1 )
        {
          v33 = *(unsigned int *)(a2 + 4LL * v27 + 120);
          if ( (unsigned int)v33 >= 0x80 )
          {
            v34 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v33 <= (unsigned int)v34 )
            {
              v35 = v33 + a2;
              if ( *(_DWORD *)(v33 + a2) == 1 && v33 + 24 <= v34 )
                break;
            }
          }
          if ( ++v27 >= v26 )
          {
            v6 = v49;
            goto LABEL_16;
          }
        }
        v10 = v48;
        v25 = v46;
        v5 = a4;
        if ( !v35 )
        {
          v6 = v49;
          goto LABEL_19;
        }
        v36 = *(_DWORD *)(v35 + 8);
        v13 = *(_QWORD *)(v35 + 16);
        v6 = v49;
        v47 = v36;
        goto LABEL_20;
      }
LABEL_16:
      v10 = v48;
    }
    v25 = v46;
    v5 = a4;
LABEL_19:
    v13 = 0LL;
LABEL_20:
    v8 = v25;
    if ( v19 == 23 )
    {
      if ( (_BYTE)v18 == 40 )
        v37 = *(_QWORD *)(a2 + 96);
      else
        v37 = *(_QWORD *)(a2 + 48);
      v9 = v46;
      if ( *(_DWORD *)(*(_QWORD *)(v37 + 104) + 40LL) > v46 )
        v8 = *(_DWORD *)(*(_QWORD *)(v37 + 104) + 40LL);
    }
    else
    {
      v9 = v46;
    }
    v12 = v47;
  }
LABEL_23:
  v28 = *((_QWORD *)v17 + 99);
  if ( v28 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v28 + (unsigned int)v17[202] )
  {
    v38 = (_DWORD)a3 - v28;
    result.QuadPart = *((_QWORD *)v17 + 100) + v38;
    v31 = v17[202] - v38;
    goto LABEL_38;
  }
  if ( a2 )
  {
    if ( v10 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + v10
      || v13 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v13 + v12 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v39 = *(_QWORD *)(a2 + 96);
      else
        v39 = *(_QWORD *)(a2 + 48);
      if ( v10 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v8 + v10 )
      {
        v40 = *(unsigned int **)(v39 + 152);
        v41 = (_DWORD)a3 - v13;
        v9 = v12;
      }
      else
      {
        v40 = *(unsigned int **)(v39 + 112);
        v41 = (_DWORD)a3 - v10;
      }
      if ( v40 )
      {
        v42 = *v40;
        v43 = 0;
        if ( *v40 )
        {
          v44 = v40 + 6;
          do
          {
            if ( v41 < *v44 )
              break;
            v41 -= *v44;
            ++v43;
            v44 += 6;
          }
          while ( v43 < v42 );
        }
        if ( v43 < v42 )
        {
          v45 = 3LL * v43;
          *v5 = v40[2 * v45 + 6] - v41;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v40[2 * v45 + 4] + v41);
        }
      }
      else if ( (*((_BYTE *)v17 + 4307) & 4) != 0 && (!*((_BYTE *)v17 + 768) || v17[197] != 3) )
      {
        result = MmGetPhysicalAddress(a3);
        *v5 = v9 - v41;
      }
    }
    else
    {
      if ( v15 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v15 + v6 )
      {
        v29 = (_DWORD)a3 - v15;
        if ( *((_BYTE *)v17 + 768) && v17[197] == 3 )
        {
          result.QuadPart = v29 + *(_QWORD *)(v14 - 1080) + 848LL;
        }
        else
        {
          result = MmGetPhysicalAddress(a3);
          v6 = v49;
        }
        v30 = v6;
        goto LABEL_37;
      }
      if ( v14 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v14 + ((v17[121] + 7) & 0xFFFFFFF8) )
      {
        v29 = (_DWORD)a3 - v14;
        if ( *((_BYTE *)v17 + 768) && v17[197] == 3 )
          result.QuadPart = v29 + *(_QWORD *)(v14 - 1080) + 1104LL;
        else
          result = MmGetPhysicalAddress(a3);
        v30 = (v17[121] + 7) & 0xFFFFFFF8;
LABEL_37:
        v31 = v30 - v29;
LABEL_38:
        *v5 = v31;
      }
    }
  }
  else if ( !*((_BYTE *)v17 + 768) || v17[197] != 3 )
  {
    result = MmGetPhysicalAddress(a3);
    v31 = (v17[121] + 7) & 0xFFFFFFF8;
    goto LABEL_38;
  }
  return result;
}
