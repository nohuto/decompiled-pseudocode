/*
 * XREFs of NtUserfnINOUTSTYLECHANGE @ 0x1C0155520
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTSTYLECHANGE(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // r8
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  v12 = 0LL;
  PtiCurrentShared(a1, a2, a3, (__int64)a4);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[7] = v10[7];
  v12 = *a4;
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64))&WPP_MAIN_CB.SectorSize
            + ((a6 + 6) & 0x1F)))(
             a1,
             v8,
             a3,
             &v12,
             a5);
  *a4 = v12;
  return result;
}
