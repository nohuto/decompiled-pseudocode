/*
 * XREFs of sub_140B2AB30 @ 0x140B2AB30
 * Callers:
 *     sub_140A5B690 @ 0x140A5B690 (sub_140A5B690.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B2AB30(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  unsigned int v7; // edi
  void *v8; // rax
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 **v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 *i; // r15
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  qword_140C4BF50 = a1;
  v16 = 0LL;
  v3 = 0;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 2584LL);
  dword_140C4BF48 = 0;
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v5 = (_QWORD *)*v5;
      ++v3;
    }
    while ( v5 != v4 );
    dword_140C4BF48 = v3;
    if ( v3 )
    {
      v7 = v3 << 6;
      v8 = (void *)sub_1403BF104(v7, 1u);
      qword_140C4BF40 = (__int64)v8;
      if ( v8 )
      {
        memset(v8, 0, v7);
        v9 = sub_140213A40(a1, 1414681411, 0, 0);
        if ( v9 )
        {
          v10 = 0;
          v11 = (__int64 **)(*(_QWORD *)(a1 + 240) + 2584LL);
          v12 = *v11;
          while ( v12 != (__int64 *)v11 )
          {
            if ( *((int *)v12 + 10) >= 0 )
            {
              v13 = v12[2];
              v16 = 0LL;
              if ( (int)sub_14042A5E0(0LL, &v16) >= 0 && v16 )
              {
                v14 = qword_140C4BF40 + ((unsigned __int64)v10 << 6);
                *(_QWORD *)(v14 + 8) = *(_QWORD *)(v13 + 56);
                *(_QWORD *)(v14 + 16) = v16;
                *(_DWORD *)(v14 + 24) = 0;
                *(_QWORD *)(v14 + 48) = *(_QWORD *)(v13 + 48);
                *(_DWORD *)(v14 + 56) = *(_DWORD *)(v13 + 64);
                *(_BYTE *)v14 = 1;
                *(_QWORD *)(v14 + 40) = v14 + 32;
                *(_QWORD *)(v14 + 32) = v14 + 32;
                for ( i = (__int64 *)v12[3]; i != v12 + 3; i = (__int64 *)*i )
                  sub_14042A5E0(v10, v9 + *((unsigned int *)i + 4));
                *(_BYTE *)v14 = 0;
              }
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v12[6],
                *((_DWORD *)v12 + 10));
            }
            ++v10;
            v12 = (__int64 *)*v12;
            v11 = (__int64 **)(*(_QWORD *)(a1 + 240) + 2584LL);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v1;
}
