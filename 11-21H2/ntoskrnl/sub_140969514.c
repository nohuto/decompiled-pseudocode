/*
 * XREFs of sub_140969514 @ 0x140969514
 * Callers:
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403539BC @ 0x1403539BC (sub_1403539BC.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056AF98 @ 0x14056AF98 (sub_14056AF98.c)
 *     sub_14057F520 @ 0x14057F520 (sub_14057F520.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140583778 @ 0x140583778 (sub_140583778.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 */

__int64 __fastcall sub_140969514(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  struct _KTHREAD *CurrentThread; // rsi
  void *v19; // rbx
  int v21; // eax
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v8 = sub_140313C70(48 * BugCheckParameter2 - 0x220000000000LL);
  v10 = sub_140313C70(v9 - 1 + 48 * BugCheckParameter3);
  v11 = v10;
  v12 = BugCheckParameter3 - BugCheckParameter2;
  if ( BugCheckParameter3 - BugCheckParameter2 >= 0x40000 && qword_140C590D0 >= 0x200000 )
  {
    v13 = v8 & 0xFFFFFFFFFFFFF000uLL;
    if ( v8 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
      v13 = v8;
    v14 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v8 = v13;
    if ( v11 != v14 )
      v11 = v14;
  }
  v15 = sub_14057F520(BugCheckParameter2);
  v16 = sub_1403539BC(v15 + 1);
  v17 = ((a4 & 0x4000 | 0x12A10) >> 4) | 0x100;
  if ( (a4 & 0x8000) == 0 )
    v17 = (a4 & 0x4000 | 0x12A10) >> 4;
  v23 = v17;
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
    v17 = v23;
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( !(unsigned int)sub_14026DC5C(v8, v11, v17, 4, v16) )
  {
    if ( CurrentThread )
      sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v19 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      v19 = (void *)MmMapIoSpaceEx(BugCheckParameter2 << 12, v12 << 12, 4u);
      if ( !v19 )
        return 3221225626LL;
    }
    if ( (a4 & 0x100000) == 0
      && !(unsigned int)sub_1403CF51C(
                          (__int64)&StartContext,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      goto LABEL_25;
    }
    if ( a3 != &StartContext
      && !(unsigned int)sub_1403CF51C(
                          (__int64)a3,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      if ( (a4 & 0x100000) == 0 )
        sub_1405B3268(&StartContext, BugCheckParameter3 - BugCheckParameter2, BugCheckParameter3 - BugCheckParameter2);
LABEL_25:
      if ( v19 )
        MmUnmapVideoDisplay(v19, v12 << 12);
      return 3221225773LL;
    }
    if ( (a4 & 0x800) == 0 )
    {
      v21 = sub_14056AF98(BugCheckParameter2, BugCheckParameter3 - 1, 1LL);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x61A00uLL, BugCheckParameter2, BugCheckParameter3, v21);
    }
  }
  if ( !(unsigned int)sub_140583778(BugCheckParameter2, BugCheckParameter3 - BugCheckParameter2, 1) )
    a4 |= 0x80000u;
  sub_140582D7C(
    BugCheckParameter2,
    BugCheckParameter3 - BugCheckParameter2,
    (unsigned __int16 *)a3,
    a4,
    a5,
    (ULONG_PTR *)v19);
  if ( CurrentThread )
    sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
  if ( v19 )
    MmUnmapVideoDisplay(v19, v12 << 12);
  return 0LL;
}
