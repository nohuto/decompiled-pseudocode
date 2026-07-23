/*
 * XREFs of sub_140458D38 @ 0x140458D38
 * Callers:
 *     sub_140393E40 @ 0x140393E40 (sub_140393E40.c)
 * Callees:
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

void __fastcall sub_140458D38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v10; // edi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+28h] [rbp-40h]

  if ( a3 )
  {
    *(_QWORD *)(a3 + 56) = a3;
    if ( !a6 )
    {
      v10 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          v11 = (unsigned int)sub_14045699C(a1, a2, a3, a4, 0, v10);
          v12 = a4 & 0xFFF;
          if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v11
                                                        + v12
                                                        + (*(_QWORD *)(a2
                                                                     + 8LL
                                                                     * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12)
                                                                     + 48) << 12)
                                                        - 1) )
            break;
          if ( !*(_BYTE *)(a1 + 437) )
          {
            v13 = (unsigned int)sub_14045693C(a1) - 1;
            if ( (v13 & v15) != 0 || (v14 & v13) != 0 )
              break;
            LOBYTE(v20) = 0;
            LOBYTE(v19) = 0;
            sub_140513310(v13, a2, a4, (unsigned int)v11, v19, v20);
          }
LABEL_13:
          a4 += v11;
          v10 -= v11;
          if ( !v10 )
            goto LABEL_14;
        }
        sub_140457A42(a1, a2, a4, *(_QWORD **)(a3 + 56), v11, 0, 0, 0);
        v16 = *(_QWORD *)(a3 + 56);
        v17 = (unsigned __int64)(v11 + v12 + 4095) >> 12;
        if ( (_DWORD)v17 )
        {
          v18 = (unsigned int)v17;
          do
          {
            v16 = *(_QWORD *)(v16 + 8);
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a3 + 56) = v16;
        goto LABEL_13;
      }
LABEL_14:
      *(_QWORD *)(a3 + 56) = a3;
    }
  }
}
