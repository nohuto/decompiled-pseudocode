/*
 * XREFs of RtlPrefixUnicodeString @ 0x14077F870
 * Callers:
 *     sub_1402D6A64 @ 0x1402D6A64 (sub_1402D6A64.c)
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 *     sub_14066D3F8 @ 0x14066D3F8 (sub_14066D3F8.c)
 *     sub_14066F678 @ 0x14066F678 (sub_14066F678.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     sub_14067B1DC @ 0x14067B1DC (sub_14067B1DC.c)
 *     sub_1406960C8 @ 0x1406960C8 (sub_1406960C8.c)
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_1406C2EE8 @ 0x1406C2EE8 (sub_1406C2EE8.c)
 *     sub_1406C5650 @ 0x1406C5650 (sub_1406C5650.c)
 *     sub_1406DBA7C @ 0x1406DBA7C (sub_1406DBA7C.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_14076D4A4 @ 0x14076D4A4 (sub_14076D4A4.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_1407FAE50 @ 0x1407FAE50 (sub_1407FAE50.c)
 *     sub_140943E3C @ 0x140943E3C (sub_140943E3C.c)
 *     sub_140944390 @ 0x140944390 (sub_140944390.c)
 *     sub_14094C79C @ 0x14094C79C (sub_14094C79C.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DAF0 @ 0x14095DAF0 (sub_14095DAF0.c)
 *     sub_1409949AC @ 0x1409949AC (sub_1409949AC.c)
 *     sub_14099E860 @ 0x14099E860 (sub_14099E860.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A25AC0 @ 0x140A25AC0 (sub_140A25AC0.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A28FC4 @ 0x140A28FC4 (sub_140A28FC4.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 *v6; // r9
  unsigned __int16 *v7; // r10
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  __int64 v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // dx
  unsigned __int16 v15; // ax
  __int16 v16; // r11
  __int64 v17; // rcx

  v3 = sub_140347DB0();
  v7 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  v8 = v3[154];
  v9 = *v6;
  if ( *(_WORD *)v4 >= (unsigned __int16)v9 )
  {
    v10 = (unsigned __int16 *)((char *)v7 + v9);
    if ( v7 >= (unsigned __int16 *)((char *)v7 + v9) )
      return 1;
    if ( v5 )
    {
      v11 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( 1 )
      {
        v12 = *v7;
        v13 = *(unsigned __int16 *)((char *)v7 + v11);
        if ( *v7 != v13 )
        {
          sub_1403477B0(v8, v13);
          v15 = sub_1403477B0(v8, v12);
          if ( v15 != v16 )
            break;
        }
        if ( ++v7 >= v10 )
          return 1;
      }
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 8) - (_QWORD)v7;
      while ( *v7 == *(unsigned __int16 *)((char *)v7 + v17) )
      {
        if ( ++v7 >= v10 )
          return 1;
      }
    }
  }
  return 0;
}
