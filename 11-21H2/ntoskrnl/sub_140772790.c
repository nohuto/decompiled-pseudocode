/*
 * XREFs of sub_140772790 @ 0x140772790
 * Callers:
 *     sub_140771FFC @ 0x140771FFC (sub_140771FFC.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 */

__int64 __fastcall sub_140772790(__int64 a1, __int64 a2, WCHAR *a3, __int64 a4, int a5, void *a6, ULONG a7)
{
  __int16 v7; // r11
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  HANDLE v20; // [rsp+90h] [rbp-80h] BYREF
  HANDLE v21; // [rsp+98h] [rbp-78h]
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  int v23; // [rsp+A4h] [rbp-6Ch] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-60h]
  void *v26; // [rsp+B8h] [rbp-58h]
  __int64 v27; // [rsp+C0h] [rbp-50h] BYREF
  wchar_t Dst[12]; // [rsp+C8h] [rbp-48h] BYREF
  _WORD v29[40]; // [rsp+E0h] [rbp-30h] BYREF

  v7 = 0;
  v25 = a2;
  v26 = a6;
  v23 = 0;
  v22 = 0;
  v21 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v11 = sub_1402DF9D0(a3, 85LL, &v27);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  if ( a5 == 25 && a3 && *a3 != v7 )
    return (unsigned int)-1073741811;
  if ( (int)sub_1402DFBC4(
              v29,
              0x27uLL,
              0LL,
              0LL,
              0x800u,
              L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
              *(_DWORD *)a4,
              *(unsigned __int16 *)(a4 + 4),
              *(unsigned __int16 *)(a4 + 6),
              *(unsigned __int8 *)(a4 + 8),
              *(unsigned __int8 *)(a4 + 9),
              *(unsigned __int8 *)(a4 + 10),
              *(unsigned __int8 *)(a4 + 11),
              *(unsigned __int8 *)(a4 + 12),
              *(unsigned __int8 *)(a4 + 13),
              *(unsigned __int8 *)(a4 + 14),
              *(unsigned __int8 *)(a4 + 15)) < 0 )
    goto LABEL_26;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  v11 = sub_14077EF20(a1, v25, 0, 4, 1);
  if ( v11 < 0 )
  {
    v21 = 0LL;
    goto LABEL_13;
  }
  v12 = sub_140772A24(a1, (_DWORD)v21, (unsigned int)v29, 0, 4, 0LL, (__int64)&v20, (__int64)&v23);
  if ( v12 == -1073741444 )
    goto LABEL_26;
  if ( v12 < 0 )
  {
    v20 = 0LL;
    v11 = v12;
    goto LABEL_13;
  }
  v13 = sub_140772A24(a1, (_DWORD)v20, (unsigned int)Dst, 0, 65542, 0LL, (__int64)&Handle, (__int64)&v22);
  if ( v13 == -1073741444 )
  {
LABEL_26:
    v11 = -1073741595;
LABEL_13:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v11 < 0 && v22 == 1 )
      {
        if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
          v17 = *(_QWORD *)(v16 + 8);
        else
          v17 = 0LL;
        sub_1406CB238((__int64)v20, (__int64)Dst, v17, 0);
      }
    }
    goto LABEL_15;
  }
  if ( v13 >= 0 )
  {
    v14 = sub_1406D5A30(Handle, a3, a5 | 0xFFFF0000, v26, a7);
    if ( v14 != -1073741444 )
    {
      if ( v14 < 0 )
        v11 = v14;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  Handle = 0LL;
  v11 = v13;
LABEL_15:
  if ( v20 )
  {
    ZwClose(v20);
    if ( v11 < 0 && v23 == 1 )
    {
      if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      sub_1406CB238((__int64)v21, (__int64)v29, v19, 0);
    }
  }
  if ( v21 )
    ZwClose(v21);
  return (unsigned int)v11;
}
