/*
 * XREFs of ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18016857C
 * Callers:
 *     ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180167F68 (--1TelephonyControllerCallInstance@@MEAA@XZ.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18016807C (-CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::ResetState(TelephonyControllerCallInstance *this)
{
  __int64 v2; // rcx
  __int64 result; // rax
  GUID v4; // [rsp+40h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  char v7; // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v8 = 0LL;
  v4 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
  v5 = 1;
  v6 = 1;
  result = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *, int, char *))(*(_QWORD *)v2 + 24LL))(
             v2,
             &v4,
             24LL,
             &v9,
             8,
             &v7);
  if ( (int)result >= 0 && HIDWORD(v9) )
  {
    HIDWORD(v8) = *((_DWORD *)this + 12);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        LODWORD(v8) = 1;
      }
      else
      {
        if ( (_DWORD)v9 != 2 )
          return 2147943568LL;
        LODWORD(v8) = 2;
      }
    }
    else
    {
      LODWORD(v8) = 0;
    }
    return (*(__int64 (__fastcall **)(TelephonyControllerCallInstance *, __int64 *))(*(_QWORD *)this + 64LL))(this, &v8);
  }
  return result;
}
