/*
 * XREFs of sub_1409EB400 @ 0x1409EB400
 * Callers:
 *     sub_1409EB374 @ 0x1409EB374 (sub_1409EB374.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_14070B934 @ 0x14070B934 (sub_14070B934.c)
 *     sub_14070BACC @ 0x14070BACC (sub_14070BACC.c)
 *     sub_14071147C @ 0x14071147C (sub_14071147C.c)
 *     sub_140814978 @ 0x140814978 (sub_140814978.c)
 */

__int64 __fastcall sub_1409EB400(PVOID BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  _QWORD *v5; // rcx
  bool v6; // zf
  __int64 v7; // r9
  void *v8; // r14
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-90h] BYREF

  v11 = 0LL;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  memset(PackageSize, 0, 0x198uLL);
  if ( !sub_140814978((__int64)BugCheckParameter1) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0
        && BugCheckParameter1 != qword_140D06940
        && (*((_DWORD *)BugCheckParameter1 + 543) & 0x1000) == 0 )
      {
        sub_14071147C(v5, 5);
      }
    }
    else
    {
      v6 = BugCheckParameter1 == qword_140D06940;
      a2[8] = 0;
      if ( !v6
        && *((PVOID *)KeGetCurrentThread() + 23) != BugCheckParameter1
        && sub_140347810((struct _EX_RUNDOWN_REF *)BugCheckParameter1 + 139) )
      {
        sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v12, v7);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = (void *)sub_140347920((__int64)BugCheckParameter1, 0x746C6644u);
        sub_14070B934(v8, (WCHAR *)PackageSize, &v10);
        if ( a2[8] )
          sub_14070BACC((__int64)BugCheckParameter1, (__int64)&v11);
        sub_1402F89B0((signed __int64 *)BugCheckParameter1 + 151, (unsigned __int64)v8, 0x746C6644u);
        sub_14070AFEC((__int64)BugCheckParameter1, v10, PackageSize, (int *)&v11, 771);
      }
      if ( v4 )
      {
        sub_1402D0930((__int64)v12, 0LL);
        sub_1402AD030((struct _EX_RUNDOWN_REF *)BugCheckParameter1 + 139);
      }
    }
  }
  return 0LL;
}
