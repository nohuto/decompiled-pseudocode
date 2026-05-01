/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x18002A040
 * Callers:
 *     CrmActivityUpdate @ 0x180038D64 (CrmActivityUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     CrmGlobalsReadyTreeCompareRoutine @ 0x18004B734 (CrmGlobalsReadyTreeCompareRoutine.c)
 *     CempLockReleaseExclusive @ 0x180052FA4 (CempLockReleaseExclusive.c)
 */

int __fastcall CrmRegistrationReadyQueueAdd(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-68h] BYREF
  UUID *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  __int64 *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  RtlAcquireSRWLockExclusive(&unk_1800DC1D0);
  dword_1800DC1D8 = GetCurrentThreadId();
  if ( !dword_1800DC1F8 )
  {
    dword_1800DC1F8 = 1;
    TpPostWork(qword_1800DC1F0);
  }
  v4 = xmmword_1800DC1E0;
  if ( (BYTE8(xmmword_1800DC1E0) & 1) != 0 && (_QWORD)xmmword_1800DC1E0 )
    v4 = (unsigned __int64)&xmmword_1800DC1E0 ^ xmmword_1800DC1E0;
  LOBYTE(v3) = 0;
  v5 = BYTE8(xmmword_1800DC1E0) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)CrmGlobalsReadyTreeCompareRoutine(a1 + 128, v4, v3) < 0 )
      {
        v6 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_18;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_18:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_12;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_12:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800DC1E0, v4, v3, a1 + 24);
  LODWORD(v7) = CempLockReleaseExclusive(&unk_1800DC1D0);
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 )
  {
    v7 = qword_1800DB268 & 1;
    if ( v7 == qword_1800DB268 )
    {
      v13 = 0;
      v16 = 0;
      v11 = &Uuid;
      v12 = 16;
      v14 = &v9;
      v9 = v2;
      v15 = 8;
      LODWORD(v7) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DB250,
                      (unsigned __int8 *)dword_1800BE572,
                      0LL,
                      0LL,
                      4u,
                      &v10);
    }
  }
  return v7;
}
