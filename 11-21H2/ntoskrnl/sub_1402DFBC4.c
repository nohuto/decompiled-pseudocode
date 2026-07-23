/*
 * XREFs of sub_1402DFBC4 @ 0x1402DFBC4
 * Callers:
 *     sub_1405D3288 @ 0x1405D3288 (sub_1405D3288.c)
 *     sub_1405D33D8 @ 0x1405D33D8 (sub_1405D33D8.c)
 *     sub_14067A98C @ 0x14067A98C (sub_14067A98C.c)
 *     sub_14067ABD0 @ 0x14067ABD0 (sub_14067ABD0.c)
 *     sub_1406991C8 @ 0x1406991C8 (sub_1406991C8.c)
 *     sub_140699288 @ 0x140699288 (sub_140699288.c)
 *     sub_1406C74F8 @ 0x1406C74F8 (sub_1406C74F8.c)
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 *     sub_1406D1FF8 @ 0x1406D1FF8 (sub_1406D1FF8.c)
 *     sub_1406D5070 @ 0x1406D5070 (sub_1406D5070.c)
 *     sub_1406DB1B4 @ 0x1406DB1B4 (sub_1406DB1B4.c)
 *     sub_1406E74D0 @ 0x1406E74D0 (sub_1406E74D0.c)
 *     sub_14076D6D4 @ 0x14076D6D4 (sub_14076D6D4.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_140780580 @ 0x140780580 (sub_140780580.c)
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_1407871C4 @ 0x1407871C4 (sub_1407871C4.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140853430 @ 0x140853430 (sub_140853430.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_140940080 @ 0x140940080 (sub_140940080.c)
 *     sub_14094017C @ 0x14094017C (sub_14094017C.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_140957F9C @ 0x140957F9C (sub_140957F9C.c)
 *     sub_1409B6A58 @ 0x1409B6A58 (sub_1409B6A58.c)
 *     sub_140A27CF4 @ 0x140A27CF4 (sub_140A27CF4.c)
 *     sub_140A28CA4 @ 0x140A28CA4 (sub_140A28CA4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_1402DFCC8 @ 0x1402DFCC8 (sub_1402DFCC8.c)
 *     unknown_libname_3 @ 0x14055F3B8 (unknown_libname_3.c)
 *     sub_14055F3E4 @ 0x14055F3E4 (sub_14055F3E4.c)
 */

__int64 sub_1402DFBC4(
        _WORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const WCHAR *a6,
        ...)
{
  int v9; // ebx
  _WORD *v10; // r12
  unsigned __int64 v11; // r14
  const WCHAR *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &word_1404370A0;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = sub_1402DFCC8(a1, a2, v17, v12, va);
      v14 = v17[0];
      v9 = v13;
      v11 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v10 = &a1[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 )
          unknown_libname_3(&a1[v14], 2 * v11, a5);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_14055F3E4(a1, 2 * a2, a3, &v16, v17, a5);
      v10 = v16;
      v11 = v17[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return (unsigned int)v9;
}
