/*
 * XREFs of ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003DF84
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D0E8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003E2C4 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        char a2,
        struct CDWMDXGIAdapter *a3,
        const struct DXGIOutputInfo *a4)
{
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  _WORD *v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // r8
  _WORD *v16; // rax
  int v17; // eax
  int v18; // ecx
  HMONITOR v19; // rcx
  int v20; // eax
  CDWMDisplay *result; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  __int64 v26; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v27[8]; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v28[96]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-68h]

  v26 = 0LL;
  memset_0(v28, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  *((_BYTE *)this + 164) = (*((_DWORD *)a4 + 55) & 2) != 0;
  v8 = *((_QWORD *)a3 + 42);
  *((_QWORD *)this + 21) = v8;
  v9 = *((_DWORD *)a4 + 55);
  *((_BYTE *)this + 184) = (v9 & 0x100) != 0;
  if ( (v9 & 0x100) != 0 )
    v8 = *((_QWORD *)a4 + 14);
  *((_QWORD *)this + 22) = v8;
  *((_DWORD *)this + 47) = *((_DWORD *)a4 + 32);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 86);
  *((_QWORD *)this + 2) = *((_QWORD *)a4 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 48) = *((_DWORD *)a4 + 31);
  *((_DWORD *)this + 49) = *((_DWORD *)a4 + 30);
  *((_BYTE *)this + 268) = (*((_DWORD *)a4 + 55) & 4) != 0;
  *((_BYTE *)this + 269) = (*((_DWORD *)a4 + 55) & 8) != 0;
  if ( !a2
    || (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)a4 + 1) + 96LL))(*((_QWORD *)a4 + 1), v27) < 0
    || (v10 = 1, (v27[0] & 0x10) == 0) )
  {
    v10 = 0;
  }
  *((_BYTE *)this + 271) = v10;
  v11 = *((_DWORD *)a4 + 55);
  *((_BYTE *)this + 273) = (v11 & 0x400) != 0;
  if ( (v11 & 0x400) != 0 )
  {
    *((_DWORD *)this + 61) = *((_DWORD *)a4 + 44);
    *((_QWORD *)this + 31) = *((_QWORD *)a4 + 20);
    v12 = *((_QWORD *)a4 + 21);
  }
  else
  {
    *((_DWORD *)this + 61) = 1;
    *((_QWORD *)this + 31) = *((_QWORD *)a4 + 19);
    v12 = *((_QWORD *)a4 + 19);
  }
  *((_QWORD *)this + 32) = v12;
  v13 = (_WORD *)((char *)this + 96);
  v14 = 32LL;
  *((_DWORD *)this + 66) = *((_DWORD *)a4 + 73);
  do
  {
    v15 = *(_WORD *)((char *)v13 + a4 - (CDWMDisplay *)((char *)this + 96) + 224);
    if ( !v15 )
      break;
    *v13++ = v15;
    --v14;
  }
  while ( v14 );
  v16 = v13 - 1;
  if ( v14 )
    v16 = v13;
  *v16 = 0;
  if ( ((*((_DWORD *)a4 + 45) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 51) = *((_DWORD *)a4 + 35);
    v17 = *((_DWORD *)a4 + 36);
  }
  else
  {
    *((_DWORD *)this + 51) = *((_DWORD *)a4 + 36);
    v17 = *((_DWORD *)a4 + 35);
  }
  *((_DWORD *)this + 52) = v17;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a4)(
         *(_QWORD *)a4,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v26) < 0
    || (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 216LL))(v26, v28) < 0 )
  {
    v29 = 8LL;
  }
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  v18 = *((_DWORD *)a4 + 75);
  if ( !v18 )
    goto LABEL_19;
  v25 = v18 - 1;
  if ( !v25 )
  {
    *((_DWORD *)this + 55) = 24;
    *((_DWORD *)this + 59) = 12;
    goto LABEL_20;
  }
  if ( (unsigned int)(v25 - 1) <= 1 )
  {
    *((_DWORD *)this + 55) = 10;
    *((_DWORD *)this + 59) = 1;
  }
  else
  {
LABEL_19:
    *((_DWORD *)this + 55) = 87;
    *((_DWORD *)this + 59) = 0;
  }
LABEL_20:
  v19 = (HMONITOR)*((_QWORD *)this + 2);
  *((_DWORD *)this + 53) = *((_DWORD *)a4 + 38);
  *((_DWORD *)this + 54) = *((_DWORD *)a4 + 39);
  *((_DWORD *)this + 58) = *((_DWORD *)a4 + 45);
  *((_DWORD *)this + 60) = *((_DWORD *)a4 + 72);
  *((_DWORD *)this + 56) = *((_DWORD *)a4 + 46);
  v20 = IsHDRDisplay(v19);
  *((_DWORD *)this + 57) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 272) = v20 != 0;
  *((_DWORD *)this + 8) = *((_DWORD *)a4 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 36);
  result = this;
  v22 = *((_DWORD *)a4 + 52);
  v23 = *((_DWORD *)a4 + 53);
  v24 = *((_DWORD *)a4 + 54);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 51);
  *((_DWORD *)this + 15) = v22;
  *((_DWORD *)this + 16) = v23;
  *((_DWORD *)this + 17) = v24;
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 47);
  *((_DWORD *)this + 11) = *((_DWORD *)a4 + 48);
  *((_DWORD *)this + 12) = *((_DWORD *)a4 + 49);
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 50);
  return result;
}
