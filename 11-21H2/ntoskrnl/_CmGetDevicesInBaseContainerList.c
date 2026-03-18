/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x140A264F4
 * Callers:
 *     _CmMoveBaseContainer @ 0x140A26770 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _PnpCtxRegEnumValue @ 0x14069946C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406994BC (_PnpCtxRegQueryInfoKey.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14078014C (_PnpCtxGetCachedContextBaseKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _WORD *v8; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  _WORD *Pool2; // rax
  __int64 v16; // rcx
  ULONG i; // r15d
  int v18; // eax
  __int64 v19; // rax
  int v21; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-18h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+48h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  v21 = 0;
  v8 = 0LL;
  v26 = 0;
  *a4 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v25);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v25, a2, 0, 1u, (__int64)&v24);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v24, (__int64)L"BaseContainers", 0, 1u, (__int64)&v23);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *(_QWORD *)(a1 + 224);
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v23, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, (int)Handle, 0, 0, (__int64)&v21, (__int64)&v26, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            v14 = v21 * (v26 + 1) + 1;
            Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v14, 1380994640LL);
            *a4 = (__int64)Pool2;
            v8 = Pool2;
            if ( !Pool2 )
            {
              CachedContextBaseKey = -1073741801;
LABEL_21:
              if ( !Pool2 )
                goto LABEL_29;
              ExFreePoolWithTag(Pool2, 0);
LABEL_27:
              *a4 = 0LL;
              goto LABEL_29;
            }
            for ( i = 0; ; ++i )
            {
              v26 = v14 - 1;
              v18 = PnpCtxRegEnumValue(v16, Handle, i, v8, (__int64)&v26, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v18;
              if ( v18 == -2147483622 )
                break;
              if ( v18 < 0 )
                goto LABEL_18;
              v16 = v26 + 1;
              v14 -= v16;
              v8 += v16;
            }
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_18:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
  {
LABEL_23:
    Pool2 = (_WORD *)*a4;
    CachedContextBaseKey = 0;
    goto LABEL_24;
  }
  Pool2 = (_WORD *)*a4;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_21;
LABEL_24:
  if ( Pool2 )
  {
    *v8 = 0;
    goto LABEL_29;
  }
  v19 = ExAllocatePool2(256LL, 2LL, 1380994640LL);
  *a4 = v19;
  if ( v19 )
    goto LABEL_27;
  CachedContextBaseKey = -1073741801;
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)CachedContextBaseKey;
}
