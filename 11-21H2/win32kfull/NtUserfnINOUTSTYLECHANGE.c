/*
 * XREFs of NtUserfnINOUTSTYLECHANGE @ 0x1C0202A30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTSTYLECHANGE(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  _BYTE *v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF

  v12 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[7] = v10[7];
  v12 = *a4;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  return result;
}
