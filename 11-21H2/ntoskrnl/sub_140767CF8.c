/*
 * XREFs of sub_140767CF8 @ 0x140767CF8
 * Callers:
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_1409426FC @ 0x1409426FC (sub_1409426FC.c)
 */

__int64 __fastcall sub_140767CF8(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  __int64 v5; // rbx
  int v9; // edi
  _QWORD **v10; // rsi
  _QWORD *v11; // rbx
  ULONG_PTR BugCheckParameter3; // rbp
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v17 = 0LL;
  v9 = 0;
  sub_1407756F4(0LL);
  v10 = (_QWORD **)sub_14076BBF4(v5);
  v11 = *v10;
  if ( *v10 != v10 )
  {
    BugCheckParameter3 = a5;
    do
    {
      sub_1409426FC(v11, &v17, &v18);
      v11 = (_QWORD *)*v11;
      if ( v17 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
        v15 = *(_DWORD *)(v14 + 300);
        if ( v15 < 784 || v15 > 785 )
          v16 = !sub_1402DEAB0(v14);
        else
          v16 = ((*(_DWORD *)(v14 + 304) - 788) & 0xFFFFFFFD) == 0;
        if ( !v16 )
          v9 = sub_140767AEC(v14, a2, a3, a4, BugCheckParameter3);
        if ( v9 < 0 )
          break;
      }
    }
    while ( v11 != v10 );
  }
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0LL);
  return (unsigned int)v9;
}
