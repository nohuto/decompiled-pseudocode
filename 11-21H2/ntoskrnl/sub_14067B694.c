/*
 * XREFs of sub_14067B694 @ 0x14067B694
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_140B0EFD8 @ 0x140B0EFD8 (sub_140B0EFD8.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 *     sub_140B127A0 @ 0x140B127A0 (sub_140B127A0.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14067B694(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  int v6; // ecx
  unsigned int v7; // r15d
  unsigned __int16 *Pool2; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx
  wchar_t *v12; // rax
  _WORD *v14; // r10
  unsigned int v15; // ecx
  __int16 *v16; // r8
  unsigned int i; // r9d
  __int16 v18; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  P = 0LL;
  if ( (int)sub_14067B838(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v14 = P;
      v15 = (unsigned __int16)(*((_WORD *)P + 6) - 2);
      Destination->Length = v15;
      Destination->MaximumLength = v4[6];
      v16 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v15 >> 1; i; --i )
      {
        v18 = *v16++;
        *v14++ = v18;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_27;
  }
  Source = 0LL;
  if ( (int)sub_14067B838(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = L"\\Driver\\";
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v6 == 2 || (v7 = 16, v6 == 8) )
      {
        v5 = L"\\FileSystem\\";
        v7 = 24;
      }
      Length = 164;
      Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 164LL, 538996553LL);
      if ( !Pool2 )
        goto LABEL_22;
      v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
      v10 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, Length, 538996553LL);
        if ( !Pool2 )
          goto LABEL_22;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_27;
      }
      v11 = v7 + *((_DWORD *)Pool2 + 3);
      if ( v11 < v7 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v10 = -1073741675;
        goto LABEL_27;
      }
      v12 = (wchar_t *)ExAllocatePool2(64LL, (unsigned __int16)(v7 + Pool2[6]), 538996553LL);
      Destination->Buffer = v12;
      if ( v12 )
      {
        Destination->Length = 0;
        Destination->MaximumLength = v11;
        RtlAppendUnicodeToString(Destination, v5);
        Source.Length = Pool2[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = Pool2 + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(Pool2, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(Pool2, 0);
LABEL_22:
      v10 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)v10;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
