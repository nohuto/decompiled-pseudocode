/*
 * XREFs of ?HamCallback@HamActivityWrapper@@SAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x18001C480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Close@HamActivityWrapper@@QEAAXXZ @ 0x18001C358 (-Close@HamActivityWrapper@@QEAAXXZ.c)
 */

void __fastcall HamActivityWrapper::HamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  int v1; // edx
  HamActivityWrapper *v3; // rdi
  int v4; // edx
  int v5; // edx
  char v6; // bl

  v1 = *((_DWORD *)a1 + 4);
  v3 = (HamActivityWrapper *)*((_QWORD *)a1 + 1);
  if ( v1 )
  {
    v4 = v1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)a1 + 1));
        return;
      }
      RtlAcquireSRWLockExclusive((char *)v3 + 8);
      *((_DWORD *)v3 + 19) = *((_DWORD *)a1 + 6);
    }
    else
    {
      RtlAcquireSRWLockExclusive((char *)v3 + 8);
      *((_DWORD *)v3 + 16) = *((_DWORD *)a1 + 6);
      *((_DWORD *)v3 + 17) = *((_DWORD *)a1 + 7);
      *((_DWORD *)v3 + 19) = *((_DWORD *)a1 + 8);
      *((_DWORD *)v3 + 18) = *((_DWORD *)a1 + 9);
    }
    RtlReleaseSRWLockExclusive((char *)v3 + 8);
    HamActivityWrapper::Close(v3);
    return;
  }
  RtlAcquireSRWLockExclusive((char *)v3 + 8);
  v6 = 1;
  if ( *((_DWORD *)v3 + 10) == 1 )
  {
    *((_DWORD *)v3 + 10) = 2;
    *((_DWORD *)v3 + 11) = *((_WORD *)a1 + 21) & 7;
    *((_DWORD *)v3 + 12) = *((unsigned __int16 *)a1 + 20);
    *((_QWORD *)v3 + 7) = *((_QWORD *)a1 + 3);
  }
  else
  {
    v6 = 0;
  }
  RtlReleaseSRWLockExclusive((char *)v3 + 8);
  if ( v6 )
    RtlWakeAllConditionVariable((char *)v3 + 16);
}
