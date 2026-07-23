/*
 * XREFs of sub_1409269C4 @ 0x1409269C4
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409269C4(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rdi
  BOOLEAN v11; // al
  __int64 v12; // rcx
  int v13; // eax
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  String1 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(stru_140D3CA58, a3) && SeSinglePrivilegeCheck(stru_140D3CA70, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D01850, 0LL);
    v9 = qword_140D01848;
    v10 = &qword_140D01848;
    if ( qword_140D01848 )
    {
      while ( 1 )
      {
        String2.Buffer = (wchar_t *)(v9 + 10);
        String2.Length = *(_WORD *)(v9 + 8);
        String2.MaximumLength = String2.Length;
        v11 = RtlEqualUnicodeString(&String1, &String2, 1u);
        v12 = *(_QWORD *)v9;
        if ( v11 )
          break;
        v10 = (__int64 *)v9;
        v9 = *(_QWORD *)v9;
        if ( !v12 )
          goto LABEL_16;
      }
      *v10 = v12;
      v5 = (_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
LABEL_16:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D01850, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140D01850);
    sub_1402AFC00((ULONG_PTR)&qword_140D01850);
    if ( v5 )
    {
      v13 = sub_1407F6200(&String1);
      if ( v13 == -1073741772 || (v6 = v13, v13 >= 0) )
      {
        ExFreePoolWithTag(v5, 0);
        return 0;
      }
      else
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D01850, 0LL);
        *v5 = qword_140D01848;
        qword_140D01848 = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D01850, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D01850);
        sub_1402AFC00((ULONG_PTR)&qword_140D01850);
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
