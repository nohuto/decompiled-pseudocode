/*
 * XREFs of sub_1407F1AF8 @ 0x1407F1AF8
 * Callers:
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_140313D14 @ 0x140313D14 (sub_140313D14.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_1407F1AF8(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  int v6; // r9d
  unsigned int v7; // edi
  unsigned int i; // edx
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  int v15; // ebp
  unsigned __int64 *v16; // rdi
  int v17; // esi
  bool v19; // zf
  bool v20; // zf
  _OWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF

  v21[0] = 0LL;
  v5 = (_QWORD *)sub_14032A72C(a1);
  sub_140339C20((char *)(v4 + 1664), v6, (__int64)v21);
  v7 = sub_1402EB3DC((__int64)v21);
  for ( i = v7; ; i = v7 )
  {
    v9 = sub_1403250B0((__int64)v5, i, 0x302u);
    v10 = v9;
    if ( v9 != -1 )
      break;
    sub_1405B8348(v5);
  }
  v11 = (_QWORD *)(48 * v9 - 0x220000000000LL);
  sub_140313D14(v11, 0LL);
  v12 = sub_1402CBD10(0LL, v10, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  sub_14033C3E0((__int64)v11, v10);
  *v11 = 0LL;
  sub_14036C868(v13, a1, 0);
  sub_14027CCE4(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512);
  v14 = sub_1402CBD10(0LL, v10, -1610612732);
  v15 = 0;
  if ( sub_140317A80(a2) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v15 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_4;
      v19 = (v14 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_4;
      v19 = (v14 & 1) == 0;
    }
    if ( !v19 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v14;
  if ( v15 )
    sub_1402294F0(a2, v14);
  v16 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v17 = 0;
  if ( sub_140317A80((unsigned __int64)v16) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_7;
      v20 = (v12 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_7;
      v20 = (v12 & 1) == 0;
    }
    if ( !v20 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v16 = v12;
  if ( v17 )
    sub_1402294F0((__int64)v16, v12);
  return v10;
}
