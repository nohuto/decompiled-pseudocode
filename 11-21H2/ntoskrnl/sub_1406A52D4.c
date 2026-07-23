/*
 * XREFs of sub_1406A52D4 @ 0x1406A52D4
 * Callers:
 *     sub_1406A4E90 @ 0x1406A4E90 (sub_1406A4E90.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_1406A52D4(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v7; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdi
  ULONG_PTR v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // [rsp+48h] [rbp+10h] BYREF
  int v21; // [rsp+4Ch] [rbp+14h]
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v20 = -1;
  v22 = 0LL;
  v7 = a5;
  *a4 = 0;
  v21 = 0;
  if ( v7 )
    *v7 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v7 )
      *v7 = *(_DWORD *)(a2 + 56);
  }
  if ( a1 )
  {
    *a4 = *(unsigned __int16 *)(a1 + 176);
    if ( a3 )
    {
      v9 = a1 + 208;
      while ( 1 )
      {
        v10 = sub_140AB4218(v9, &v22, 32LL);
        v12 = v10;
        if ( !v10 )
          break;
        if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(v10 + 56), a3, v11) )
        {
          if ( *(_DWORD *)(v12 + 68) == 1 )
          {
            v13 = *(_QWORD *)(v12 + 88);
            if ( !(unsigned __int8)sub_14071A6D4(v13, 0LL) )
            {
              v14 = *(_QWORD *)(v13 + 32);
              if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                v15 = sub_1406BF400(v14, *(unsigned int *)(v13 + 40));
              else
                v15 = sub_1407C9820(v14);
              v16 = v15;
              if ( !v15 )
                return 3221225626LL;
              v17 = (unsigned __int16)*(_DWORD *)(v15 + 52);
              if ( *a4 < v17 )
                *a4 = v17;
              if ( v7 )
              {
                v18 = *(_DWORD *)(v16 + 56);
                if ( *v7 < v18 )
                  *v7 = v18;
              }
              v19 = *(_QWORD *)(v13 + 32);
              if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                sub_1406BF450(v19, &v20);
              else
                sub_1407C97C0(v19, &v20);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
