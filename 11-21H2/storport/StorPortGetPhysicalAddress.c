/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C0013E60
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C00952B0 (StorPortGetPhysicalAddressVrfy.c)
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
  unsigned __int64 v10; // r13
  __int64 *v11; // rdi
  unsigned int v12; // r12d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // r12
  int v18; // ebp
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rbx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  int v27; // edx
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // edx
  unsigned int v32; // r13d
  unsigned int v33; // ebx
  __int64 v34; // rdx
  unsigned __int64 v35; // r14
  __int64 v36; // r9
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned int v40; // r8d
  __int64 v41; // r9
  unsigned int *v42; // rdx
  unsigned int v43; // ebx
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  unsigned int *v46; // r9
  __int64 v47; // rcx
  unsigned int v48; // [rsp+20h] [rbp-48h]
  unsigned int v49; // [rsp+24h] [rbp-44h]
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]
  unsigned __int8 v51; // [rsp+70h] [rbp+8h]

  result.QuadPart = 0LL;
  v5 = a4;
  v6 = 0;
  v49 = 0;
  v51 = 0;
  v8 = 0;
  v9 = 0;
  *v5 = 0;
  v10 = 0LL;
  v11 = *(__int64 **)(a1 - 16);
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !v11 )
    return result;
  v16 = *v11;
  if ( !v16 || *(_DWORD *)v16 )
    return result;
  if ( a2 )
  {
    v17 = *(_BYTE *)(a2 + 2);
    if ( v17 != 40 )
    {
      v25 = *(_DWORD *)(a2 + 16);
      v8 = v25;
      v10 = *(_QWORD *)(a2 + 24);
      v18 = *(unsigned __int8 *)(a2 + 2);
      v14 = *(_QWORD *)(a2 + 56);
      v48 = v25;
      if ( !v17 )
      {
        v6 = *(_BYTE *)(a2 + 11);
        v9 = *(_DWORD *)(a2 + 16);
        v15 = *(_QWORD *)(a2 + 32);
        v12 = 0;
        v51 = v6;
        goto LABEL_21;
      }
      goto LABEL_18;
    }
    v18 = *(_DWORD *)(a2 + 20);
    v10 = *(_QWORD *)(a2 + 64);
    v14 = *(_QWORD *)(a2 + 104);
    v50 = v10;
    v48 = *(_DWORD *)(a2 + 60);
    if ( v18 )
    {
LABEL_13:
      v51 = v6;
    }
    else
    {
      v19 = *(_DWORD *)(a2 + 56);
      v20 = 0;
      if ( v19 )
      {
        do
        {
          v21 = *(unsigned int *)(a2 + 4LL * v20 + 120);
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
                v31 = v24 - 65;
                if ( v31 )
                {
                  if ( v31 == 1 && v23 + 40 <= v22 )
                  {
                    v6 = *(_BYTE *)(v23 + a2 + 9);
                    v15 = *(_QWORD *)(v23 + a2 + 24);
                    v51 = v6;
                    goto LABEL_14;
                  }
                }
                else if ( v23 + 56 <= v22 )
                {
LABEL_12:
                  v15 = *(_QWORD *)(v23 + a2 + 16);
                  v6 = *(_BYTE *)(v23 + a2 + 9);
                  goto LABEL_13;
                }
              }
            }
          }
          ++v20;
        }
        while ( v20 < v19 );
        v6 = 0;
      }
    }
LABEL_14:
    if ( (*(_BYTE *)(a2 + 24) & 0xC0) == 0xC0 )
    {
      v32 = *(_DWORD *)(a2 + 56);
      v33 = 0;
      if ( v32 )
      {
        while ( 1 )
        {
          v34 = *(unsigned int *)(a2 + 4LL * v33 + 120);
          if ( (unsigned int)v34 >= 0x80 )
          {
            v35 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v34 <= (unsigned int)v35 )
            {
              v36 = v34 + a2;
              if ( *(_DWORD *)(v34 + a2) == 1 && v34 + 24 <= v35 )
                break;
            }
          }
          if ( ++v33 >= v32 )
          {
            v10 = v50;
            v6 = v51;
            goto LABEL_15;
          }
        }
        v10 = v50;
        v5 = a4;
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 8);
          v13 = *(_QWORD *)(v36 + 16);
          v6 = v51;
          v49 = v37;
          goto LABEL_17;
        }
        v6 = v51;
        goto LABEL_16;
      }
      v10 = v50;
    }
LABEL_15:
    v5 = a4;
LABEL_16:
    v13 = 0LL;
LABEL_17:
    v25 = v48;
LABEL_18:
    v8 = v25;
    if ( v18 == 23 )
    {
      if ( v17 == 40 )
        v38 = *(_QWORD *)(a2 + 96);
      else
        v38 = *(_QWORD *)(a2 + 48);
      v9 = v48;
      if ( *(_DWORD *)(*(_QWORD *)(v38 + 104) + 40LL) > v48 )
        v8 = *(_DWORD *)(*(_QWORD *)(v38 + 104) + 40LL);
    }
    else
    {
      v9 = v48;
    }
    v12 = v49;
  }
LABEL_21:
  v26 = *(_QWORD *)(v16 + 784);
  if ( v26 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v26 + *(unsigned int *)(v16 + 800) )
  {
    v39 = *(unsigned int *)(v16 + 800);
    if ( (unsigned __int64)a3 < v26 + v39 )
    {
      v40 = (_DWORD)a3 - v26;
      result.QuadPart = *(_QWORD *)(v16 + 792) + v40;
      *v5 = v39 - v40;
    }
  }
  else if ( a2 )
  {
    if ( v10 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + v10
      || v13 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v13 + v12 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v41 = *(_QWORD *)(a2 + 96);
      else
        v41 = *(_QWORD *)(a2 + 48);
      if ( v10 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v8 + v10 )
      {
        v42 = *(unsigned int **)(v41 + 152);
        v43 = (_DWORD)a3 - v13;
        v9 = v12;
      }
      else
      {
        v42 = *(unsigned int **)(v41 + 112);
        v43 = (_DWORD)a3 - v10;
      }
      if ( v42 )
      {
        v44 = *v42;
        v45 = 0;
        if ( *v42 )
        {
          v46 = v42 + 6;
          while ( v43 >= *v46 )
          {
            v43 -= *v46;
            ++v45;
            v46 += 6;
            if ( v45 >= v44 )
              goto LABEL_81;
          }
        }
        else
        {
LABEL_81:
          if ( v45 >= v44 )
            return result;
        }
        v47 = 3LL * v45;
        *v5 = v42[2 * v47 + 6] - v43;
        return (PHYSICAL_ADDRESS)(*(_QWORD *)&v42[2 * v47 + 4] + v43);
      }
      if ( (*(_BYTE *)(v16 + 4243) & 4) != 0 && (!*(_BYTE *)(v16 + 760) || *(_DWORD *)(v16 + 780) != 3) )
      {
        result = MmGetPhysicalAddress(a3);
        *v5 = v9 - v43;
      }
    }
    else
    {
      if ( v15 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v15 + v6 )
      {
        v28 = (_DWORD)a3 - v15;
        if ( *(_BYTE *)(v16 + 760) && *(_DWORD *)(v16 + 780) == 3 )
        {
          result.QuadPart = v28 + *(_QWORD *)(v14 - 1080) + 848LL;
        }
        else
        {
          result = MmGetPhysicalAddress(a3);
          v6 = v51;
        }
        v29 = v6;
        goto LABEL_35;
      }
      if ( v14 <= (unsigned __int64)a3 )
      {
        v27 = *(_DWORD *)(v16 + 484);
        if ( (unsigned __int64)a3 < v14 + ((v27 + 7) & 0xFFFFFFF8) )
        {
          v28 = (_DWORD)a3 - v14;
          if ( *(_BYTE *)(v16 + 760) && *(_DWORD *)(v16 + 780) == 3 )
          {
            result.QuadPart = v28 + *(_QWORD *)(v14 - 1080) + 1104LL;
          }
          else
          {
            result = MmGetPhysicalAddress(a3);
            v27 = *(_DWORD *)(v16 + 484);
          }
          v29 = (v27 + 7) & 0xFFFFFFF8;
LABEL_35:
          v30 = v29 - v28;
LABEL_36:
          *v5 = v30;
        }
      }
    }
  }
  else if ( !*(_BYTE *)(v16 + 760) || *(_DWORD *)(v16 + 780) != 3 )
  {
    result = MmGetPhysicalAddress(a3);
    v30 = (*(_DWORD *)(v16 + 484) + 7) & 0xFFFFFFF8;
    goto LABEL_36;
  }
  return result;
}
