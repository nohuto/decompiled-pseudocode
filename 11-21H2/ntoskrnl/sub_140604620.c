/*
 * XREFs of sub_140604620 @ 0x140604620
 * Callers:
 *     sub_1406045C8 @ 0x1406045C8 (sub_1406045C8.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FEEA4 @ 0x1405FEEA4 (sub_1405FEEA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140604620(_DWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  int v3; // eax
  __int64 *v4; // rdi
  __int64 *v5; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 **v15; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rbx

  v1 = (unsigned int)a1;
  if ( (unsigned int)a1 < 0x40 )
  {
    v2 = (unsigned __int8)a1 & 0x1F;
    v3 = *((_DWORD *)&qword_140D01450 + ((unsigned __int64)(unsigned int)a1 >> 5));
    if ( _bittest(&v3, v2) )
    {
      v4 = (__int64 *)qword_140C1A8B0;
      while ( v4 != &qword_140C1A8B0 )
      {
        v5 = v4 - 2;
        v6 = v4 + 2;
        v7 = (_QWORD *)*v6;
        while ( v7 != v6 )
        {
          a1 = v7 - 2;
          v8 = v7;
          v7 = (_QWORD *)*v7;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v7[1] != v8 )
              goto LABEL_34;
            v9 = (_QWORD *)v8[1];
            if ( (_QWORD *)*v9 != v8 )
              goto LABEL_34;
            *v9 = v7;
            v7[1] = v9;
            *v8 = 0LL;
            v8[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v10 = v5 + 6;
        v11 = (_QWORD *)v5[6];
        while ( v11 != v10 )
        {
          a1 = v11 - 2;
          v12 = v11;
          v11 = (_QWORD *)*v11;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v11[1] != v12 )
              goto LABEL_34;
            v13 = (_QWORD *)v12[1];
            if ( (_QWORD *)*v13 != v12 )
              goto LABEL_34;
            *v13 = v11;
            v11[1] = v13;
            *v12 = 0LL;
            v12[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v14 = v4;
        v4 = (__int64 *)*v4;
        if ( (_QWORD *)*v6 == v6 && (_QWORD *)*v10 == v10 )
        {
          if ( (__int64 *)v4[1] != v14 || (v15 = (__int64 **)v14[1], *v15 != v14) )
LABEL_34:
            __fastfail(3u);
          *v15 = v4;
          v4[1] = (__int64)v15;
          *v14 = 0LL;
          v14[1] = 0LL;
          if ( !sub_1405FEEA4((__int64)&off_140D50040, *((_DWORD *)v5 + 2))
            && !sub_1405FEEA4((__int64)&off_140D4E690, v16)
            && !sub_1405FEEA4((__int64)&off_140D4E190, v17) )
          {
            sub_1405FEEA4((__int64)&off_140D4F470, v18);
          }
          if ( *v5 )
          {
            ExFreePoolWithTag((PVOID)*v5, 0x4E666944u);
            *v5 = 0LL;
          }
          ExFreePoolWithTag(v5, 0x4E666944u);
        }
      }
      v19 = (_QWORD *)qword_140D049C0[v1];
      if ( v19 )
      {
        if ( v19[1] )
          sub_14042A5E0(a1, v2);
        ExFreePoolWithTag(v19, 0x4E666944u);
        qword_140D049C0[v1] = 0LL;
      }
      byte_140D04BC0[v1] = 0;
    }
  }
  return 0LL;
}
