/*
 * XREFs of RtlSplay @ 0x18006A570
 * Callers:
 *     RtlEnumerateGenericTable @ 0x18006A1B0 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x18006A330 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x18006A470 (RtlLookupElementGenericTableFull.c)
 *     RtlDelete @ 0x18006A780 (RtlDelete.c)
 *     PfxFindPrefix @ 0x1800F0E80 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800F0F80 (PfxInsertPrefix.c)
 *     RtlpTpIoLookup @ 0x180125300 (RtlpTpIoLookup.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlSplay(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // r8
  _QWORD *v14; // r8
  _QWORD *v15; // r8
  _QWORD *v16; // r8
  _QWORD *v17; // r8

  while ( 1 )
  {
    v1 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      return a1;
    v3 = (_QWORD *)v1[1];
    v4 = (_QWORD *)*v1;
    if ( v3 == a1 )
    {
      if ( v4 == v1 )
      {
        v11 = (_QWORD *)a1[2];
        v1[1] = v11;
        if ( v11 )
          *v11 = v1;
        a1[2] = v1;
LABEL_8:
        *v1 = a1;
        *a1 = a1;
      }
      else if ( (_QWORD *)v4[1] == v1 )
      {
        v6 = (_QWORD *)a1[2];
        v1[1] = v6;
        if ( v6 )
          *v6 = v1;
        v7 = (_QWORD *)v1[2];
        v4[1] = v7;
        if ( v7 )
          *v7 = v4;
        if ( (_QWORD *)*v4 == v4 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v4;
          v8 = (_QWORD *)(*v4 + 8LL);
          if ( (_QWORD *)*v8 != v4 )
            v8 = (_QWORD *)(*v4 + 16LL);
          *v8 = a1;
        }
        a1[2] = v1;
        v1[2] = v4;
LABEL_30:
        *v1 = a1;
        *v4 = v1;
      }
      else
      {
        v12 = (_QWORD *)a1[1];
        v4[2] = v12;
        if ( v12 )
          *v12 = v4;
        v13 = (_QWORD *)a1[2];
        v1[1] = v13;
        if ( v13 )
          *v13 = v1;
        if ( (_QWORD *)*v4 == v4 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v4;
          v14 = (_QWORD *)(*v4 + 8LL);
          if ( (_QWORD *)*v14 != v4 )
            v14 = (_QWORD *)(*v4 + 16LL);
          *v14 = a1;
        }
        a1[1] = v4;
        *v4 = a1;
        a1[2] = v1;
        *v1 = a1;
      }
    }
    else
    {
      if ( v4 == v1 )
      {
        v5 = (_QWORD *)a1[1];
        v1[2] = v5;
        if ( v5 )
          *v5 = v1;
        a1[1] = v1;
        goto LABEL_8;
      }
      if ( (_QWORD *)v4[2] == v1 )
      {
        v4[2] = v3;
        if ( v3 )
          *v3 = v4;
        v9 = (_QWORD *)a1[1];
        v1[2] = v9;
        if ( v9 )
          *v9 = v1;
        if ( (_QWORD *)*v4 == v4 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v4;
          v10 = (_QWORD *)(*v4 + 8LL);
          if ( (_QWORD *)*v10 != v4 )
            v10 = (_QWORD *)(*v4 + 16LL);
          *v10 = a1;
        }
        a1[1] = v1;
        v1[1] = v4;
        goto LABEL_30;
      }
      v15 = (_QWORD *)a1[1];
      v1[2] = v15;
      if ( v15 )
        *v15 = v1;
      v16 = (_QWORD *)a1[2];
      v4[1] = v16;
      if ( v16 )
        *v16 = v4;
      if ( (_QWORD *)*v4 == v4 )
      {
        *a1 = a1;
      }
      else
      {
        *a1 = *v4;
        v17 = (_QWORD *)(*v4 + 8LL);
        if ( (_QWORD *)*v17 != v4 )
          v17 = (_QWORD *)(*v4 + 16LL);
        *v17 = a1;
      }
      a1[1] = v1;
      *v1 = a1;
      a1[2] = v4;
      *v4 = a1;
    }
  }
}
