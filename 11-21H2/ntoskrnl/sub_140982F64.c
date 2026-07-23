/*
 * XREFs of sub_140982F64 @ 0x140982F64
 * Callers:
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     sub_14023A8F8 @ 0x14023A8F8 (sub_14023A8F8.c)
 *     sub_140263558 @ 0x140263558 (sub_140263558.c)
 *     sub_14026446C @ 0x14026446C (sub_14026446C.c)
 *     sub_1402646FC @ 0x1402646FC (sub_1402646FC.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_1405C32E4 @ 0x1405C32E4 (sub_1405C32E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140982F64(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rbp
  char *v4; // r15
  ULONG_PTR v5; // r14
  _QWORD *v6; // rbx
  int v7; // r13d
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  bool v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v16; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+20h]

  v16 = 0LL;
  v17 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72);
  if ( (unsigned int)sub_140285380(v17, v3 + ((unsigned __int8)-((*(_DWORD *)(v17 + 4) & 0x20) == 0) & 0xA0)) )
  {
    v14 = sub_14033D7D0(*(_DWORD *)(a1 + 36));
    v4 = (char *)sub_140263558(*(unsigned int *)(a1 + 32), v14);
    if ( v4 )
    {
      v5 = qword_140C590C8;
      v6 = 0LL;
      v7 = 0;
      v8 = sub_14023A8F8();
      if ( v8 < 3 )
      {
        do
        {
          v9 = qword_14001C780[v8];
          if ( v3 >= v9 )
          {
            if ( v9 < *(_QWORD *)(a1 + 24) )
              break;
            if ( !v6 )
            {
              v6 = sub_1402828F0(64, 0x30uLL, 0x6C4C6D4Du);
              if ( !v6 )
                goto LABEL_25;
            }
            if ( (int)sub_140277D10(
                        v17,
                        v9,
                        v5,
                        v9,
                        0,
                        v9,
                        v14,
                        *(_DWORD *)(a1 + 32),
                        0x80000000,
                        1611661312,
                        0,
                        0LL,
                        (__int64 *)&v16) >= 0 )
            {
              v3 -= v9;
              if ( (*(_DWORD *)a1 & 8) == 0 && (unsigned int)sub_1405C32E4((__int64)v4, v16, v9, v14) )
                v7 = 1;
              v10 = 0;
              v11 = v16;
              *v6 = v16;
              v6[1] = v9;
              *((_BYTE *)v6 + 16) = 1;
              v12 = (_QWORD *)*a2;
              if ( *a2 )
              {
                while ( 1 )
                {
                  if ( v11 >= *(v12 - 3) )
                  {
                    v13 = (_QWORD *)v12[1];
                    if ( !v13 )
                    {
                      v10 = 1;
                      break;
                    }
                  }
                  else
                  {
                    v13 = (_QWORD *)*v12;
                    if ( !*v12 )
                      break;
                  }
                  v12 = v13;
                }
              }
              RtlAvlInsertNodeEx(a2, (unsigned __int64)v12, v10, v6 + 3);
              v6 = 0LL;
              if ( !v3 )
                goto LABEL_25;
              v5 = v16 - 1;
              if ( v16 - 1 > v9 )
                continue;
            }
          }
          v5 = qword_140C590C8;
          ++v8;
        }
        while ( v8 < 3 );
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
LABEL_25:
        if ( v7 )
          sub_14026446C(v4);
      }
      sub_1402646FC((volatile signed __int32 *)v4);
    }
  }
}
