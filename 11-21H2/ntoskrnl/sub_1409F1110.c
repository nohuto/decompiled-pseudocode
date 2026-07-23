/*
 * XREFs of sub_1409F1110 @ 0x1409F1110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F1110(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  void *v5; // rdi
  __int64 v7; // r9
  _QWORD *v8; // rax
  unsigned __int64 *v9; // rsi
  unsigned __int64 i; // r10
  unsigned __int64 v11; // r10
  _QWORD ImageInfo[6]; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v16[3]; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  v5 = 0LL;
  memset(v16, 0, sizeof(v16));
  v14 = 0LL;
  FullImageName = 0LL;
  memset(ImageInfo, 0, sizeof(ImageInfo));
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( BugCheckParameter1 == *((_QWORD *)KeGetCurrentThread() + 23) )
    goto LABEL_5;
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v16, v7);
    v4 = 1;
LABEL_5:
    v8 = sub_1406F71A0(BugCheckParameter1, 1, a3, a4);
    v5 = v8;
    if ( v8 )
    {
      LODWORD(ImageInfo[1]) |= 0x400u;
      v9 = v8;
      for ( i = *v8; *v9; i = *v9 )
      {
        if ( (i & 3) == 0 )
        {
          v11 = i & 0xFFFFFFFFFFFFFFFCuLL;
          *v9 = v11;
          v14 = v11;
          ImageInfo[2] = v9[1] & 0xFFFFFFFFFFFF0000uLL;
          ImageInfo[4] = v9[3];
          if ( qword_140D00A28 )
          {
            if ( (int)sub_14042A5E0(v11, 1024LL) >= 0 )
              NotifyRoutine(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 1088), (PIMAGE_INFO)&ImageInfo[1]);
          }
        }
        v9 += 6;
      }
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
  {
    sub_1402D0930((__int64)v16, 0LL);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112));
  }
  return 0LL;
}
