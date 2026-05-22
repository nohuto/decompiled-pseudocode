/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180002628
 * Callers:
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180002560 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800E1128 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800DF124 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Win32kInterop::CreateKeyboardInputInfo(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  Win32kInterop *v5; // r8
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // r9
  _OWORD *KeyboardInputInfo; // rax
  __int64 v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v20[8]; // [rsp+28h] [rbp-1A0h] BYREF
  _BYTE v21[368]; // [rsp+30h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v5 = this;
  v6 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a2 + 344);
  if ( *(_QWORD *)a2 )
    v6 = a2;
  v7 = *(_DWORD *)v6;
  v19[0] = *(_DWORD *)v6;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v19 + i) ^ (unsigned __int64)v8);
  v10 = 2 * (v8 & *((_QWORD *)v5 + 14));
  v11 = *((_QWORD *)v5 + 11);
  v12 = *(_QWORD *)(v11 + 8 * v10 + 8);
  if ( v12 != *((_QWORD *)v5 + 9) )
  {
    v16 = *(_QWORD *)(v11 + 8 * v10);
    while ( v7 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == v16 )
        goto LABEL_6;
      v12 = *(_QWORD *)(v12 + 8);
    }
    if ( v12 )
      goto LABEL_19;
  }
LABEL_6:
  *(_QWORD *)v19 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))v5 + 6))(
          *((_QWORD *)v5 + 6),
          &GUID_b9402cea_5976_45e1_baa3_22754843b1af,
          v19);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v13,
      v19[0]);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**(_QWORD **)v19 + 24LL))(*(_QWORD *)v19, v7, v20) >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v19);
LABEL_19:
    KeyboardInputInfo = (_OWORD *)Win32kInterop::CreateKeyboardInputInfo(v21, a2, v5, v16);
    v18 = 2LL;
    do
    {
      *(_OWORD *)a3 = *KeyboardInputInfo;
      *((_OWORD *)a3 + 1) = KeyboardInputInfo[1];
      *((_OWORD *)a3 + 2) = KeyboardInputInfo[2];
      *((_OWORD *)a3 + 3) = KeyboardInputInfo[3];
      *((_OWORD *)a3 + 4) = KeyboardInputInfo[4];
      *((_OWORD *)a3 + 5) = KeyboardInputInfo[5];
      *((_OWORD *)a3 + 6) = KeyboardInputInfo[6];
      a3 = (struct KeyboardInputInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = KeyboardInputInfo[7];
      KeyboardInputInfo += 8;
      --v18;
    }
    while ( v18 );
    *(_OWORD *)a3 = *KeyboardInputInfo;
    *((_OWORD *)a3 + 1) = KeyboardInputInfo[1];
    *((_OWORD *)a3 + 2) = KeyboardInputInfo[2];
    *((_OWORD *)a3 + 3) = KeyboardInputInfo[3];
    *((_OWORD *)a3 + 4) = KeyboardInputInfo[4];
    *((_OWORD *)a3 + 5) = KeyboardInputInfo[5];
    *((_OWORD *)a3 + 6) = KeyboardInputInfo[6];
    return 1;
  }
  v14 = *(_QWORD *)v19;
  if ( *(_QWORD *)v19 )
  {
    *(_QWORD *)v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0;
}
