/*
 * XREFs of sub_14076D4A4 @ 0x14076D4A4
 * Callers:
 *     sub_14076D390 @ 0x14076D390 (sub_14076D390.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14076D6D4 @ 0x14076D6D4 (sub_14076D6D4.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14076D4A4(__int64 a1, int a2, int a3, __int64 a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  wchar_t *Pool2; // rdi
  int v10; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  int v14; // r9d
  int v15; // eax
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  int v18; // r15d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  Pool2 = 0LL;
  v25 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_32;
  v13 = 260;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 260LL, 1380994640LL);
  if ( !Pool2 )
  {
LABEL_39:
    inited = -1073741801;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v15 = sub_14076D6D4(v13 >> 1, v10, a3, v14);
    inited = v15;
    if ( v15 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v13 = 0;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0LL, 1380994640LL);
    if ( !Pool2 )
      goto LABEL_39;
    v10 = a2;
  }
  if ( v15 >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (int)Pool2;
      if ( a1 )
        v23 = *(_QWORD *)(a1 + 224);
      else
        v23 = 0LL;
      inited = sub_140A2CF6C(v23, 0LL, 0x2000000LL, &Handle);
      if ( inited < 0 )
        goto LABEL_24;
      v19 = (int)Handle;
LABEL_15:
      if ( a6 )
      {
        v21 = sub_140772AA0(a1, v19, v18, 0, a5, 0LL, a7, (__int64)a8);
      }
      else
      {
        if ( a1 )
          v20 = *(_QWORD *)(a1 + 224);
        else
          LODWORD(v20) = 0;
        v21 = sub_14077FFEC(v20, v19, v18, 0, a5, a7);
        if ( v21 >= 0 )
        {
          *a8 = 2;
          goto LABEL_24;
        }
      }
      if ( v21 == -1073741444 )
      {
        inited = -1073741595;
      }
      else if ( v21 < 0 )
      {
        inited = v21;
      }
      goto LABEL_24;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
    if ( inited < 0 )
      goto LABEL_24;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v13
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(&stru_140001000, &DestinationString, 1u) )
    {
      v18 = (_DWORD)Pool2 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = Pool2 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&stru_1400021F0, &DestinationString, 1u) )
      {
        v12 = 10;
        v18 = (_DWORD)Pool2 + 100;
      }
      inited = sub_14078014C(a1, v12, &v25);
      if ( inited < 0 )
        goto LABEL_24;
      v19 = v25;
      goto LABEL_15;
    }
LABEL_32:
    inited = -1073741811;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
