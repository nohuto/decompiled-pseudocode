/*
 * XREFs of sub_140B0A424 @ 0x140B0A424
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B04E44 @ 0x140B04E44 (sub_140B04E44.c)
 */

__int64 __fastcall sub_140B0A424(__int64 a1)
{
  int v1; // ecx
  __int64 v3; // rax
  unsigned __int64 i; // rdi
  int v5; // eax
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rbp
  int v10; // ebx
  ULONG_PTR v11; // r15
  unsigned int v12; // ebx
  _QWORD **v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD v16[14]; // [rsp+30h] [rbp-98h] BYREF

  if ( (dword_140C54F84 & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 360);
    if ( (v3 & 1) != 0 )
    {
      if ( v3 != 1 )
      {
        i = v3 ^ ((a1 + 352) | 1);
        goto LABEL_28;
      }
    }
    else
    {
      i = *(_QWORD *)(a1 + 360);
LABEL_28:
      while ( i )
      {
        v5 = *(_DWORD *)(i + 24);
        if ( v5 == 29 || v5 == 36 )
        {
          v6 = *(_QWORD *)(i + 40);
          v7 = *(_QWORD *)(i + 32);
          if ( ((v7 | v6) & 0x1FF) != 0
            || !v7
            || !v6
            || (v8 = v6 + v7, v6 + v7 < v7)
            || (v9 = v8 - 1, v8 - 1 > qword_140C50840) )
          {
            KeBugCheckEx(0x1Au, 0x3030310uLL, v7, v6, 0LL);
          }
          v10 = *((_DWORD *)sub_1402C1550(*(_QWORD *)(i + 32)) + 2);
          v11 = v6;
          if ( v10 != *((_DWORD *)sub_1402C1550(v9) + 2) )
            v11 = 512LL;
          do
          {
            v12 = *((_DWORD *)sub_1402C1550(v7) + 2);
            if ( v12 != *((_DWORD *)sub_1402C1550(v11 + v7 - 1) + 2) )
              KeBugCheckEx(0x1Au, 0x3030315uLL, v7, v11, v12);
            v1 = sub_140B04E44(qword_140C54F90 + 23504 + 24512LL * v12, v7, v11, 0);
            if ( v1 < 0 )
              return (unsigned int)v1;
            v7 += v11;
            v6 -= v11;
          }
          while ( v6 );
        }
        v13 = *(_QWORD ***)(i + 8);
        v14 = i;
        if ( v13 )
        {
          v15 = *v13;
          for ( i = *(_QWORD *)(i + 8); v15; v15 = (_QWORD *)*v15 )
            i = (unsigned __int64)v15;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v14 )
              break;
            v14 = i;
          }
        }
      }
    }
  }
  v1 = 0;
  if ( (dword_140D06880 & 0x4000) != 0 )
  {
    memset(v16, 0, 0x68uLL);
    v16[1] = ((unsigned int)dword_140C54F84 >> 3) & 1;
    return (unsigned int)sub_140358A20(2u, 219, 0, (__int64)v16);
  }
  return (unsigned int)v1;
}
