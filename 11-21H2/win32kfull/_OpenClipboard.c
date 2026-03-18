/*
 * XREFs of _OpenClipboard @ 0x1C00CCE18
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00CCB80 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C014C61C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  struct tagWINDOWSTATION *v5; // rax
  __int64 v6; // rdx
  struct tagWINDOWSTATION *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87LL, (__int64)a2);
  }
  else
  {
    v5 = CheckClipboardAccess();
    v7 = v5;
    if ( v5 )
    {
      v8 = (_QWORD *)((char *)v5 + 96);
      if ( a1 == *v8 )
      {
        if ( gptiCurrent == *((_QWORD *)v7 + 10) )
          return 1LL;
LABEL_8:
        v11[0] = v8;
        v11[1] = a1;
        HMAssignmentLock(v11, 0LL);
        *((_QWORD *)v7 + 10) = gptiCurrent;
        if ( a2 )
        {
          v9 = *((_QWORD *)v7 + 14);
          if ( !v9 || *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 712LL) = *((_DWORD *)v7 + 35);
        }
        return 1LL;
      }
      if ( !*((_QWORD *)v7 + 10) )
        goto LABEL_8;
      UserSetLastError(5LL, v6);
      if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          *(_QWORD *)(*((_QWORD *)v7 + 10) + 424LL),
          &unk_1C02EFDEB);
    }
  }
  return 0LL;
}
