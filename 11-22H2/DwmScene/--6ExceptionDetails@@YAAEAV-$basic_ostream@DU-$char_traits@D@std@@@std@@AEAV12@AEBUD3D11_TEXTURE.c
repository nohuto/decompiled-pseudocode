/*
 * XREFs of ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x1800CCB94
 * Callers:
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 * Callees:
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUDXGI_SAMPLE_DESC@@@Z @ 0x1800CCD84 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUDXGI_SAMPLE_D.c)
 */

__int64 __fastcall ExceptionDetails::operator<<(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = std::operator<<<std::char_traits<char>>(a1, (__int64)"{");
  v5 = std::operator<<<std::char_traits<char>>(v4, (__int64)"Width");
  v6 = std::operator<<<std::char_traits<char>>(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = std::operator<<<std::char_traits<char>>(v7, (__int64)",Height");
  v9 = std::operator<<<std::char_traits<char>>(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = std::operator<<<std::char_traits<char>>(v10, (__int64)",ArraySize");
  v12 = std::operator<<<std::char_traits<char>>(v11, (__int64)"=");
  v13 = std::ostream::operator<<(v12, a2[3]);
  v14 = std::operator<<<std::char_traits<char>>(v13, (__int64)",Format");
  v15 = std::operator<<<std::char_traits<char>>(v14, (__int64)"=");
  v16 = std::ostream::operator<<(v15, a2[4]);
  v17 = std::operator<<<std::char_traits<char>>(v16, (__int64)",SampleDesc");
  v18 = std::operator<<<std::char_traits<char>>(v17, (__int64)"=");
  v19 = ExceptionDetails::operator<<(v18, a2 + 5);
  v20 = std::operator<<<std::char_traits<char>>(v19, (__int64)",Usage");
  v21 = std::operator<<<std::char_traits<char>>(v20, (__int64)"=");
  v22 = std::ostream::operator<<(v21, a2[7]);
  v23 = std::operator<<<std::char_traits<char>>(v22, (__int64)",BindFlags");
  v24 = std::operator<<<std::char_traits<char>>(v23, (__int64)"=");
  v25 = std::ostream::operator<<(v24, a2[8]);
  v26 = std::operator<<<std::char_traits<char>>(v25, (__int64)",CPUAccessFlags");
  v27 = std::operator<<<std::char_traits<char>>(v26, (__int64)"=");
  v28 = std::ostream::operator<<(v27, a2[9]);
  v29 = std::operator<<<std::char_traits<char>>(v28, (__int64)",MiscFlags");
  v30 = std::operator<<<std::char_traits<char>>(v29, (__int64)"=");
  v31 = std::ostream::operator<<(v30, a2[10]);
  v32 = std::operator<<<std::char_traits<char>>(v31, (__int64)",");
  std::operator<<<std::char_traits<char>>(v32, (__int64)"}");
  return a1;
}
