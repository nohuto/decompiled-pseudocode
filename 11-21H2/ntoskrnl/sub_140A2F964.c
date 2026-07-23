/*
 * XREFs of sub_140A2F964 @ 0x140A2F964
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14081D304 @ 0x14081D304 (sub_14081D304.c)
 *     sub_140A2F540 @ 0x140A2F540 (sub_140A2F540.c)
 *     sub_140A2F5D0 @ 0x140A2F5D0 (sub_140A2F5D0.c)
 */

__int64 __fastcall sub_140A2F964(__int64 *a1, __int64 a2, void *a3, __int64 a4, int a5, int *a6, ULONG a7)
{
  int v9; // r9d
  HANDLE v10; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v16; // esi
  int v17; // eax
  __int64 v18; // rax
  const wchar_t *v19; // r8
  unsigned int v20; // eax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v9 = *(_DWORD *)(a4 + 16);
  v10 = 0LL;
  Handle = 0LL;
  if ( v9 == 2 )
  {
    v13 = *(_QWORD *)a4 - 0x4F7A142C8163EB04LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB04LL )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( *((_DWORD *)&qword_140010B50 + 4) != v9 )
    return (unsigned int)-1073741802;
  v15 = 0x4F7A142C8163EB04LL - *(_QWORD *)a4;
  if ( *(_QWORD *)a4 == 0x4F7A142C8163EB04LL )
    v15 = *(&qword_140010B50 + 1) - *(_QWORD *)(a4 + 8);
  if ( v15 || !&off_14000AE78 )
    return (unsigned int)-1073741802;
  v16 = a5;
  if ( a5 != *((_DWORD *)&off_14000AE78 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3 || (v17 = sub_140A2F540(a1, a2, 3, 0, (__int64)&Handle, 0LL), v10 = Handle, v14 = v17, v17 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_30;
    v18 = *(_QWORD *)a4 - 0x4F7A142C8163EB04LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB04LL )
      v18 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v18 )
    {
LABEL_30:
      if ( a3 )
        v10 = a3;
      v20 = sub_14081D304((__int64)v10, v10, (__int64)&off_14000AE78, v16, a6, a7);
    }
    else
    {
      if ( v16 == 8210 )
      {
        v19 = (const wchar_t *)a6;
        if ( !a6 || !a7 )
        {
LABEL_23:
          v14 = -1073741811;
          goto LABEL_34;
        }
      }
      else
      {
        if ( v16 )
          goto LABEL_23;
        v19 = (const wchar_t *)a6;
        if ( a6 || a7 )
          goto LABEL_23;
      }
      if ( a3 )
        v10 = a3;
      v20 = sub_140A2F5D0((__int64)v10, v10, v19);
    }
    v10 = Handle;
    v14 = v20;
  }
LABEL_34:
  if ( v10 )
    ZwClose(v10);
  return v14;
}
