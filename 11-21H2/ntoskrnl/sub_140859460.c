/*
 * XREFs of sub_140859460 @ 0x140859460
 * Callers:
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_140A2E2C4 @ 0x140A2E2C4 (sub_140A2E2C4.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_1406C59F0 @ 0x1406C59F0 (sub_1406C59F0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140A30510 @ 0x140A30510 (sub_140A30510.c)
 */

__int64 __fastcall sub_140859460(
        const UNICODE_STRING **a1,
        const WCHAR *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int v11; // eax
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  const UNICODE_STRING *v18[2]; // [rsp+50h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, asc_140868930) )
  {
    v11 = sub_1406C2248((__int64)a1, a2, v18);
    v12 = v11;
    if ( v11 == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = sub_1408274C4((__int64)a1, a2, 0LL, 0, 0LL, 16, 0LL, 0LL, (__int64 *)v18);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v10 = 1;
    }
    else if ( v11 < 0 )
    {
      return (unsigned int)v12;
    }
  }
  else
  {
    v18[0] = a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v14 = v18[0];
  ExAcquireResourceExclusiveLite((PERESOURCE)v18[0][9].Buffer, 1u);
  if ( (*(_DWORD *)&v14[4].Length & 1) != 0 || (v12 = sub_1406C1D24(a1, (__int64)v14), v12 >= 0) )
  {
    if ( *a1 )
      v15 = *(_QWORD *)&(*a1)[14].Length;
    else
      v15 = 0LL;
    v12 = sub_14077FFEC(v15, *(_QWORD *)&v14[6].Length, 0LL, 0, a3, a5);
    if ( (*(_DWORD *)&v14[4].Length & 1) == 0 )
      sub_1406C59F0((__int64)a1, (__int64)v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite((PERESOURCE)v14[9].Buffer);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v12 < 0 && v10 )
    sub_140A30510(a1, v18[0], v16);
  return (unsigned int)v12;
}
