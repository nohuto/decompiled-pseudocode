/*
 * XREFs of sub_1406FF49C @ 0x1406FF49C
 * Callers:
 *     sub_1406FF0A4 @ 0x1406FF0A4 (sub_1406FF0A4.c)
 * Callees:
 *     sub_140242580 @ 0x140242580 (sub_140242580.c)
 *     sub_140281A3C @ 0x140281A3C (sub_140281A3C.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028DA5C @ 0x14028DA5C (sub_14028DA5C.c)
 *     sub_14028DC08 @ 0x14028DC08 (sub_14028DC08.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406CAF3C @ 0x1406CAF3C (sub_1406CAF3C.c)
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 *     sub_1407091D8 @ 0x1407091D8 (sub_1407091D8.c)
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 */

__int64 __fastcall sub_1406FF49C(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  int v8; // edi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 96);
  v17 = 0LL;
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
    return 0LL;
  v15 = -1LL;
  v6 = *(_QWORD *)a1;
  v16 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  sub_14028DC08((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v10 = *(_QWORD *)(v6 + 32);
    v7 = (_QWORD *)sub_1403095B0((__int64)&qword_140C534C0, 1u);
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_3;
    }
    v8 = sub_1407092C0(v6, v5, a2, 0, (__int64)&v17);
    if ( v8 >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      v11 = sub_140281A3C(a1);
      v12 = v17;
      v8 = sub_1407091D8(v13, v17, v11);
      if ( v8 >= 0 )
      {
        if ( v12 == v10 )
        {
LABEL_10:
          v8 = 0;
          goto LABEL_3;
        }
        if ( (dword_140D06880 & 0x2000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 )
        {
LABEL_12:
          if ( a2 )
          {
            v14 = -1;
          }
          else
          {
            v14 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
            v12 = v17;
          }
          sub_1406CAF3C((_QWORD *)a1, v12, (unsigned __int64)v7, v14);
          goto LABEL_10;
        }
        if ( qword_140C1B920 )
        {
          v8 = sub_14042A5E0(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v12);
          if ( v8 >= 0 )
            goto LABEL_12;
        }
        else
        {
          v8 = -1073741637;
        }
      }
      sub_140242580(a1, 0, (__int64)&v15);
    }
  }
LABEL_3:
  sub_14028DA5C((__int64)CurrentThread, v5);
  if ( v7 )
    sub_1402BB6D0((__int64)&qword_140C534C0, v7, 1u);
  sub_1406FC148((__int64)&v15);
  return (unsigned int)v8;
}
