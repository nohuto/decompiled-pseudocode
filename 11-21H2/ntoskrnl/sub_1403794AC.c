/*
 * XREFs of sub_1403794AC @ 0x1403794AC
 * Callers:
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 * Callees:
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 *     sub_1403798F0 @ 0x1403798F0 (sub_1403798F0.c)
 *     sub_140390724 @ 0x140390724 (sub_140390724.c)
 */

__int64 __fastcall sub_1403794AC(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // r15
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h]
  _OWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( *a3 < 0 )
  {
    v16 = a4;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 6576);
  if ( v9 && !(unsigned int)sub_140390724(a1, v9, 0LL, a4) )
    return 0LL;
  v10 = sub_1403798F0(a1, (a5 >> 7) & 7, 0LL);
  *(_QWORD *)((char *)&v21[1] + 4) &= v11;
  HIDWORD(v21[1]) &= v11;
  v12 = (_QWORD *)v10;
  v20 = *(unsigned int *)(a1 + 6208);
  *(_QWORD *)(a1 + 6576) = a3;
  v19 = a4;
  LODWORD(v21[0]) = v13;
  *(_OWORD *)((char *)v21 + 4) = 0LL;
  if ( (a5 & 1) != 0 )
    DWORD1(v21[0]) |= 1u;
  v14 = sub_1403795D4(a1, 4LL, &v19);
  if ( v14 < 0 )
  {
    if ( v14 == -1073741536 )
      return 3LL;
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 0LL;
  }
  *(_QWORD *)(a1 + 6576) = 0LL;
  if ( (SDWORD2(v21[1]) & 0x80000000) == 0 )
  {
    v15 = *((_QWORD *)&v21[0] + 1);
    *v12 = *((_QWORD *)&v21[0] + 1);
    v16 = *(_QWORD *)(v15 + 24);
LABEL_8:
    v17 = *(_QWORD *)(a1 + 6568);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v17 + 16), a2);
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 && *a3 >= 0 )
    {
      v20 = *(unsigned int *)(a1 + 6208);
      v19 = a4;
      memset(v21, 0, sizeof(v21));
      sub_1403795D4(a1, 6LL, &v19);
    }
    return v16;
  }
  v16 = 0LL;
  if ( DWORD2(v21[1]) == -1073740749 )
  {
    v16 = 1LL;
    *(_WORD *)a3 |= 0x4000u;
  }
  return v16;
}
