/*
 * XREFs of sub_140806A24 @ 0x140806A24
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BAA98 @ 0x1406BAA98 (sub_1406BAA98.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_1406BACDC @ 0x1406BACDC (sub_1406BACDC.c)
 *     sub_1406BAD74 @ 0x1406BAD74 (sub_1406BAD74.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 */

__int64 __fastcall sub_140806A24(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE v9; // r12
  int v10; // edi
  __int64 v11; // r9
  const WCHAR *v12; // rdi
  ACCESS_MASK v13; // esi
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v17; // r9
  HANDLE v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int128 v21; // [rsp+68h] [rbp-18h]

  v6 = Handle;
  v18 = 0LL;
  Handle = 0LL;
  *v6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v21 = 0LL;
  v10 = sub_1406BAA98(a1, a2, a5, (__int64)&v19);
  if ( v10 < 0 )
    goto LABEL_16;
  v12 = (const WCHAR *)v20;
  if ( (_QWORD)v20 && *(_QWORD *)((char *)&v19 + 4) == 0x400000000LL && !DWORD1(v21) && a3 && a4 >= 0x10 )
  {
    v13 = HIDWORD(v20);
    v15 = sub_140784B14(
            *(__int64 *)&qword_140D00AC0,
            (const WCHAR *)v20,
            0x32u,
            v11,
            SHIDWORD(v20),
            0,
            (__int64)&Handle,
            0LL);
    if ( v15 != -1073741772 )
      goto LABEL_8;
    if ( (_DWORD)v21 == 1 )
    {
      if ( sub_14078A600(2u) )
      {
        v15 = sub_140784B14(*(__int64 *)&qword_140D00AC0, v12, 0x32u, v17, v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
        if ( v15 >= 0 )
          v15 = sub_1406BAD74(Handle, v14, v13, v9, &v18);
        goto LABEL_10;
      }
      v15 = -1073741790;
    }
  }
  else
  {
    v15 = -1073741811;
  }
LABEL_10:
  v10 = sub_1406BACDC(v15, (__int64)v18, SDWORD2(v21), a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v15 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, v9);
  }
LABEL_16:
  sub_1406BACAC((__int64)&v19);
  return (unsigned int)v10;
}
