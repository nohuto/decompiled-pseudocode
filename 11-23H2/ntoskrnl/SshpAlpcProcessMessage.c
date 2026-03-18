/*
 * XREFs of SshpAlpcProcessMessage @ 0x14084C708
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14084C57C (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D320 (SSHSupportReleasePushLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SshpAlpcProcessMessage(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int *v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v7; // rax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v2 = *(int *)(a1 + 44);
    if ( (unsigned int)v2 > 1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38548, 0LL);
      v3 = &dword_140C38558[48 * v2];
      if ( *v3 && !*((_BYTE *)v3 + 4) )
      {
        *((_BYTE *)v3 + 4) = 1;
        v4 = v3 + 44;
        while ( 1 )
        {
          v5 = (_QWORD *)*v4;
          if ( (_QWORD *)*v4 == v4 )
            break;
          if ( (_QWORD *)v5[1] != v4 || (v7 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
            __fastfail(3u);
          *v4 = v7;
          *(_QWORD *)(v7 + 8) = v4;
          v5[1] = v5;
          *v5 = v5;
          SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38548);
          ((void (__fastcall *)(_QWORD))v5[2])(v5[3]);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38548, 0LL);
        }
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38548);
    }
  }
  return v1;
}
