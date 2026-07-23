/*
 * XREFs of sub_1405294E0 @ 0x1405294E0
 * Callers:
 *     sub_140529724 @ 0x140529724 (sub_140529724.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1405294E0(__int64 a1)
{
  char *v1; // rdi
  int v3; // ebp
  size_t v4; // r8
  _QWORD *v5; // r14
  _DWORD *v6; // rsi
  _DWORD *v7; // r12
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // r13
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  char *v17; // [rsp+20h] [rbp-88h]
  _OWORD v18[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-50h] BYREF

  v1 = *(char **)(a1 + 16);
  memset(v18, 0, sizeof(v18));
  if ( v1 )
  {
    v3 = 0;
    v4 = 4LL * *(unsigned int *)(a1 + 24);
    *(_QWORD *)&v18[0] = v1;
    memset(v19, 0, v4);
    v5 = v18;
    v6 = v19;
    v7 = (_DWORD *)(a1 + 36);
    do
    {
      v8 = *(_DWORD *)(a1 + 28);
      v9 = 1 << *v7;
      v10 = *(_DWORD *)(a1 + 24) - 1;
      v17 = &v1[v9 << v8];
      if ( v3 == v10 )
      {
        memset(v1, 0, (unsigned __int64)v9 << v8);
        sub_1403B1B5C(v11, (__int64)v1);
      }
      else
      {
        v12 = (unsigned int)*v6;
        v13 = 0LL;
        do
        {
          v14 = v12;
          if ( (unsigned int)v12 >= v9 )
            break;
          v15 = (unsigned int)v12;
          v12 = (unsigned int)(v12 + 1);
          *v6 = v12;
          v14 = v12;
          v13 = *(char **)&v1[8 * v15 + (int)(v9 << v8)];
        }
        while ( !v13 );
        if ( v13 )
        {
          v16 = (unsigned int)(v14 - 1);
          memset(&v1[(_DWORD)v16 << v8], 0, 1LL << v8);
          ++v3;
          ++v7;
          ++v6;
          v1 = v13;
          *(_QWORD *)&v17[8 * v16] = 0LL;
          *++v5 = v13;
          continue;
        }
        sub_1403B1B5C(v12, (__int64)v1);
        *v6 = 0;
      }
      --v3;
      --v7;
      --v6;
      v1 = (char *)*--v5;
    }
    while ( v3 >= 0 );
  }
}
