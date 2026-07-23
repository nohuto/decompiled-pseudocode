/*
 * XREFs of sub_14083DEC8 @ 0x14083DEC8
 * Callers:
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406E87E8 @ 0x1406E87E8 (sub_1406E87E8.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083DEC8(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _WORD *a7,
        unsigned int a8,
        unsigned int *a9,
        __int16 a10)
{
  __int64 v12; // rdi
  int v13; // r13d
  char v14; // r12
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 Pool2; // rax
  int v19; // eax
  void *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-38h] BYREF

  v25 = 0LL;
  v12 = 0LL;
  *a9 = 0;
  Handle = 0LL;
  UnicodeString = 0LL;
  if ( a8 )
    *a7 = 0;
  if ( (a4 & 0xFFFFFFFE) != 0 || a10 )
    goto LABEL_25;
  v13 = 1;
  v14 = a4 & 1;
  v15 = sub_14078014C(a1, 9, (__int64)&v25);
  if ( v15 < 0 )
    goto LABEL_19;
  if ( !a2 )
    goto LABEL_7;
  if ( !sub_1406E87E8(a2) )
  {
LABEL_25:
    v15 = -1073741811;
    goto LABEL_19;
  }
  v13 = 2;
LABEL_7:
  if ( a1 )
    v16 = *(_QWORD *)(a1 + 224);
  else
    v16 = 0LL;
  v17 = sub_14077FFEC(v16, v25, (__int64)a2, 0, 8u, (__int64)&Handle);
  v15 = v17;
  if ( v17 == -1073741444 )
  {
    v15 = -1073741595;
  }
  else if ( v17 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 1464LL, 1380994640LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = v13;
      sub_1402E0340((_WORD *)(Pool2 + 1012), 0xC8uLL, a3, 0LL, 0LL, 2304);
      *(_QWORD *)(v12 + 1432) = a5;
      *(_QWORD *)(v12 + 1440) = a6;
      *(_QWORD *)(v12 + 1416) = 0LL;
      *(_DWORD *)(v12 + 1424) = 0;
      *(_BYTE *)(v12 + 1428) = v14;
      *(_QWORD *)(v12 + 1448) = a7;
      *(_QWORD *)(v12 + 1456) = a8;
      v19 = sub_14083EAEC(a1, Handle, sub_14083E6C0, v12);
      v20 = *(void **)(v12 + 1416);
      v15 = v19;
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( v15 >= 0 )
      {
        v21 = *(_DWORD *)(v12 + 1460);
        *a9 = v21;
        if ( v21 )
        {
          v22 = v21 + 1;
          *a9 = v22;
          if ( a7 && a8 >= v22 )
            a7[v22 - 1] = 0;
          else
            v15 = -1073741789;
        }
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
LABEL_19:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
    ExFreePoolWithTag((PVOID)v12, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
