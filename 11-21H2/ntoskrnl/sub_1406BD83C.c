/*
 * XREFs of sub_1406BD83C @ 0x1406BD83C
 * Callers:
 *     sub_1406BD5D8 @ 0x1406BD5D8 (sub_1406BD5D8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BD994 @ 0x1406BD994 (sub_1406BD994.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 *     sub_140A2B388 @ 0x140A2B388 (sub_140A2B388.c)
 */

__int64 __fastcall sub_1406BD83C(__int64 a1, int a2, void *a3, __int64 a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  __int64 *v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r12
  int v17; // ebx
  int v18; // r13d
  int v19; // eax
  __int64 v21; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v23; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 20 )
    goto LABEL_2;
  v21 = *(_QWORD *)a4 - 0x40E856266A3433F4LL;
  if ( *(_QWORD *)a4 == 0x40E856266A3433F4LL )
    v21 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
  v12 = qword_14000EA58;
  if ( v21 )
LABEL_2:
    v12 = qword_14000EA40;
  if ( a3 )
  {
    v13 = (int)a3;
    Handle = a3;
  }
  else
  {
    v17 = sub_140789460(a1, a2, 0, a4, 33554433, 0, (__int64)&Handle, 0LL);
    if ( v17 < 0 )
      goto LABEL_10;
    v13 = (int)Handle;
  }
  if ( a1 )
    v14 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v14) = 0;
  v15 = sub_14077FFEC(v14, v13, (unsigned int)L"Filters", 0, 131103, (__int64)&v23);
  v16 = a8;
  v17 = v15;
  v18 = a7;
  if ( v15 < 0
    || (v19 = sub_140A2B388(a1, a2, (_DWORD)Handle, (_DWORD)v23, a4, (__int64)v12, a5, a6, a7, a8), v19 == -1073741772)
    || v19 == -1073741444
    || v19 == -1073741275 )
  {
    v19 = sub_1406BD994(a1, a2, (_DWORD)Handle, (_DWORD)v12, a5, a6, v18, v16);
  }
  else if ( v19 >= 0 )
  {
    goto LABEL_10;
  }
  v17 = v19;
LABEL_10:
  if ( Handle && !a3 )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v17;
}
