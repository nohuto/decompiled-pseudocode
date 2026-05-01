/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003590
 * Callers:
 *     DllGetActivationFactory @ 0x180008300 (DllGetActivationFactory.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(__int64 a1, __int64 a2, HSTRING a3, _QWORD *a4)
{
  PCWSTR StringRawBuffer; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rdi
  RTL_SRWLOCK *v15; // rbx
  void *v16; // rcx
  int v17; // esi
  PVOID v19; // rbx
  RTL_SRWLOCK *v20; // rsi
  void *v21; // rcx
  PVOID Ptr; // [rsp+30h] [rbp-78h] BYREF
  int v23; // [rsp+38h] [rbp-70h] BYREF
  BOOL hasEmbedNull; // [rsp+3Ch] [rbp-6Ch] BYREF
  _OWORD v25[2]; // [rsp+40h] [rbp-68h] BYREF
  int v26; // [rsp+60h] [rbp-48h]
  wchar_t v27; // [rsp+64h] [rbp-44h]

  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v26 = *(_DWORD *)L"Id";
    v25[0] = *(_OWORD *)L"activatibleClassId";
    v27 = aActivatiblecla[18];
    v25[1] = *(_OWORD *)L"bleClassId";
    RoOriginateErrorW(2147942487LL, 18LL, v25);
    return 2147942487LL;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) + 8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v8 >= v9 )
  {
LABEL_31:
    RoOriginateError(2147746065LL, a3);
    return 2147746065LL;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)v8 )
    {
      v10 = (*(__int64 (**)(void))(*(_QWORD *)v8 + 8LL))() - (_QWORD)StringRawBuffer;
      v11 = (unsigned __int16 *)StringRawBuffer;
      do
      {
        v12 = *(unsigned __int16 *)((char *)v11 + v10);
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    v8 += 8LL;
    if ( v8 >= v9 )
      goto LABEL_31;
  }
  v14 = *(_QWORD *)v8;
  v23 = 1;
  *a4 = 0LL;
  Ptr = 0LL;
  if ( !**(_QWORD **)(v14 + 24) )
    goto LABEL_18;
  v15 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  AcquireSRWLockShared(v15);
  v16 = **(void ***)(v14 + 24);
  if ( !v16 )
  {
    if ( v15 )
      ReleaseSRWLockShared(v15);
LABEL_18:
    v17 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v14)(
            &v23,
            v14,
            &GUID_00000035_0000_0000_c000_000000000046,
            &Ptr);
    if ( v17 >= 0 )
    {
      if ( (v23 & 4) != 0 )
        goto LABEL_25;
      v19 = 0LL;
      v20 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      AcquireSRWLockExclusive(v20);
      v21 = **(void ***)(v14 + 24);
      if ( v21 )
      {
        v19 = DecodePointer(v21);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 8LL))(v19);
      }
      else
      {
        **(_QWORD **)(v14 + 24) = EncodePointer(Ptr);
      }
      if ( v20 )
        ReleaseSRWLockExclusive(v20);
      if ( v19 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      else
      {
LABEL_25:
        v19 = Ptr;
      }
      *a4 = v19;
      return 0;
    }
    return (unsigned int)v17;
  }
  Ptr = DecodePointer(v16);
  v17 = (**(__int64 (__fastcall ***)(PVOID, GUID *, _QWORD *))Ptr)(Ptr, &GUID_00000035_0000_0000_c000_000000000046, a4);
  if ( v15 )
    ReleaseSRWLockShared(v15);
  return (unsigned int)v17;
}
