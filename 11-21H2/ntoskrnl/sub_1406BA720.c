/*
 * XREFs of sub_1406BA720 @ 0x1406BA720
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BAA98 @ 0x1406BAA98 (sub_1406BAA98.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_1406BACDC @ 0x1406BACDC (sub_1406BACDC.c)
 *     sub_1406BAD74 @ 0x1406BAD74 (sub_1406BAD74.c)
 *     sub_1406BAE14 @ 0x1406BAE14 (sub_1406BAE14.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 */

__int64 __fastcall sub_1406BA720(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE v9; // r14
  int v10; // edi
  int v11; // edi
  int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r9
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  v19 = 0LL;
  *v7 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v10 = sub_1406BAA98(a1, a2, a5, &v19);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v20;
  if ( (_QWORD)v20 && DWORD2(v19) == 1 && a3 && a4 >= 0x10 )
  {
    v12 = sub_1406BAE14(DWORD1(v19), &a6);
    if ( v12 >= 0 )
    {
      v13 = HIDWORD(v20);
      v12 = sub_14077F2EC(qword_140D00AC0, v11, (_DWORD)a6, DWORD1(v21), HIDWORD(v20), 0, (__int64)&Handle, 0LL);
      if ( v12 != -1073741772 )
        goto LABEL_8;
      if ( (_DWORD)v21 == 1 )
      {
        if ( (unsigned __int8)sub_14078A600(2LL) )
        {
          v12 = sub_14077F2EC(qword_140D00AC0, v11, (_DWORD)a6, DWORD1(v21), v13, 1, (__int64)&Handle, 0LL);
LABEL_8:
          if ( v12 >= 0 )
          {
            LOBYTE(v15) = v9;
            v12 = sub_1406BAD74(Handle, v14, v13, v15, &v18);
          }
          goto LABEL_10;
        }
        v12 = -1073741790;
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_10:
  v10 = sub_1406BACDC((unsigned int)v12, v18, DWORD2(v21), a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v18 )
      ObCloseHandle(v18, v9);
  }
LABEL_14:
  sub_1406BACAC(&v19);
  return (unsigned int)v10;
}
