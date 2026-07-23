/*
 * XREFs of sub_140957F9C @ 0x140957F9C
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140957F9C(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // r15d
  _WORD *Pool2; // rsi
  int v10; // ebx
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && *(_QWORD *)(v4 + 48) )
  {
    if ( a3 )
    {
      v5 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v5 + 1) > 0x13 )
        v5 = 18;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5;
    v7 = -1LL;
    do
      ++v7;
    while ( (&off_14000A668)[v6][v7] );
    v8 = 2 * (*a2 + (_DWORD)v7) + 42;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v8, 1869181008LL);
    if ( Pool2 )
    {
      v10 = sub_1402DFBC4(
              Pool2,
              (unsigned __int64)v8 >> 1,
              &v12,
              &v13,
              0,
              L"%ws%ws\\%wZ",
              L"DETECTED",
              (&off_14000A668)[v6],
              a2);
      if ( v10 >= 0 )
      {
        v10 = sub_1402E0198((wchar_t *)(v12 + 2), v13 - 1, L"%ws\\%wZ", L"DETECTED", a2);
        if ( v10 >= 0 )
          v10 = sub_14076FE20(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(v4 + 48), 0LL, 3u, 7u, (__int64)Pool2, v8, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
