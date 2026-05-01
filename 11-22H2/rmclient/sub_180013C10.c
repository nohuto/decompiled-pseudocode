/*
 * XREFs of sub_180013C10 @ 0x180013C10
 * Callers:
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180013C10(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r15
  int *v4; // r14
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  char v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-21h] BYREF
  int v12; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  int v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+74h] [rbp+13h]
  unsigned int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  char *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]

  v2 = 2;
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A80C);
  v3 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  sub_18001F1C4(a1 + 64);
  v4 = (int *)(a1 + 104);
  while ( 1 )
  {
    v6 = *v4;
    if ( (*v4 & 7) == 0 )
      break;
    v5 = a1 + 64;
    if ( (v6 & 0x88) == 0 )
    {
      *v4 = v6 | 0x80;
      *(_DWORD *)(a1 + 72) = 0;
      RtlReleaseSRWLockExclusive(v5);
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v3 + 104))(*(_QWORD *)(a1 + 56), 3LL);
      sub_18001F1C4(a1 + 64);
      *v4 &= ~0x80u;
      break;
    }
    *(_DWORD *)(a1 + 72) = 0;
    v10 = v6;
    RtlReleaseSRWLockExclusive(v5);
    RtlWaitOnAddress(a1 + 104, &v10, 4LL, 0LL);
    sub_18001F1C4(a1 + 64);
  }
  *(_DWORD *)(a1 + 72) = 0;
  RtlReleaseSRWLockExclusive(a1 + 64);
  RtlWakeAddressAll(a1 + 104);
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 && (qword_180032018 & 3) == qword_180032018 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v22 = 0;
    v19 = 0;
    v16 = 0;
    v12 = v7;
    v20 = &v9;
    v17 = &v11;
    v14 = &v12;
    v9 = 3;
    v11 = v2;
    v21 = 1;
    v18 = 4;
    v15 = 4;
    sub_180001104((__int64)&dword_180032000, (unsigned __int8 *)dword_18002A7B9, 0LL, 0LL, 5u, &v13);
  }
  return v2;
}
