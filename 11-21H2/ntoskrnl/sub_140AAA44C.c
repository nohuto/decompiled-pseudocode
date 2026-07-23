/*
 * XREFs of sub_140AAA44C @ 0x140AAA44C
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 * Callees:
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140AAA44C(unsigned int *a1, __int64 a2)
{
  PKSPIN_LOCK v2; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // r11
  KSPIN_LOCK v8; // rcx
  char **v9; // rdi
  char *v10; // rax
  int v11; // r9d
  int v12; // edx
  __int64 v13; // r14
  char *v14; // r13
  __int64 v15; // rbp
  char *PoolWithTag; // rax
  char *v17; // rsi
  PKSPIN_LOCK v18; // rax
  unsigned __int8 *v19; // rcx
  KSPIN_LOCK v20; // rax
  char *v21; // rcx
  char *v22; // rax
  char *v23; // rax
  PKSPIN_LOCK v24; // rcx

  v2 = qword_140D01468;
  if ( (qword_140D01468[6] & 2) != 0 )
    return 3221225473LL;
  v5 = 0;
  if ( a1 )
  {
    v6 = *a1;
    if ( (unsigned int)v6 >= 2 )
    {
      v7 = (unsigned int)v6;
      if ( v6 < a2 - 8 && !*((_BYTE *)a1 + (unsigned int)(v6 - 1) + 4) && !*((_BYTE *)a1 + a2 - 4) )
      {
        v8 = qword_140D01468[5];
        v9 = (char **)v8;
        if ( v8 )
        {
          do
          {
            v10 = *v9;
            do
            {
              v11 = (unsigned __int8)v10[(char *)(a1 + 1) - *v9];
              v12 = (unsigned __int8)*v10 - v11;
              if ( v12 )
                break;
              ++v10;
            }
            while ( v11 );
            if ( !v12 )
              break;
            v8 = (KSPIN_LOCK)v9;
            v9 = (char **)v9[2];
          }
          while ( v9 );
        }
        v13 = -1LL;
        v14 = (char *)a1 + v7;
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15 + 4] );
        if ( v9 )
        {
          if ( v15 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 1, 0x736C6448u);
            v17 = PoolWithTag;
            if ( PoolWithTag )
            {
              strcpy_s(PoolWithTag, v15 + 1, v14 + 4);
              v18 = qword_140D01468;
              v19 = (unsigned __int8 *)v9[1];
              v9[1] = v17;
              if ( (v18[6] & 2) == 0 )
                goto LABEL_40;
            }
            else
            {
              return (unsigned int)-1073741801;
            }
            return v5;
          }
          v20 = (KSPIN_LOCK)v9[2];
          *(_QWORD *)(v8 + 16) = v20;
          if ( (char **)v2[5] == v9 )
            v2[5] = v20;
          if ( (v2[6] & 2) != 0 )
            return v5;
          ExFreePoolWithTag(v9[1], 0);
          v21 = *v9;
        }
        else
        {
          if ( !v15 )
            return (unsigned int)-1073741811;
          v9 = (char **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x736C6448u);
          if ( !v9 )
            return v5;
          v22 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 1, 0x736C6448u);
          v9[1] = v22;
          if ( !v22 )
          {
            v5 = -1073741801;
            goto LABEL_39;
          }
          strcpy_s(v22, v15 + 1, v14 + 4);
          do
            ++v13;
          while ( *((_BYTE *)a1 + v13 + 4) );
          if ( v13 )
          {
            v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x736C6448u);
            *v9 = v23;
            if ( v23 )
            {
              strcpy_s(v23, v13 + 1, (const char *)a1 + 4);
              v24 = qword_140D01468;
              v9[2] = (char *)qword_140D01468[5];
              v24[5] = (KSPIN_LOCK)v9;
              return v5;
            }
            v5 = -1073741801;
          }
          else
          {
            v5 = -1073741811;
          }
          v21 = v9[1];
        }
        ExFreePoolWithTag(v21, 0);
LABEL_39:
        v19 = (unsigned __int8 *)v9;
LABEL_40:
        ExFreePoolWithTag(v19, 0);
        return v5;
      }
    }
  }
  return 3221225485LL;
}
