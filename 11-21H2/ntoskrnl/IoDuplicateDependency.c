/*
 * XREFs of IoDuplicateDependency @ 0x140942470
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 *     sub_14084436C @ 0x14084436C (sub_14084436C.c)
 *     sub_14084442C @ 0x14084442C (sub_14084442C.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     sub_140942A64 @ 0x140942A64 (sub_140942A64.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v13[1] = 0;
  if ( a1 && a2 )
  {
    sub_1407756F4(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      ExReleaseResourceLite(&stru_140C46AC0);
      sub_140775698(0);
      return v2;
    }
    v13[0] = 0;
    v14 = a2;
    v5 = sub_14084436C((__int64)v13);
    v6 = (__int64)v5;
    if ( v5 )
    {
      ++*((_DWORD *)v5 + 22);
    }
    else
    {
      v6 = sub_14084442C((__int64)v13);
      if ( !v6 )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    v7 = sub_14076BBF4(a1);
    v8 = (__int64 *)*v7;
    if ( (__int64 *)*v7 != v7 )
    {
      while ( 1 )
      {
        v9 = sub_14055F84C((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = sub_140942A64(v9, v6);
        if ( v10 < 0 )
          break;
        if ( v8 == v7 )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    if ( (*(_DWORD *)(v6 + 88))-- == 1 )
      sub_14085CA14((_QWORD *)v6);
    sub_1408442B0(a2);
    ExReleaseResourceLite(&stru_140C46AC0);
    sub_140775698(0);
    sub_14076BC20();
    return v2;
  }
  return 3221225485LL;
}
