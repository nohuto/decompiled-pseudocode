/*
 * XREFs of sub_14076CA78 @ 0x14076CA78
 * Callers:
 *     sub_14076C91C @ 0x14076C91C (sub_14076C91C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14076CC54 @ 0x14076CC54 (sub_14076CC54.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A25858 @ 0x140A25858 (sub_140A25858.c)
 */

__int64 __fastcall sub_14076CA78(__int64 a1, __int64 a2, int a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int v10; // ebx
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  _BYTE v17[4]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+44h] [rbp-2Ch] BYREF
  int v19; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v22; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  *a5 = 0;
  v17[0] = 0;
  v19 = 0;
  v18 = 0;
  v10 = sub_14076CC54(a1, a2, a3, (unsigned int)&v22, (__int64)v17);
  if ( v10 >= 0 )
  {
    v10 = sub_140772A24(a1, (_DWORD)v22, (unsigned int)L"BaseContainers", 0, 4, 0LL, (__int64)&v21, (__int64)&v19);
    if ( v10 >= 0 )
    {
      v10 = sub_140772A24(a1, (_DWORD)v21, a3, 0, 3, 0LL, (__int64)&Handle, (__int64)&v18);
      if ( v10 >= 0 )
      {
        if ( v18 == 2 )
        {
          LODWORD(a5) = 0;
          v11 = sub_14077FC64(Handle, (__int64)&a5);
          v10 = v11;
          if ( v11 == -1073741772 || v11 == -1073741444 )
          {
            v10 = 0;
          }
          else
          {
            if ( !v11 )
            {
              *v5 = 1;
              goto LABEL_9;
            }
            if ( v11 < 0 )
            {
LABEL_22:
              if ( v10 >= 0 )
                goto LABEL_9;
              goto LABEL_25;
            }
          }
        }
        if ( *v5 )
          goto LABEL_22;
        v10 = sub_1406D5A30(Handle, a4, 0, 0LL, 0);
        if ( v10 >= 0 )
        {
          sub_1407720B8(a1, (_DWORD)a4, 1, 0, 0LL, (__int64)&qword_140010A78);
          goto LABEL_9;
        }
      }
    }
  }
  if ( v10 != -1073741444 )
    goto LABEL_22;
  v10 = -1073741772;
LABEL_25:
  if ( v18 == 1 )
  {
    if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
      v14 = *(_QWORD *)(v13 + 8);
    else
      v14 = 0LL;
    sub_140862B44(Handle, 0LL, v14);
  }
  if ( v19 == 1 )
  {
    if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
      v16 = *(_QWORD *)(v15 + 8);
    else
      v16 = 0LL;
    sub_140862B44(v21, 0LL, v16);
  }
  if ( v17[0] == 1 )
    sub_140A25858(a1, a2);
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)v10;
}
