/*
 * XREFs of sub_14080E218 @ 0x14080E218
 * Callers:
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140942730 @ 0x140942730 (sub_140942730.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14080E218(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r13
  __int64 *v4; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  __int64 *v7; // rbx
  _QWORD *v9; // r11
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  __int64 Pool2; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbp
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v24 = 0LL;
  sub_1407756F4(0);
  v3 = a1 + 160;
  v4 = sub_140775110(*(_QWORD *)(a1 + 32));
  v5 = (_QWORD *)(a1 + 192);
  v6 = *(_QWORD **)(a1 + 192);
  while ( v6 != v5 )
  {
    v9 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v9 + 48) )
    {
      v10 = (__int64 *)*v4;
      if ( (__int64 *)*v4 == v4 )
        goto LABEL_13;
      do
      {
        sub_140942730(v10, &v24, 0LL);
        if ( v24 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
          if ( v11 )
          {
            if ( v9[5] == v11 + 160 )
              break;
          }
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != v4 );
      if ( v10 == v4 )
      {
LABEL_13:
        v12 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9
          || (v13 = (_QWORD *)v9[1], (_QWORD *)*v13 != v9)
          || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = v9[3], *(_QWORD **)(v14 + 8) != v9 + 3)
          || (v15 = (_QWORD *)v9[4], (_QWORD *)*v15 != v9 + 3) )
        {
LABEL_28:
          __fastfail(3u);
        }
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
    }
  }
  v7 = (__int64 *)*v4;
  while ( v7 != v4 )
  {
    sub_140942730(v7, &v24, 0LL);
    v7 = (__int64 *)*v7;
    if ( v24 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 16) )
        {
          v17 = (_QWORD *)*v5;
          if ( (_QWORD *)*v5 == v5 )
          {
LABEL_24:
            Pool2 = ExAllocatePool2(64LL, 56LL, 1920421956LL);
            v19 = (_QWORD *)Pool2;
            if ( !Pool2 )
            {
              v2 = -1073741670;
              break;
            }
            *(_BYTE *)(Pool2 + 48) = 1;
            *(_QWORD *)(Pool2 + 16) = v3;
            *(_QWORD *)(Pool2 + 40) = v16 + 160;
            v20 = (_QWORD *)v5[1];
            if ( (_QWORD *)*v20 != v5 )
              goto LABEL_28;
            *v19 = v5;
            v21 = v16 + 176;
            v19[1] = v20;
            *v20 = v19;
            v5[1] = v19;
            v22 = v19 + 3;
            v23 = *(_QWORD **)(v21 + 8);
            if ( *v23 != v21 )
              goto LABEL_28;
            *v22 = v21;
            v22[1] = v23;
            *v23 = v22;
            *(_QWORD *)(v21 + 8) = v22;
          }
          else
          {
            while ( v17[5] != v16 + 160 )
            {
              v17 = (_QWORD *)*v17;
              if ( v17 == v5 )
                goto LABEL_24;
            }
          }
        }
      }
    }
  }
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0);
  return v2;
}
