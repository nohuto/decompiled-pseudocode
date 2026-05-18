/*
 * XREFs of sub_18001F31C @ 0x18001F31C
 * Callers:
 *     sub_18001E4D4 @ 0x18001E4D4 (sub_18001E4D4.c)
 *     sub_180028650 @ 0x180028650 (sub_180028650.c)
 *     sub_180029130 @ 0x180029130 (sub_180029130.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B4A0 @ 0x18002B4A0 (sub_18002B4A0.c)
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_180031A38 @ 0x180031A38 (sub_180031A38.c)
 *     sub_180031BB8 @ 0x180031BB8 (sub_180031BB8.c)
 *     sub_1800337A4 @ 0x1800337A4 (sub_1800337A4.c)
 *     sub_1800338B8 @ 0x1800338B8 (sub_1800338B8.c)
 *     sub_180033A0C @ 0x180033A0C (sub_180033A0C.c)
 *     sub_180033B58 @ 0x180033B58 (sub_180033B58.c)
 *     sub_180033C90 @ 0x180033C90 (sub_180033C90.c)
 *     sub_180033D98 @ 0x180033D98 (sub_180033D98.c)
 *     sub_180033EF0 @ 0x180033EF0 (sub_180033EF0.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_180049E98 @ 0x180049E98 (sub_180049E98.c)
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AD8 @ 0x180054AD8 (sub_180054AD8.c)
 *     sub_180055504 @ 0x180055504 (sub_180055504.c)
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 *     sub_180055760 @ 0x180055760 (sub_180055760.c)
 *     sub_180055894 @ 0x180055894 (sub_180055894.c)
 *     sub_180056E08 @ 0x180056E08 (sub_180056E08.c)
 *     sub_180059C38 @ 0x180059C38 (sub_180059C38.c)
 *     sub_18005D3E4 @ 0x18005D3E4 (sub_18005D3E4.c)
 *     sub_18005EB2C @ 0x18005EB2C (sub_18005EB2C.c)
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_180065750 @ 0x180065750 (sub_180065750.c)
 *     sub_180067260 @ 0x180067260 (sub_180067260.c)
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 *     sub_180067EB8 @ 0x180067EB8 (sub_180067EB8.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_180091DD0 @ 0x180091DD0 (sub_180091DD0.c)
 *     sub_1800924F8 @ 0x1800924F8 (sub_1800924F8.c)
 *     sub_1800B2760 @ 0x1800B2760 (sub_1800B2760.c)
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 *     sub_1800B4868 @ 0x1800B4868 (sub_1800B4868.c)
 *     sub_1800DF1C4 @ 0x1800DF1C4 (sub_1800DF1C4.c)
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     sub_1800F19C8 @ 0x1800F19C8 (sub_1800F19C8.c)
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800F8BA0 @ 0x1800F8BA0 (sub_1800F8BA0.c)
 *     sub_1800FAEA8 @ 0x1800FAEA8 (sub_1800FAEA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F31C(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *i; // rdx
  _QWORD *v8; // r11
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int64 *v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v5 = a3;
      if ( v5 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v5[2] = a3;
      if ( v5 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v6 = *(_QWORD *)(a3 + 8);
    for ( i = (_QWORD *)a3; ; v6 = i[1] )
    {
      if ( *(_BYTE *)(v6 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return a3;
      }
      v8 = i + 1;
      v9 = (_QWORD *)i[1];
      v10 = v9 + 1;
      v11 = (__int64 *)v9[1];
      v12 = (_QWORD *)*v11;
      if ( v9 == (_QWORD *)*v11 )
      {
        v12 = (_QWORD *)v11[2];
        if ( !*((_BYTE *)v12 + 24) )
          goto LABEL_30;
        v13 = (_QWORD *)v9[2];
        if ( i == v13 )
        {
          i = (_QWORD *)i[1];
          v9[2] = *v13;
          if ( !*(_BYTE *)(*v13 + 25LL) )
            *(_QWORD *)(*v13 + 8LL) = v9;
          v13[1] = *v10;
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v13;
          }
          else
          {
            v14 = (_QWORD *)*v10;
            if ( v9 == *(_QWORD **)*v10 )
              *v14 = v13;
            else
              v14[2] = v13;
          }
          *v13 = v9;
          v8 = v9 + 1;
          *v10 = v13;
        }
        else
        {
          v13 = (_QWORD *)i[1];
        }
        *((_BYTE *)v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(*v8 + 8LL);
        v16 = (_QWORD *)*v15;
        *v15 = *(_QWORD *)(*v15 + 16LL);
        v17 = v16[2];
        if ( !*(_BYTE *)(v17 + 25) )
          *(_QWORD *)(v17 + 8) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v18 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)v18[2] )
            v18[2] = v16;
          else
            *v18 = v16;
        }
        v16[2] = v15;
      }
      else
      {
        if ( !*((_BYTE *)v12 + 24) )
        {
LABEL_30:
          *((_BYTE *)v9 + 24) = 1;
          *((_BYTE *)v12 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
          i = *(_QWORD **)(*v8 + 8LL);
          continue;
        }
        v19 = (_QWORD *)*v9;
        if ( i == (_QWORD *)*v9 )
        {
          i = (_QWORD *)i[1];
          v9 = (_QWORD *)*v9;
          *i = v19[2];
          v20 = v19[2];
          if ( !*(_BYTE *)(v20 + 25) )
            *(_QWORD *)(v20 + 8) = i;
          v9[1] = *v10;
          if ( i == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v9;
          }
          else
          {
            v21 = (_QWORD *)*v10;
            if ( i == *(_QWORD **)(*v10 + 16LL) )
              v21[2] = v9;
            else
              *v21 = v9;
          }
          v9[2] = i;
          v8 = v10;
          *v10 = v9;
        }
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(*v8 + 8LL);
        v16 = (_QWORD *)v15[2];
        v15[2] = *v16;
        if ( !*(_BYTE *)(*v16 + 25LL) )
          *(_QWORD *)(*v16 + 8LL) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v22 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)*v22 )
            *v22 = v16;
          else
            v22[2] = v16;
        }
        *v16 = v15;
      }
      v15[1] = v16;
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return a3;
}
