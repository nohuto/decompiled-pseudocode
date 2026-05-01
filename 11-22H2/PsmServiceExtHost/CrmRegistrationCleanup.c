/*
 * XREFs of CrmRegistrationCleanup @ 0x180012170
 * Callers:
 *     CrmSrvRegister @ 0x180004F60 (CrmSrvRegister.c)
 *     CrmSrvUnregister @ 0x180012074 (CrmSrvUnregister.c)
 *     CrmGlobalsCleanup @ 0x18006CEEC (CrmGlobalsCleanup.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x18006D14C (CrmGlobalsRegistrationsDeleteRoutine.c)
 * Callees:
 *     CrmGlobalsRegistrationRemove @ 0x1800121FC (CrmGlobalsRegistrationRemove.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     CrmRegistrationRemoveActivity @ 0x18006DC44 (CrmRegistrationRemoveActivity.c)
 */

void __fastcall CrmRegistrationCleanup(_QWORD *a1, int a2)
{
  _QWORD *i; // rdi
  int v4; // ecx
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  UUID *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 && a1[6] != -1LL )
    CrmGlobalsRegistrationRemove();
  for ( i = a1 + 7; (_QWORD *)*i != i; CrmRegistrationRemoveActivity(a1, *i, 0LL) )
    ;
  if ( (unsigned int)dword_1800DB250 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 2LL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &Uuid;
      v5 = a1[2];
      v10 = &v5;
      v8 = 16;
      v11 = 8;
      tlgWriteTransfer_EventWriteTransfer(v4, (int)&dword_1800BEB2F, 0, 0, 4u, &v6);
    }
  }
}
