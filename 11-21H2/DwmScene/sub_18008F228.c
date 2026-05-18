/*
 * XREFs of sub_18008F228 @ 0x18008F228
 * Callers:
 *     sub_18005460C @ 0x18005460C (sub_18005460C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008F228(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  _WORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  _WORD *v11; // rdi
  __int64 v12; // rcx

  v3 = 0LL;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)a1 = 0LL;
  v4 = (_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1160) = 0LL;
  v6 = a2[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *v4 = *a2;
  v7 = a2[1];
  v8 = (_WORD *)(a1 + 128);
  *(_QWORD *)(a1 + 1160) = v7;
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_QWORD *)(a1 + 1184) = 0LL;
  v9 = (unsigned __int64)v4 >= a1 + 128 ? 0x200 : 0;
  *(_QWORD *)(a1 + 1192) = 0LL;
  *(_QWORD *)(a1 + 1200) = 0LL;
  *(_QWORD *)(a1 + 1208) = 0LL;
  *(_QWORD *)(a1 + 1216) = 0LL;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_WORD *)(a1 + 1240) = 0;
  *(_BYTE *)(a1 + 1242) = 0;
  if ( a1 + 128 > (unsigned __int64)v4 )
    goto LABEL_11;
  v10 = a1 + 1150;
  if ( v8 > word_18013640C || v10 < (unsigned __int64)word_18013640C )
  {
    do
      v3 += 8LL;
    while ( v3 != v9 );
    v11 = v8;
    v12 = 512LL;
    v8 += 512;
    while ( v12 )
    {
      *v11++ = -1;
      --v12;
    }
  }
  while ( v8 != (_WORD *)v4 )
LABEL_11:
    *v8++ = -1;
  return a1;
}
