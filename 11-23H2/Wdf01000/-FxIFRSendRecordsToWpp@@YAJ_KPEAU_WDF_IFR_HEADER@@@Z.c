/*
 * XREFs of ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C0027390
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0027070 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 *     ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C002763C (-FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z.c)
 */

__int64 __fastcall FxIFRSendRecordsToWpp(unsigned __int64 LoggerHandle, _WDF_IFR_HEADER *HeaderCopy)
{
  unsigned int Size; // r8d
  unsigned __int8 *Base; // r14
  unsigned int v4; // r13d
  unsigned __int64 v5; // rbp
  __int64 Previous; // r15
  _WDF_IFR_RECORD *v7; // rsi
  int v8; // ebx
  unsigned int v9; // r10d
  unsigned int v10; // edi
  char v11; // r12
  _WORD *v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int16 v14; // r11
  __int64 v15; // rax
  unsigned __int8 *v16; // rdx
  unsigned __int16 v17; // ax
  __int64 Pool2; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+A8h] [rbp+10h]

  Size = HeaderCopy->Size;
  Base = HeaderCopy->Base;
  v21 = 0;
  v4 = Size / 0x48;
  v5 = (unsigned __int64)&Base[Size - 1];
  if ( v5 < (unsigned __int64)Base )
    return (unsigned int)-1073741675;
  if ( v5 < 0x24 )
    return (unsigned int)-1073741675;
  Previous = HeaderCopy->Offset.u.s.Previous;
  v7 = (_WDF_IFR_RECORD *)&Base[Previous];
  if ( &Base[Previous] < Base )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v8 = FxIFRValidateRecord((_WDF_IFR_RECORD *)&Base[Previous], v5 - 36, (unsigned __int64)&Base[Size - 1]);
    if ( v8 >= 0 && v7->Signature != (_WORD)v9 )
    {
      v10 = v9;
      v11 = v9;
      Pool2 = ExAllocatePool2(256LL, 2LL * v4, 1733064774LL);
      v12 = (_WORD *)Pool2;
      if ( Pool2 )
      {
        if ( v4 )
        {
          v13 = v5 - 36;
          while ( 1 )
          {
            v8 = FxIFRValidateRecord(v7, v13, v5);
            if ( v8 < 0 || v7->Signature != 12876 )
              break;
            v15 = v10++;
            v12[v15] = Previous;
            if ( v7 == (_WDF_IFR_RECORD *)Base )
              v11 = 1;
            Previous = v7->PrevOffset;
            v7 = (_WDF_IFR_RECORD *)&Base[Previous];
            if ( &Base[Previous] < Base )
            {
              v8 = -1073741675;
              break;
            }
            if ( !v11 || (v8 = 0, (_WORD)Previous) )
            {
              if ( !v21 || (v8 = 0, (unsigned __int16)Previous > v14) )
              {
                if ( v11 && (_WORD)Previous )
                {
                  v21 = 1;
                  v11 = 0;
                }
                v8 = 0;
                if ( v10 < v4 )
                  continue;
              }
            }
            break;
          }
          while ( v10 )
          {
            v16 = &Base[(unsigned __int16)v12[--v10]];
            v17 = *((_WORD *)v16 + 1);
            if ( v17 <= 0x24u )
            {
              if ( v17 != 36 )
                break;
              FxWmiTraceMessage(LoggerHandle, 43LL, (_GUID *)(v16 + 12), *((_WORD *)v16 + 5), 0LL);
            }
            else
            {
              FxWmiTraceMessage(
                LoggerHandle,
                43LL,
                (_GUID *)(v16 + 12),
                *((_WORD *)v16 + 5),
                v16 + 36,
                *((unsigned __int16 *)v16 + 1) - 36LL,
                0LL);
            }
            v12 = (_WORD *)Pool2;
          }
        }
        ExFreePoolWithTag(v12, 0x674C7846u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v8;
}
