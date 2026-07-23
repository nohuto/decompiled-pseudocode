/*
 * XREFs of sub_140745F48 @ 0x140745F48
 * Callers:
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_140A2AAB0 @ 0x140A2AAB0 (sub_140A2AAB0.c)
 */

__int64 __fastcall sub_140745F48(__int64 a1, int a2, void *a3, __int64 a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  unsigned int v8; // ebx
  __int64 *v13; // r14
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r12
  int v18; // r13d
  int v19; // eax
  __int64 v21; // rax
  int v22; // eax
  HANDLE v23; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 0;
  v23 = 0LL;
  Handle = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 22 )
    goto LABEL_2;
  v21 = *(_QWORD *)a4 - 0x408897A683DA6326LL;
  if ( *(_QWORD *)a4 == 0x408897A683DA6326LL )
    v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v13 = qword_14000FCB8;
  if ( v21 )
LABEL_2:
    v13 = qword_14000FCA0;
  if ( a3 )
  {
    v14 = (int)a3;
    v23 = a3;
  }
  else
  {
    v22 = sub_14077F2EC(a1, a2, 16, 0, 33554433, 0, (__int64)&v23, 0LL);
    if ( v22 < 0 )
    {
LABEL_27:
      v8 = v22;
      goto LABEL_10;
    }
    v14 = (int)v23;
  }
  if ( a1 )
    v15 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v15) = 0;
  v16 = sub_14077FFEC(v15, v14, (unsigned int)L"Filters", 0, 131103, (__int64)&Handle);
  v17 = a8;
  v18 = a7;
  if ( v16 >= 0 )
  {
    v22 = sub_140A2AAB0(a1, a2, (_DWORD)v23, (_DWORD)Handle, a4, (__int64)v13, a5, a6, a7, a8);
    if ( v22 != -1073741772 && v22 != -1073741444 && v22 != -1073741275 )
    {
      if ( v22 >= 0 )
        goto LABEL_10;
      goto LABEL_27;
    }
  }
  v19 = sub_140785B98(a1, a2, (_DWORD)v23, (_DWORD)v13, a5, a6, v18, v17, 0);
  if ( v19 < 0 )
    v8 = v19;
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 && !a3 )
    ZwClose(v23);
  return v8;
}
