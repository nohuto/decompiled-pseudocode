/*
 * XREFs of sub_1409CF26C @ 0x1409CF26C
 * Callers:
 *     sub_1403DA7FC @ 0x1403DA7FC (sub_1403DA7FC.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140205950 (RtlInsertEntryHashTable.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     sub_1405F5CE4 @ 0x1405F5CE4 (sub_1405F5CE4.c)
 *     sub_1406959BC @ 0x1406959BC (sub_1406959BC.c)
 *     sub_1409CF5C8 @ 0x1409CF5C8 (sub_1409CF5C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CF26C(HANDLE KeyHandle, int a2, __int64 a3)
{
  int v3; // eax
  ULONG v4; // r14d
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rsi
  unsigned int *Pool2; // rdi
  int v8; // ebx
  ULONG v9; // r13d
  ULONG v10; // r15d
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int v13; // eax
  _RTL_DYNAMIC_HASH_TABLE *v14; // r10
  __int64 v15; // rdx
  ULONG_PTR v16; // r8
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[344]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *(_DWORD *)(a3 + 48);
  v4 = a2 + 50;
  HashTable = (PRTL_DYNAMIC_HASH_TABLE)a3;
  v6 = 0LL;
  v22 = *(_QWORD *)(a3 + 56);
  Entry = 0LL;
  KeyHandlea = 0LL;
  Length = 0;
  v21 = v3;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(a2 + 50), 1884513619LL);
  if ( !Pool2 )
  {
LABEL_2:
    v8 = -1073741670;
    goto LABEL_30;
  }
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, v4, &Length);
  if ( v8 >= 0 )
    goto LABEL_8;
  if ( v8 != -2147483643 && v8 != -1073741789 )
  {
LABEL_28:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x70536553u);
    goto LABEL_30;
  }
  Pool2 = (unsigned int *)sub_1405F5CE4(Pool2, Length);
  if ( !Pool2 )
    goto LABEL_2;
  v4 = Length;
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
  if ( v8 >= 0 )
  {
LABEL_8:
    v9 = Pool2[5];
    v10 = 0;
    if ( !v9 )
    {
LABEL_33:
      ExFreePoolWithTag(Pool2, 0x70536553u);
      return (unsigned int)v8;
    }
    while ( 1 )
    {
      v11 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, Pool2, v4, &Length);
      v8 = v11;
      if ( v11 < 0 )
      {
        if ( v11 != -2147483643 && v11 != -1073741789 )
          goto LABEL_28;
        Pool2 = (unsigned int *)sub_1405F5CE4(Pool2, Length);
        if ( !Pool2 )
          goto LABEL_2;
        v4 = Length;
        v8 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, Pool2, Length, &Length);
        if ( v8 < 0 )
          break;
      }
      *((_WORD *)Pool2 + ((unsigned __int64)Pool2[3] >> 1) + 8) = 0;
      v8 = sub_1402E0198(
             SourceString,
             342LL,
             L"%s\\%s",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
             Pool2 + 4);
      if ( v8 < 0 )
        break;
      v8 = sub_1406959BC(SourceString, 0x201u, &KeyHandlea);
      if ( v8 < 0 )
        break;
      v12 = ZwQueryKey(KeyHandlea, KeyFullInformation, Pool2, v4, &Length);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_28;
        Pool2 = (unsigned int *)sub_1405F5CE4(Pool2, Length);
        if ( !Pool2 )
          goto LABEL_2;
        v4 = Length;
        v8 = ZwQueryKey(KeyHandlea, KeyFullInformation, Pool2, Length, &Length);
        if ( v8 < 0 )
          break;
      }
      v13 = sub_1409CF5C8(KeyHandlea, (__int64)&Entry);
      v6 = Entry;
      v8 = v13;
      if ( v13 < 0 )
        goto LABEL_28;
      v14 = HashTable;
      Entry[1].Linkage.Blink = (struct _LIST_ENTRY *)HashTable;
      v15 = *((unsigned int *)&v6[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v6[1].Linkage.Flink->Flink) + 1);
      v16 = v15 + 1;
      if ( (_DWORD)v15 )
        v16 = *((unsigned int *)&v6[1].Linkage.Flink->Flink + (unsigned int)BYTE1(v6[1].Linkage.Flink->Flink) + 1);
      if ( !RtlInsertEntryHashTable(v14, v6, v16, 0LL) )
      {
        v8 = -1073741670;
        goto LABEL_28;
      }
      v6 = 0LL;
      Entry = 0LL;
      ZwClose(KeyHandlea);
      ++v10;
      KeyHandlea = 0LL;
      if ( v10 >= v9 )
        goto LABEL_32;
    }
  }
LABEL_30:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
LABEL_32:
  if ( Pool2 )
    goto LABEL_33;
  return (unsigned int)v8;
}
