/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1C01E3290
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int128 *v6; // rbx
  unsigned int v8; // esi
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v13; // [rsp+38h] [rbp-60h] BYREF
  __int128 v14; // [rsp+48h] [rbp-50h]
  __int128 v15; // [rsp+58h] [rbp-40h]

  v6 = (__int128 *)a4;
  v8 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v6 + 3 < v6 || (unsigned __int64)(v6 + 3) > MmUserProbeAddress )
    v6 = (__int128 *)MmUserProbeAddress;
  v10 = v6[1];
  v11 = v6[2];
  v13 = *v6;
  v14 = v10;
  v15 = v11;
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.SectorSize
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           a3,
           &v13,
           a5);
}
