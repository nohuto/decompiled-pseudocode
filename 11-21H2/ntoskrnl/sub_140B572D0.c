/*
 * XREFs of sub_140B572D0 @ 0x140B572D0
 * Callers:
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140AABC94 @ 0x140AABC94 (sub_140AABC94.c)
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 */

__int64 __fastcall sub_140B572D0(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 (__fastcall **v6)(); // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int i; // ecx
  unsigned __int8 v16; // al
  __int64 v17; // r8
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rdx
  int v24; // r8d
  unsigned __int8 v25; // al
  __int64 v26; // r9
  __int16 v27; // cx
  __int64 v28; // rdx

  v6 = sub_140AABC94();
  if ( v6 )
  {
    if ( (int)sub_14042A5E0(2LL, 0xFFFFFFFFLL) >= 0 )
    {
      sub_14042A5E0(v8, v7);
      sub_14042A5E0(L"Your device needs to restart.\r\n", v9);
      sub_14042A5E0(L"Please hold down the power button.\r\n", v10);
      sub_14042A5E0(L"Error Code:", v11);
      sub_14042A5E0(L" ", v12);
      if ( *(_WORD *)(a3 + 18) >= 0x16u )
      {
        LODWORD(v14) = 2;
        **(_WORD **)(a3 + 24) = 48;
        *(_WORD *)(*(_QWORD *)(a3 + 24) + 2LL) = 120;
        for ( i = 28; i >= 0; i -= 4 )
        {
          v16 = (a1 >> i) & 0xF;
          v17 = (unsigned int)v14;
          if ( v16 >= 0xAu )
            v18 = (unsigned __int8)(v16 - 10) + 65;
          else
            v18 = v16 + 48;
          v14 = (unsigned int)(v14 + 1);
          *(_WORD *)(*(_QWORD *)(a3 + 24) + 2 * v17) = v18;
        }
        *(_WORD *)(*(_QWORD *)(a3 + 24) + 2 * v14) = 0;
        sub_14042A5E0(*(_QWORD *)(a3 + 24), v14);
        sub_14042A5E0(L"\r\n", v19);
      }
      sub_14042A5E0(L"Parameters:", v13);
      sub_14042A5E0(L"\r\n", v20);
      v21 = (_QWORD *)(a3 + 40);
      v22 = 4LL;
      do
      {
        if ( *((_WORD *)v21 - 3) >= 0x26u )
        {
          *(_WORD *)*v21 = 48;
          LODWORD(v23) = 2;
          v24 = 60;
          *(_WORD *)(*v21 + 2LL) = 120;
          do
          {
            v25 = (*a2 >> v24) & 0xF;
            v26 = (unsigned int)v23;
            if ( v25 >= 0xAu )
              v27 = (unsigned __int8)(v25 - 10) + 65;
            else
              v27 = v25 + 48;
            v23 = (unsigned int)(v23 + 1);
            *(_WORD *)(*v21 + 2 * v26) = v27;
            v24 -= 4;
          }
          while ( v24 >= 0 );
          *(_WORD *)(*v21 + 2 * v23) = 0;
          sub_14042A5E0(*v21, v23);
          sub_14042A5E0(L"\r\n", v28);
        }
        ++a2;
        v21 += 2;
        --v22;
      }
      while ( v22 );
    }
    sub_140AAE968(v6);
  }
  return 0LL;
}
