/*
 * XREFs of sub_1409147B4 @ 0x1409147B4
 * Callers:
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14071A464 @ 0x14071A464 (sub_14071A464.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_140914CA4 @ 0x140914CA4 (sub_140914CA4.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

bool __fastcall sub_1409147B4(__int64 a1, __int64 a2, char a3, __int64 **a4, _QWORD *a5)
{
  char v5; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !(unsigned __int8)sub_140AB45A0(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 32);
        LODWORD(v9) = *(_DWORD *)(v9 + 184);
        *a4 = (__int64 *)v10;
        if ( (v9 & 0x40000) != 0 && sub_14071A464(a2, *(void **)(v10 + 1544)) )
        {
          v11 = *a4;
          if ( ((*a4)[514] & 0x40) == 0 && !_bittest((const signed __int32 *)(*(_QWORD *)(a1 + 8) + 8LL), 0x12u) )
          {
            v5 = 1;
            if ( *((_BYTE *)v11 + 2944) == 1 )
            {
              sub_140914CA4(v11);
              *((_BYTE *)*a4 + 2944) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v15 )
      {
        v14 = sub_14071B350(i);
        v15 = v14;
        if ( !v14 )
          break;
        if ( (v14[514] & 0x20) != 0 && sub_14071A464(a2, (void *)v14[193]) && (v15[514] & 0x40) == 0 )
        {
          v19[0] = 0LL;
          v16 = v15[367];
          *a4 = v15;
          sub_1407C0690(v16, v19, v13);
          v17 = v19[0];
          *a5 = v19[0];
          sub_1402AD030((struct _EX_RUNDOWN_REF *)v15 + 205);
          return v17 != 0;
        }
      }
    }
  }
  return v5;
}
