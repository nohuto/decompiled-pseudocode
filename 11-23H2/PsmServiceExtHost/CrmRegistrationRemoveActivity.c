/*
 * XREFs of CrmRegistrationRemoveActivity @ 0x18006DA24
 * Callers:
 *     CrmRegistrationCleanup @ 0x180012170 (CrmRegistrationCleanup.c)
 * Callees:
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

char __fastcall CrmRegistrationRemoveActivity(__int64 a1, volatile signed __int64 *a2, int a3)
{
  volatile signed __int64 v6; // rax
  volatile signed __int64 **v7; // rcx
  int v9; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-19h] BYREF
  UUID *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  __int64 *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  if ( !a3 )
  {
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  }
  v6 = *a2;
  if ( *(volatile signed __int64 **)(*a2 + 8) != a2 || (v7 = (volatile signed __int64 **)*((_QWORD *)a2 + 1), *v7 != a2) )
    __fastfail(3u);
  *v7 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  *((_QWORD *)a2 + 1) = a2;
  *a2 = (volatile signed __int64)a2;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 2) != 0 && (qword_1800DB268 & 2) == qword_1800DB268 )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = &v10;
    v9 = *((_DWORD *)a2 + 17);
    v18 = &v9;
    v13 = 16;
    v16 = 8;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BECFE,
      0LL,
      0LL,
      5u,
      &v11);
  }
  return CrmActivityDereference(a2);
}
