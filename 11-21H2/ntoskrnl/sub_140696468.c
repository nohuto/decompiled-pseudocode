/*
 * XREFs of sub_140696468 @ 0x140696468
 * Callers:
 *     sub_1406962A4 @ 0x1406962A4 (sub_1406962A4.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140205950 (RtlInsertEntryHashTable.c)
 *     sub_14069654C @ 0x14069654C (sub_14069654C.c)
 *     sub_140696E04 @ 0x140696E04 (sub_140696E04.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140696468(__int64 a1, int *a2, _BYTE *a3, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  _RTL_DYNAMIC_HASH_TABLE *v4; // rbp
  unsigned int v5; // ebx
  int v6; // ecx
  ULONG_PTR v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v15; // rdi
  ULONG HashValue; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  v5 = 0;
  v6 = *a2;
  v17 = 0LL;
  Entry = 0LL;
  HashValue = 0;
  v10 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      RtlHashUnicodeString((PCUNICODE_STRING)(a2 + 2), 1u, 0, &HashValue);
      v10 = HashValue;
    }
  }
  else
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = (unsigned int)*(unsigned __int8 *)(v11 + 1) - 1;
    v13 = *(unsigned int *)(v11 + 4 * v12 + 8);
    v10 = v13 + 1;
    if ( (_DWORD)v13 )
      v10 = *(unsigned int *)(v11 + 4 * v12 + 8);
  }
  *a3 = 0;
  sub_14069654C(v4);
  if ( v17 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24)) <= 1 )
      __fastfail(0xEu);
    *a4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v17;
    result = 0LL;
    *a3 = 1;
  }
  else
  {
    result = sub_140696E04(a2, &Entry);
    if ( (int)result >= 0 )
    {
      v15 = Entry;
      if ( RtlInsertEntryHashTable(v4, Entry, v10, 0LL) )
      {
        *a4 = v15;
      }
      else
      {
        ExFreePoolWithTag(v15, 0);
        return (unsigned int)-1073741670;
      }
      return v5;
    }
  }
  return result;
}
