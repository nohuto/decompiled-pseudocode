/*
 * XREFs of sub_140B56268 @ 0x140B56268
 * Callers:
 *     sub_140B5616C @ 0x140B5616C (sub_140B5616C.c)
 * Callees:
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403CE3FC @ 0x1403CE3FC (sub_1403CE3FC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AAECA0 @ 0x140AAECA0 (sub_140AAECA0.c)
 *     sub_140B563A4 @ 0x140B563A4 (sub_140B563A4.c)
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 *     sub_140B568E8 @ 0x140B568E8 (sub_140B568E8.c)
 *     sub_140B56C04 @ 0x140B56C04 (sub_140B56C04.c)
 */

__int64 __fastcall sub_140B56268(__int64 a1)
{
  int v1; // esi
  int v2; // ebp
  unsigned int i; // r14d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( i = 12; ; i += 4 )
    {
      v5 = (_QWORD *)sub_1403AA2B8(0x80uLL);
      v6 = v5;
      if ( v5 )
        break;
LABEL_11:
      if ( (unsigned int)++v2 >= *(_DWORD *)(a1 + 24) )
        return v1 == 0 ? 0xC000007B : 0;
    }
    memset(v5, 0, 0x80uLL);
    v6[2] = a1;
    v7 = 0;
    v6[14] = v6 + 13;
    v6[13] = v6 + 13;
    *((_DWORD *)v6 + 10) = v2;
    v8 = *(_DWORD *)(a1 + 32);
    v12 = 0;
    if ( (v8 & 1) != 0 )
    {
      if ( (int)sub_1403CE3FC(*(_QWORD *)(a1 + 16), i, &v12) < 0 )
      {
LABEL_13:
        sub_140AAECA0(v6);
        goto LABEL_11;
      }
      v7 = v12;
    }
    *((_DWORD *)v6 + 11) = v7;
    v9 = *(_QWORD *)(a1 + 16);
    v12 = 0;
    if ( (int)sub_140B56C04(v9, v7, 1668112752, (int)v6 + 48, (__int64)&v12) >= 0
      && (int)sub_140B568E8(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 11), v6 + 4) >= 0
      && (int)sub_140B565BC(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 12), v6 + 3) >= 0
      && (int)sub_140B563A4(v6) >= 0 )
    {
      v10 = *(_QWORD **)(a1 + 48);
      if ( *v10 != a1 + 40 )
        __fastfail(3u);
      *v6 = a1 + 40;
      ++v1;
      v6[1] = v10;
      *v10 = v6;
      *(_QWORD *)(a1 + 48) = v6;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  return v1 == 0 ? 0xC000007B : 0;
}
