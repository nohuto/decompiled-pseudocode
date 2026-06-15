/*
 * XREFs of ?GetMaxCallInstanceCount@PhoneCallAudio@@UEAAJPEAI@Z @ 0x18013C8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::GetMaxCallInstanceCount(PhoneCallAudio *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    else
    {
      return (unsigned int)-2147019873;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
