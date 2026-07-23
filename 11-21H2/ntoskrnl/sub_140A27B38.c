/*
 * XREFs of sub_140A27B38 @ 0x140A27B38
 * Callers:
 *     sub_140A279F4 @ 0x140A279F4 (sub_140A279F4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     sub_140A27D84 @ 0x140A27D84 (sub_140A27D84.c)
 *     sub_140A27F90 @ 0x140A27F90 (sub_140A27F90.c)
 */

__int64 __fastcall sub_140A27B38(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  int v13; // [rsp+40h] [rbp-20h] BYREF
  ULONG v14; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v13 = 0;
  *a4 = 0;
  v17 = 0;
  v8 = sub_140A27D84(a1, a2, (_DWORD)a3, (unsigned int)&v16, (__int64)&v17);
  if ( v8 >= 0 )
  {
    v8 = sub_140772A24(a1, (__int64)v16, (__int64)L"Devices", 0, 7u, 0LL, (__int64)&Handle, (__int64)&v13);
    if ( v8 >= 0 )
    {
      if ( v13 == 2 )
      {
        v14 = 0;
        v9 = sub_14077FC64(Handle, a3, 0LL, 0LL, &v14);
        v8 = v9;
        if ( v9 == -1073741772 || v9 == -1073741444 )
        {
          v8 = 0;
        }
        else
        {
          if ( !v9 )
          {
            *a4 = 1;
            goto LABEL_24;
          }
          if ( v9 < 0 )
          {
LABEL_9:
            if ( v8 >= 0 )
              goto LABEL_24;
            goto LABEL_10;
          }
        }
      }
      if ( *a4 )
        goto LABEL_9;
      v8 = sub_1406D5A30(Handle, a3, 0, 0LL, 0);
      if ( v8 >= 0 )
      {
        sub_1407720B8(a1, (__int64)a3, 1, 0LL, 0LL, (__int64)&qword_140010A60);
        goto LABEL_24;
      }
    }
  }
  if ( v8 != -1073741444 )
    goto LABEL_9;
  v8 = -1073741772;
LABEL_10:
  if ( v13 == 1 )
  {
    if ( a1 && (v10 = *(_QWORD *)(a1 + 224)) != 0 )
      v11 = *(_QWORD *)(v10 + 8);
    else
      v11 = 0LL;
    sub_140862B44((char *)Handle, 0LL, v11);
  }
  if ( v17 == 1 )
    sub_140A27F90(a1, a2);
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  return (unsigned int)v8;
}
