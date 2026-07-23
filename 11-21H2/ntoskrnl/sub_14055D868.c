/*
 * XREFs of sub_14055D868 @ 0x14055D868
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055D868(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 *v7; // r15
  __int64 result; // rax
  _QWORD *i; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  ULONG_PTR *v18; // r14
  unsigned int v19; // r13d
  __int64 j; // rdi
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx

  v1 = 0;
  v2 = 0LL;
  if ( (_DWORD)dword_140D06884 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)qword_140D088C0[v2];
      if ( v4 )
        break;
LABEL_35:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= (unsigned int)dword_140D06884 )
        goto LABEL_36;
    }
    v5 = v4[4373];
    if ( v5 )
      sub_140593218(a1, v5, (unsigned int)dword_140D0502C);
    v6 = 0;
    v7 = v4 + 1644;
    while ( 1 )
    {
      result = sub_140593218(a1, v7 - 4, 48LL);
      v1 = result;
      if ( (int)result < 0 )
        break;
      if ( *v7 )
      {
        if ( sub_14028FBF0(*v7) )
        {
          result = sub_140593218(a1, *v7, 64LL);
          v1 = result;
          if ( (int)result < 0 )
            break;
        }
      }
      for ( i = (_QWORD *)*(v7 - 4); i && sub_14028FBF0((__int64)i); i = (_QWORD *)*i )
      {
        result = sub_140593218(a1, i - 1, 64LL);
        v1 = result;
        if ( (int)result < 0 )
          return result;
        v10 = i[6];
        if ( v10 != 1 )
        {
          result = sub_140593218(a1, v10, 96LL);
          v1 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      ++v6;
      v7 += 6;
      if ( v6 >= 2 )
      {
        v11 = v4[1652];
        if ( !v11 || (result = sub_140593218(a1, v11 - 24576, 24576LL), v1 = result, (int)result >= 0) )
        {
          v12 = v4[4411];
          if ( !v12 || (result = sub_140593218(a1, v12 - 24576, 24576LL), v1 = result, (int)result >= 0) )
          {
            v13 = v4[4173];
            if ( !v13 || (result = sub_140593218(a1, v13 - 24576, 24576LL), v1 = result, (int)result >= 0) )
            {
              v14 = *(v4 - 47);
              if ( !v14 )
                goto LABEL_35;
              result = sub_140593218(a1, v14, 104LL);
              v1 = result;
              if ( (int)result >= 0 )
              {
                v15 = 1;
                while ( 1 )
                {
                  v16 = *(_QWORD *)(*(v4 - 47) + 8LL * v15 + 28);
                  if ( v16 )
                  {
                    if ( byte_140E01840 )
                    {
                      v17 = (_QWORD *)(v16 + 8);
                      if ( *(_QWORD *)(v16 + 8) )
                      {
                        result = sub_140593218(a1, v16, 48LL);
                        if ( (int)result < 0 )
                          return result;
                        result = sub_140593218(a1, *v17, 32LL);
                        if ( (int)result < 0 )
                          return result;
                        v16 = *v17 + 32LL;
                      }
                    }
                    result = sub_140593218(a1, v16 - 24576, 24576LL);
                    v1 = result;
                    if ( (int)result < 0 )
                      return result;
                  }
                  if ( ++v15 > 4 )
                    goto LABEL_35;
                }
              }
            }
          }
        }
        return result;
      }
    }
  }
  else
  {
LABEL_36:
    if ( !dword_140C2AD60 )
      return v1;
    v18 = (ULONG_PTR *)qword_140C2AD50;
    v19 = 0;
LABEL_61:
    if ( v18 != &qword_140C2AD50 && sub_14028FBF0((__int64)v18) && (++v19, v19 <= dword_140C2AD60) )
    {
      result = sub_140593218(a1, v18, 224LL);
      v1 = result;
      if ( (int)result >= 0 )
      {
        for ( j = v18[2]; ; j = *(_QWORD *)j )
        {
          if ( (ULONG_PTR *)j == v18 + 2 || !sub_14028FBF0(j) )
          {
            v18 = (ULONG_PTR *)*v18;
            goto LABEL_61;
          }
          if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j || **(_QWORD **)(j + 8) != j )
            return v1;
          result = sub_140593218(a1, j, 152LL);
          if ( (int)result < 0 )
            return result;
          result = sub_140593218(a1, *(_QWORD *)(j + 32), 8LL * *(unsigned int *)(j + 24));
          v1 = result;
          if ( (int)result < 0 )
            return result;
          v21 = 0LL;
          if ( *(_DWORD *)(j + 24) )
            break;
LABEL_58:
          ;
        }
        while ( 1 )
        {
          result = sub_140593218(a1, *(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21), 288LL);
          v1 = result;
          if ( (int)result < 0 )
            break;
          v22 = *(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21);
          if ( v22 && sub_14028FBF0(v22) )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 24LL);
            if ( v23 )
            {
              result = sub_140593218(a1, v23, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 32LL);
            if ( v24 )
            {
              result = sub_140593218(a1, v24, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 48LL);
            if ( v25 )
            {
              result = sub_140593218(a1, v25, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
          }
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= *(_DWORD *)(j + 24) )
            goto LABEL_58;
        }
      }
    }
    else
    {
      return v1;
    }
  }
  return result;
}
