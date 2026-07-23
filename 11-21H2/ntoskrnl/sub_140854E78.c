/*
 * XREFs of sub_140854E78 @ 0x140854E78
 * Callers:
 *     sub_140854E60 @ 0x140854E60 (sub_140854E60.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1403D6EC0 @ 0x1403D6EC0 (sub_1403D6EC0.c)
 *     sub_140855034 @ 0x140855034 (sub_140855034.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140854E78(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // esi
  unsigned __int64 v6; // r11
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // r12
  __int64 v9; // r11
  __int64 Pool2; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // r13
  __int64 *v14; // r15
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  char v17; // al
  __int64 v18; // r11
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  v3 = a1;
  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = a1;
    if ( is_mul_ok(a1, 0x21B0uLL) )
    {
      v5 = 0;
      v6 = (8624LL * a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = 0;
      v8 = v6;
      if ( a1 )
      {
        while ( 1 )
        {
          v5 = sub_1402DCD64(*(_WORD **)(32LL * v7 + a2 + 8), 0x7FFFFFFFuLL, &v20);
          if ( v5 < 0 )
            break;
          ++v7;
          v6 = v20 + 2 + v9;
          if ( v7 >= (unsigned __int8)v3 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        Pool2 = ExAllocatePool2(64LL, v6, 1716342864LL);
        v11 = Pool2;
        if ( Pool2 )
        {
          v12 = v8 + Pool2;
          v13 = 0;
          if ( (_BYTE)v3 )
          {
            v14 = (__int64 *)(a2 + 8);
            v15 = v11 + 32;
            v16 = v12;
            do
            {
              ++v13;
              *(_OWORD *)(v15 - 20) = *(_OWORD *)*(v14 - 1);
              v17 = *((_BYTE *)v14 + 8);
              *(_QWORD *)(v15 + 8576) = -1LL;
              *(_BYTE *)v15 = v17;
              *(_QWORD *)(v15 - 32) = v16;
              *(_BYTE *)(v15 - 24) = v13;
              sub_1402E0AC4((_WORD *)*v14, 0x7FFFFFFFuLL, &v20);
              sub_1402E0200(*(_WORD **)(v15 - 32), v20 + 1, *v14);
              v14[2] = v15 - 32;
              v16 += 2 * v18 + 2;
              v15 += 8624LL;
              v14 += 4;
            }
            while ( v13 < (unsigned __int8)v3 );
            v4 = v3;
          }
          sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
          sub_1402D66A8((ULONG_PTR)&qword_140C23010);
          qword_140C1D018 = v11;
          byte_140C1D020 = v3;
          if ( (_BYTE)v3 )
          {
            do
            {
              sub_1403D6EC0(v11);
              v11 += 8624LL;
              --v4;
            }
            while ( v4 );
          }
          sub_140855034(0LL);
          sub_1402935D0((ULONG_PTR)&qword_140C23010);
          sub_140224C00(&qword_140C22FE0);
          dword_140C1D024 |= 1u;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return (unsigned int)v5;
}
