/*
 * XREFs of sub_140769668 @ 0x140769668
 * Callers:
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_1407697FC @ 0x1407697FC (sub_1407697FC.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140769668(__int64 a1, UNICODE_STRING *a2)
{
  void *Pool2; // rdi
  NTSTATUS appended; // ebx
  int v6; // ecx
  UNICODE_STRING *v7; // rcx
  int v9; // ecx
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  Pool2 = 0LL;
  v11 = 0LL;
  appended = sub_140779CA0(&v11, 0LL, a1);
  if ( appended < 0 )
    goto LABEL_9;
  v10 = 512;
  Pool2 = (void *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
  if ( !Pool2 )
    goto LABEL_15;
  appended = sub_1407697FC(v6, v11, (_DWORD)Pool2, 512, (__int64)&v10);
  if ( appended != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(Pool2, 0);
  Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v10, 538996816LL);
  if ( !Pool2 )
  {
LABEL_15:
    appended = -1073741670;
    goto LABEL_9;
  }
  appended = sub_1407697FC(v9, v11, (_DWORD)Pool2, v10, (__int64)&v10);
LABEL_4:
  if ( appended < 0 )
  {
    if ( appended == -1073741773 )
      appended = -1073741811;
  }
  else if ( 2 * v10 + 20 > 0xFFFF )
  {
    appended = -1073741675;
  }
  else
  {
    appended = sub_140769784(a2);
    if ( appended < 0 )
      goto LABEL_9;
    appended = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v7 = a2;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(a2, (PCWSTR)Pool2);
      if ( appended >= 0 )
        goto LABEL_9;
      v7 = a2;
    }
    RtlFreeUnicodeString(v7);
  }
LABEL_9:
  sub_14077BAB8(v11, a1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)appended;
}
