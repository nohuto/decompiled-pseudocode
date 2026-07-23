/*
 * XREFs of sub_1405611AC @ 0x1405611AC
 * Callers:
 *     sub_140831280 @ 0x140831280 (sub_140831280.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082045C @ 0x14082045C (sub_14082045C.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_140821830 @ 0x140821830 (sub_140821830.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405611AC(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  void *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD v25[12]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v26[8]; // [rsp+98h] [rbp+7h] BYREF

  memset(v25, 0, sizeof(v25));
  v2 = 0LL;
  memset(v26, 0, sizeof(v26));
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( !v6 || (v10 = sub_140821D18(v3, v6, 1LL), (v2 = (void *)v10) == 0LL) )
  {
    v7 = -1073741823;
LABEL_6:
    v8 = (void *)v26[4];
    goto LABEL_7;
  }
  HIDWORD(v26[1]) = 4;
  v26[3] = v10;
  v26[0] = v4;
  v7 = sub_140820DCC(v26, &v26[4]);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = (void *)v26[4];
  if ( !v26[4] )
  {
LABEL_10:
    ExFreePoolWithTag(v2, 0);
    return (unsigned int)v7;
  }
  v11 = *(_QWORD *)(v26[4] + 40LL);
  v7 = 0;
  v12 = a1[4];
  v13 = 0LL;
  v14 = *(__int64 **)(v12 + 16);
  v15 = *(_QWORD *)(v5 + 32);
  v16 = *v14;
  v25[6] = 0LL;
  v25[9] = 0LL;
  v25[4] = v15;
  v25[5] = 4LL;
  if ( *(_DWORD *)(v11 + 20) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v13 + 24) + 288LL);
      if ( v17 )
      {
        v18 = *(_DWORD *)(v16 + 20);
        v19 = 0LL;
        if ( v18 )
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * v19 + 24) + 288LL);
            if ( v20 )
            {
              if ( *(_BYTE *)(v17 + 16) == *(_BYTE *)(v20 + 16) )
                break;
            }
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 >= v18 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          if ( (_DWORD)v19 == v18 )
          {
            v25[1] = v25;
            v25[0] = v25;
            v21 = *(_QWORD **)(v17 + 48);
            if ( *v21 != v17 + 40 )
              goto LABEL_29;
            v25[1] = *(_QWORD *)(v17 + 48);
            v25[0] = v17 + 40;
            *v21 = v25;
            *(_QWORD *)(v17 + 48) = v25;
            v22 = sub_140821830(v17, 0LL);
            v23 = v25[0];
            v7 = v22;
            v24 = v25[1];
            if ( *(_QWORD **)(v25[0] + 8LL) != v25 || *(_QWORD **)v25[1] != v25 )
LABEL_29:
              __fastfail(3u);
            *(_QWORD *)v25[1] = v25[0];
            *(_QWORD *)(v23 + 8) = v24;
            if ( v7 < 0 )
              goto LABEL_6;
            v7 = sub_140821830(v17, 2LL);
            if ( v7 < 0 )
              goto LABEL_6;
          }
        }
      }
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(v11 + 20) )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( v8 )
    sub_14082045C(v8);
  if ( v2 )
    goto LABEL_10;
  return (unsigned int)v7;
}
