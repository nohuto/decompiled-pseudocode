/*
 * XREFs of CallbackRoutine @ 0x1C0073FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0073CD4 @ 0x1C0073CD4 (sub_1C0073CD4.c)
 */

void __fastcall CallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( qword_1C0093BE0 && *(_DWORD *)(*(_QWORD *)(qword_1C0093BE0 + 24) + 4868LL) )
  {
    v5 = ReasonSpecificData[4];
    if ( !v5 )
    {
      v6 = 7776;
LABEL_8:
      *((_DWORD *)ReasonSpecificData + 10) = v6;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_1C0089F48;
      return;
    }
    v7 = (_DWORD *)*ReasonSpecificData;
    if ( *ReasonSpecificData == v5 )
    {
      v8 = *((_DWORD *)ReasonSpecificData + 2);
      if ( (int)sub_1C0073CD4(Reason, v7, &v8) >= 0 )
      {
        v6 = v8;
        goto LABEL_8;
      }
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 0;
  }
}
