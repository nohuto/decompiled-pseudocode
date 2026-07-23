/*
 * XREFs of sub_1406E397C @ 0x1406E397C
 * Callers:
 *     sub_1406E3860 @ 0x1406E3860 (sub_1406E3860.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14074C534 @ 0x14074C534 (sub_14074C534.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E397C(__int64 a1, int a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  unsigned int v8; // esi
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rax
  void *v14; // r15
  __int64 v16; // r14
  _QWORD *v17; // rax
  unsigned int v18; // edi
  _DWORD *Pool2; // rax
  _DWORD *v20; // r8
  unsigned int v21; // ebp
  __int64 **i; // r14
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rbp
  unsigned __int16 *v27; // r14
  int v28; // edx
  unsigned __int16 v29; // r9
  _WORD *v30; // r12
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  void *v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+78h] [rbp+10h]

  P = 0LL;
  v5 = 0;
  v33 = 0;
  v6 = a3;
  v8 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225485LL;
          v12 = 6;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  sub_14077572C(0LL);
  v13 = sub_140779C10(a1, 1131441744LL);
  v32 = (void *)v13;
  v14 = (void *)v13;
  if ( v13 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
    if ( (unsigned int)(*(_DWORD *)(v16 + 300) - 789) <= 1 )
    {
      v5 = -1073741810;
    }
    else
    {
      if ( v12 )
      {
        v24 = sub_14074C534(v13, v12, 0LL, &P);
        v20 = P;
        v5 = v24;
        v33 = v24;
        if ( v24 < 0 )
          v20 = 0LL;
        P = v20;
      }
      else
      {
        v17 = *(_QWORD **)(v16 + 8);
        v18 = 0;
        while ( v17 )
        {
          v17 = (_QWORD *)*v17;
          ++v18;
        }
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 8LL * v18 + 16, 538996816LL);
        P = Pool2;
        v20 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v18;
          v21 = 0;
          for ( i = *(__int64 ***)(v16 + 8); i && v21 < v18; i = (__int64 **)*i )
          {
            ObfReferenceObjectWithTag(i[4], 0x43706E50u);
            v23 = v21++;
            *((_QWORD *)P + v23 + 1) = i[4];
          }
          v20 = P;
        }
        else
        {
          v5 = -1073741670;
          v33 = -1073741670;
        }
      }
      if ( v20 && *v20 )
      {
        v8 = 2;
        v25 = 0;
        do
        {
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v20[2 * v25 + 2] + 312LL) + 40LL);
          if ( v26 )
          {
            v27 = (unsigned __int16 *)(v26 + 40);
            if ( v26 != -40 )
            {
              v28 = *v27;
              if ( (unsigned __int16)v28 >= 2u )
              {
                v29 = *v27;
                if ( a4 && *a3 >= (unsigned __int64)(v8 + v28) + 2 )
                {
                  memmove(a4, *(const void **)(v26 + 48), *v27);
                  v30 = &a4[(unsigned __int64)*v27 >> 1];
                  *v30 = 0;
                  a4 = v30 + 1;
                  v29 = *(_WORD *)(v26 + 40);
                  v20 = P;
                }
                v8 += v29 + 2;
              }
            }
          }
          ObfDereferenceObjectWithTag(*(PVOID *)&v20[2 * v25 + 2], 0x43706E50u);
          v20 = P;
          ++v25;
        }
        while ( v25 < *(_DWORD *)P );
        v5 = v33;
        v14 = v32;
        v6 = a3;
        if ( a4 && *a3 >= 2 )
          *a4 = 0;
        if ( *a3 < v8 )
          v5 = -1073741789;
        goto LABEL_9;
      }
    }
    v6 = a3;
  }
  else
  {
    v5 = -1073741810;
  }
LABEL_9:
  sub_140775698(0LL);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741789 )
    v8 = 0;
  *v6 = v8;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x43706E50u);
  return v5;
}
