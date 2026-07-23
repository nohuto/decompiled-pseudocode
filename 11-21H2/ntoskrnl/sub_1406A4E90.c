/*
 * XREFs of sub_1406A4E90 @ 0x1406A4E90
 * Callers:
 *     sub_1406A4D98 @ 0x1406A4D98 (sub_1406A4D98.c)
 * Callees:
 *     sub_14067E8E0 @ 0x14067E8E0 (sub_14067E8E0.c)
 *     sub_1406A5080 @ 0x1406A5080 (sub_1406A5080.c)
 *     sub_1406A50C8 @ 0x1406A50C8 (sub_1406A50C8.c)
 *     sub_1406A5158 @ 0x1406A5158 (sub_1406A5158.c)
 *     sub_1406A52D4 @ 0x1406A52D4 (sub_1406A52D4.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406A4E90(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rcx
  unsigned __int16 v10; // r14
  __int64 v11; // r15
  int v12; // edi
  int v13; // ecx
  ULONG_PTR v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+34h] [rbp-44h] BYREF
  int v20; // [rsp+38h] [rbp-40h]
  _DWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF

  v21[0] = -1;
  v21[1] = 0;
  v22 = 0;
  v18 = 0;
  v19 = 0;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    v11 = a6;
    v12 = sub_1406A52D4(a1, 0, a6, (unsigned int)&v22, 0LL);
    if ( v12 >= 0 )
    {
      v12 = sub_1406A5158(a1, 0, v11, (unsigned int)&v18, (__int64)&v19);
      if ( v12 >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          v12 = -1073741789;
          v20 = -1073741789;
        }
        else
        {
          *(_QWORD *)a3 = sub_1406A50C8(a1, 0LL, v11);
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          *(_DWORD *)(a3 + 20) = sub_1406A5080(a1, 0LL, v11);
          *(_DWORD *)(a3 + 16) = v22;
          *(_DWORD *)(a3 + 24) = v18;
          *(_DWORD *)(a3 + 28) = v19;
          v13 = *(_DWORD *)(a1 + 8);
          if ( (v13 & 0x40) != 0 || *(_QWORD *)(a1 + 208) != a1 + 208 )
          {
            v14 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
              v15 = sub_1406BF400(v14, *(unsigned int *)(a1 + 40));
            else
              v15 = sub_1407C9820(v14);
            if ( v15 )
            {
              *(_DWORD *)(a3 + 12) = sub_14067E8E0(a1, v15, v11);
              v16 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
                sub_1406BF450(v16, v21);
              else
                sub_1407C97C0(v16, v21);
            }
            else
            {
              v12 = -1073741670;
              v20 = -1073741670;
            }
          }
          else if ( (v13 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v13 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v13 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
