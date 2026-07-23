/*
 * XREFs of sub_14076CFE4 @ 0x14076CFE4
 * Callers:
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 */

__int64 __fastcall sub_14076CFE4(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6, _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  HANDLE v14; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  HANDLE v17; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v18[0] = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  LODWORD(v19) = 0;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  v11 = sub_14077FFEC(a1, a2, a3, 0, 1, (__int64)v18);
  if ( v11 < 0
    || (!v10 ? (LODWORD(v12) = 0) : (v12 = *(_QWORD *)(v10 + 224)),
        (v11 = sub_14077FFEC(v12, v18[0], (unsigned int)L"BaseContainers", 0, 1, (__int64)&v17), v11 < 0)
     || (!v10 ? (LODWORD(v13) = 0) : (v13 = *(_QWORD *)(v10 + 224)),
         (v11 = sub_14077FFEC(v13, (_DWORD)v17, a4, 0, 1, (__int64)&Handle), v11 < 0)
      || (v14 = Handle, *v7 = 1, v11 = sub_14077FC64(v14, (__int64)&v19), v11 < 0))) )
  {
    if ( v11 == -1073741772 || v11 == -1073741444 )
      v11 = 0;
  }
  else
  {
    *v9 = 1;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  if ( v18[0] )
    ZwClose(v18[0]);
  return (unsigned int)v11;
}
