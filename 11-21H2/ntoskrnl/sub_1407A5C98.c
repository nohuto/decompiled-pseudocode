/*
 * XREFs of sub_1407A5C98 @ 0x1407A5C98
 * Callers:
 *     sub_1406D8370 @ 0x1406D8370 (sub_1406D8370.c)
 *     sub_1407A5B90 @ 0x1407A5B90 (sub_1407A5B90.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140674BE4 @ 0x140674BE4 (sub_140674BE4.c)
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     sub_1407A5E50 @ 0x1407A5E50 (sub_1407A5E50.c)
 *     sub_1407A5F60 @ 0x1407A5F60 (sub_1407A5F60.c)
 *     sub_1407A6424 @ 0x1407A6424 (sub_1407A6424.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407A5C98(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // eax
  int v6; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 2280LL);
  sub_1402D66A8(v2 + 16);
  v10 = sub_1407A5E50(a1);
  v4 = (_QWORD *)v10;
  if ( !v10 )
  {
    v6 = sub_140674BE4((__int64)a1, &v10);
    if ( v6 < 0 )
      goto LABEL_6;
    v5 = *a1;
    if ( *a1 == 1 || *(_DWORD *)(v3 + 468) > 1u )
    {
      v4 = (_QWORD *)v10;
      goto LABEL_3;
    }
    v4 = (_QWORD *)v10;
  }
  sub_1407A5F60(v2, v4, *((_QWORD *)a1 + 3), *a1);
  v5 = *a1;
LABEL_3:
  if ( v5 == 4 )
  {
    v9 = v4[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
    v8 = (_QWORD *)(*(_QWORD *)(v2 + 72)
                  + 8LL
                  * ((37
                    * (BYTE6(v9)
                     + 37
                     * (BYTE5(v9)
                      + 37
                      * (BYTE4(v9)
                       + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                    + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(v2 + 68) >> 5) - 1)));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)v10;
    while ( (*v8 & 1) == 0 )
    {
      if ( (_QWORD *)*v8 == v4 )
      {
        *v8 = *v4;
        --*(_DWORD *)(v2 + 64);
        *v4 |= 0x8000000000000002uLL;
        goto LABEL_17;
      }
      v8 = (_QWORD *)*v8;
    }
    v4 = (_QWORD *)v10;
LABEL_17:
    sub_140674F0C(v4 + 2);
    ExFreePoolWithTag(v4, 0x54456F50u);
  }
  else
  {
    sub_1407A6424(v4, a1);
  }
  v6 = 0;
LABEL_6:
  sub_1402935D0(v2 + 16);
  return (unsigned int)v6;
}
