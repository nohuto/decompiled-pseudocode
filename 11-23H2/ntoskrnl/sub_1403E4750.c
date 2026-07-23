/*
 * XREFs of sub_1403E4750 @ 0x1403E4750
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14034C27C (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x140429F60 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1403E4750(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64); // rdi

  v3 = a1[2];
  v4 = a1[1] ^ v3;
  v5 = (__int64 (__fastcall *)(__int64))(a1[3] ^ v3);
  if ( (*(_DWORD *)(v4 + 2452) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3);
  else
    _mm_lfence();
  return v5(v4);
}
