/*
 * XREFs of ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800FDCA0
 * Callers:
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800FCC94 (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800FE6C0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800FF6A4 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AlpcSectionListEntry::DestroySection(AlpcPort::AlpcSectionListEntry *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  int v9; // edx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  __int128 v15; // [rsp+80h] [rbp-80h]
  __int64 v16[9]; // [rsp+198h] [rbp+98h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v2 = *((_QWORD *)this + 3);
      v3 = (*((_QWORD *)this + 4) - 40LL) & 0xFFFFFFFFFFFFFFF8uLL;
      v4 = *(_OWORD *)(v3 + v2 + 8);
      v5 = *(_OWORD *)(v3 + v2 + 24);
      v6 = *((_QWORD *)this + 8);
      v11 = 0LL;
      v13 = 0LL;
      memset(v12, 0, sizeof(v12));
      v16[0] = 1610612736LL;
      LODWORD(v12[0]) = 4718624;
      v14 = v4;
      v15 = v5;
      if ( (int)((__int64 (__fastcall *)(__int64, __int64, _OWORD *, __int64 *, _QWORD, _QWORD, _QWORD, __int64 *))NtAlpcSendWaitReceivePort)(
                  v6,
                  0x10000LL,
                  v12,
                  v16,
                  0LL,
                  0LL,
                  0LL,
                  &v11) >= 0 )
        *((_BYTE *)this + 58) = 0;
    }
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
    {
      v8 = NtAlpcDeletePortSection(*((_QWORD *)this + 8), 0LL, v7);
      if ( v8 < 0 )
        return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v8, v9);
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( *((_QWORD *)this + 3) )
    {
      v8 = NtAlpcDeleteSectionView(*((_QWORD *)this + 8), 0LL);
      if ( v8 < 0 )
        return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v8, v9);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  return 0LL;
}
