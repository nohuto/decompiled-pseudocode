/*
 * XREFs of sub_14075CC14 @ 0x14075CC14
 * Callers:
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14075C8A4 @ 0x14075C8A4 (sub_14075C8A4.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 */

__int64 __fastcall sub_14075CC14(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v6; // rdi
  PVOID v8; // rax
  __int64 v9; // r8
  void *v10; // r12
  int v11; // ebx
  int v13; // eax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  char *v16; // rsi
  __int64 i; // rbx
  __int64 v18; // rax
  char *v19; // r15
  _QWORD *v20; // rax
  char *v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+50h]

  v24 = a3;
  v22 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v6 = a3;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v11 = -1073741275;
    goto LABEL_5;
  }
  v8 = sub_1402D84BC(0x800uLL);
  v10 = v8;
  if ( !v8 )
  {
    v11 = -1073741801;
    goto LABEL_5;
  }
  v11 = sub_14075C8A4(*(_QWORD *)(a2 + 8), (__int64)v8, v9, (__int64)&v22);
  if ( v11 >= 0 )
  {
    v13 = sub_140964E64(v10, v22, &v21, &v23);
    v14 = v23;
    v11 = v13;
    if ( v13 >= 0 )
    {
      v15 = sub_1402D84BC(80LL * v23);
      v16 = v21;
      v4 = v15;
      if ( !v15 )
      {
        v11 = -1073741801;
LABEL_20:
        if ( v16 )
        {
          if ( (_DWORD)v14 )
          {
            v19 = v16;
            do
            {
              sub_14075CDC4(v19);
              v19 += 16;
              --v14;
            }
            while ( v14 );
          }
          sub_1402D8494(v16);
        }
        v6 = v24;
        goto LABEL_4;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
      {
        if ( (int)sub_14075C924((__int64)&v4[20 * i + 4], *(_WORD **)&v16[16 * (unsigned int)i + 8]) < 0 )
          break;
        v4[20 * i + 17] = 0;
      }
      v11 = sub_1409638AC(v4, (unsigned int)v14);
      if ( v11 >= 0 )
      {
        v20 = v24;
        v11 = 0;
        *a4 = v14;
        *v20 = v4;
        goto LABEL_20;
      }
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
      dword_140C2A220[2 * v18 + 1] = v11;
      dword_140C2A220[2 * v18] = 132101;
      if ( (dword_140D04880 & 2) != 0 )
        sub_14057D738(0LL, "KSE: Cannot resolve registry shims to Sdb: 0x%x\n", v11);
      sub_140368C88(0LL, (__int64)"KSE: Cannot resolve registry shims to Sdb: 0x%x\n", v11);
      v14 = v23;
    }
    v16 = v21;
    goto LABEL_20;
  }
LABEL_4:
  sub_1402D8494(v10);
  if ( v11 < 0 )
  {
LABEL_5:
    sub_1402D8494(v4);
    *v6 = 0LL;
    *a4 = 0;
  }
  return (unsigned int)v11;
}
