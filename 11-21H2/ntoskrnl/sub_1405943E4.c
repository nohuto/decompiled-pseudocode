/*
 * XREFs of sub_1405943E4 @ 0x1405943E4
 * Callers:
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140594ABC @ 0x140594ABC (sub_140594ABC.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 */

__int64 __fastcall sub_1405943E4(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  char v7; // al
  __int64 v8; // rbp
  KIRQL v9; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  _QWORD **v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  _QWORD *v19; // rax
  unsigned __int64 v20; // r9

  v2 = a2;
  v4 = 1;
  if ( a2 )
    goto LABEL_27;
  v5 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v5 <= 0x7FFFFFFEFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = *((_BYTE *)CurrentThread + 1384);
    if ( v7 >= 0 && ((unsigned __int8)~(*((_BYTE *)CurrentThread + 1385) >> 6) & ((v7 & 3) == 0)) != 0 )
    {
      v8 = *((_QWORD *)CurrentThread + 23);
      v9 = sub_1402ED128(0);
      if ( (*(_DWORD *)(v8 + 1124) & 0x20) == 0 )
      {
        i = *(_QWORD *)(v8 + 2008);
        if ( i )
        {
          v11 = v5 >> 12;
          while ( 1 )
          {
            v12 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
            if ( v11 < v12 )
            {
              v13 = *(_QWORD *)i;
            }
            else
            {
              if ( v11 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
                goto LABEL_31;
              v13 = *(_QWORD *)(i + 8);
            }
            if ( !v13 )
              break;
            i = v13;
          }
          if ( v12 < v11 )
          {
            v14 = *(_QWORD ***)(i + 8);
            v15 = i;
            if ( v14 )
            {
              v16 = *v14;
              for ( i = *(_QWORD *)(i + 8); v16; v16 = (_QWORD *)*v16 )
                i = (unsigned __int64)v16;
            }
            else
            {
              while ( 1 )
              {
                i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !i || *(_QWORD *)i == v15 )
                  break;
                v15 = i;
              }
            }
            if ( !i )
            {
              sub_1402806E0(0, v9);
              v17 = a1[3];
LABEL_24:
              a1[4] = 0LL;
              a1[3] = v17 + 1;
              return v4;
            }
          }
          v2 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
          sub_1402806E0(0, v9);
LABEL_27:
          v17 = a1[3];
          v19 = (_QWORD *)(a1[1] + 16 * v17);
          v20 = *v19 & 0xFFFFFFFFFFFFF000uLL;
          if ( v2 >= v20 && v2 < v20 + (((*(_DWORD *)v19 & 0xFFF) + v19[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
          {
            a1[4] = (v2 - v20) >> 12;
            return v4;
          }
          goto LABEL_24;
        }
      }
      v4 = 0;
LABEL_31:
      sub_1402806E0(0, v9);
    }
  }
  return v4;
}
