/*
 * XREFs of sub_140A6F360 @ 0x140A6F360
 * Callers:
 *     sub_140A6F300 @ 0x140A6F300 (sub_140A6F300.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A6F444 @ 0x140A6F444 (sub_140A6F444.c)
 *     sub_140A7294C @ 0x140A7294C (sub_140A7294C.c)
 *     sub_140A72BB0 @ 0x140A72BB0 (sub_140A72BB0.c)
 */

__int64 __fastcall sub_140A6F360(const void **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *Pool2; // r14
  int v7; // ebx
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-30h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || byte_140C09804 )
    return 3221226324LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 0x2000uLL, 0x6F49644Bu);
  if ( !Pool2 )
    return 3221225495LL;
  v7 = sub_140A6F444(&v14, &v15, a1);
  if ( v7 >= 0
    && (memmove(Pool2, a1[1], *(unsigned __int16 *)a1),
        *((_WORD *)Pool2 + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0,
        v10 = v15,
        DbgPrintEx(
          0,
          0,
          "KdPullRemoteFile(%p): About to overwrite %ls and preallocate to %I64x\n",
          KeGetCurrentThread(),
          (const wchar_t *)Pool2,
          v15),
        v7 = sub_14042A5E0(a5, a1),
        v7 >= 0)
    && (v11 = 0LL, v10) )
  {
    v8 = v14;
    do
    {
      LODWORD(v14) = 0;
      v12 = v10;
      if ( v10 > 0x2000 )
        v12 = 0x2000;
      v7 = sub_140A72BB0(v8, v11, (_DWORD)Pool2, v12, (__int64)&v14);
      if ( v7 < 0 )
        break;
      v13 = (unsigned int)v14;
      if ( !(_DWORD)v14 )
        break;
      v7 = sub_14042A5E0(a5, v11);
      if ( v7 < 0 )
        break;
      v11 += v13;
      v10 -= v13;
    }
    while ( v10 );
  }
  else
  {
    v8 = v14;
  }
  if ( v8 )
    sub_140A7294C(v8);
  sub_14042A5E0(a5, (unsigned int)v7);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v7;
}
