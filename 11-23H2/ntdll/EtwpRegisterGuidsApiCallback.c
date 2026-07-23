/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x180082458
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180032238 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18005EE50 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2, char a3)
{
  int v3; // r14d
  __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int128 v10; // xmm0
  unsigned int (__fastcall *v11)(_QWORD, __int64, int *, _OWORD *); // r11
  __int64 v12; // rdx
  int v14; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 112);
  v4 = *(_QWORD *)(a2 + 240);
  v5 = 0;
  memset(v15, 0, sizeof(v15));
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v8 = 4;
    }
    else
    {
      if ( v3 != 2 )
        return 0LL;
      v8 = 10;
    }
  }
  else
  {
    v8 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  if ( !a3 && v4 && v8 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    EtwpAcquireGuidEntryExclusive(v4);
    *(_QWORD *)(v4 + 152) = *(_QWORD *)(a1 + 104);
    *(_DWORD *)(v4 + 160) = v3;
    *(_DWORD *)(v4 + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 40));
  }
  v9 = *(_QWORD *)(a2 + 56);
  v10 = *(_OWORD *)(a1 + 40);
  v11 = *(unsigned int (__fastcall **)(_QWORD, __int64, int *, _OWORD *))v9;
  v12 = *(_QWORD *)(v9 + 8);
  *((_QWORD *)&v15[0] + 1) = *(_QWORD *)(a1 + 104);
  LODWORD(v15[0]) = 48;
  DWORD1(v15[0]) = v8;
  v14 = 48;
  *(_OWORD *)((char *)&v15[1] + 8) = v10;
  if ( v11 )
    return v11(v8, v12, &v14, v15);
  return v5;
}
