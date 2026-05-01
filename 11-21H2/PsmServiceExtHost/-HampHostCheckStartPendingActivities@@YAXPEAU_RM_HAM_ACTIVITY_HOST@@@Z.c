/*
 * XREFs of ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800430C8
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079E58 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800773EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall HampHostCheckStartPendingActivities(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v2; // rbx
  int v3; // eax
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    if ( *((_BYTE *)i + 562) == 2 )
    {
      if ( *((_BYTE *)i + 563) )
      {
        v3 = HampActTryStart((__int64)i);
        if ( v3 )
        {
          if ( (unsigned int)dword_1800DC218 > 5 )
          {
            v6 = v3;
            v7 = *((_QWORD *)v2 + 5);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1800DC218,
              (unsigned int)&unk_1800C1345,
              v4,
              v5,
              (__int64)&v7,
              (__int64)&v6);
          }
        }
      }
    }
  }
}
