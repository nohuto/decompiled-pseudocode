/*
 * XREFs of sub_1408091FC @ 0x1408091FC
 * Callers:
 *     sub_140808480 @ 0x140808480 (sub_140808480.c)
 *     sub_1408091B0 @ 0x1408091B0 (sub_1408091B0.c)
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 *     sub_14039ADE8 @ 0x14039ADE8 (sub_14039ADE8.c)
 *     sub_14080877C @ 0x14080877C (sub_14080877C.c)
 *     sub_140808BE8 @ 0x140808BE8 (sub_140808BE8.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_1408093DC @ 0x1408093DC (sub_1408093DC.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 */

struct _KTHREAD *__fastcall sub_1408091FC(__int64 a1)
{
  int v1; // edi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  BOOL v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-19h] BYREF
  __int128 v10; // [rsp+30h] [rbp-9h]
  __int128 v11; // [rsp+50h] [rbp+17h]
  __int128 v12; // [rsp+60h] [rbp+27h]
  __int128 v13; // [rsp+70h] [rbp+37h]

  v1 = *(_DWORD *)(a1 + 56);
  v2 = *(_OWORD *)(a1 + 16);
  v11 = *(_OWORD *)(a1 + 72);
  v3 = *(_OWORD *)(a1 + 32);
  v12 = v2;
  v13 = v3;
  v9 = 0LL;
  LODWORD(v9) = 4;
  v10 = 0LL;
  if ( v1 == 4 )
  {
    LOBYTE(v10) = v11;
    DWORD1(v10) = DWORD1(v11);
  }
  sub_140809310(a1, &v9);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  if ( (v12 & 0xFFFFFFFC) != 0 || (_DWORD)v12 == 1 )
  {
    if ( v1 == 4 )
    {
      v8 = sub_14039ADE8(SDWORD2(v12));
      sub_140809838(1LL, v8 & 0xFFFFFF);
    }
    v4 = BYTE8(v13) != 0;
    if ( BYTE8(v13) && HIDWORD(v13) == 1 && (_DWORD)v12 == 4 )
    {
      if ( !byte_140C21D38 )
      {
        byte_140C21D38 = 1;
        sub_14036A2C8(qword_140C21D30, 1u);
      }
    }
    else if ( byte_140C21D38 )
    {
      byte_140C21D38 = 0;
      sub_140369FDC(qword_140C21D30, 1u);
    }
    sub_1408093DC(v4);
  }
  else
  {
    sub_14080877C();
    sub_140808BE8(v7, v6);
    if ( byte_140C21D38 )
    {
      byte_140C21D38 = 0;
      sub_140369FDC(qword_140C21D30, 1u);
    }
  }
  return sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
}
