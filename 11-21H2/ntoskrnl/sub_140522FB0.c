/*
 * XREFs of sub_140522FB0 @ 0x140522FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B3120 @ 0x1403B3120 (sub_1403B3120.c)
 *     sub_1403BE95C @ 0x1403BE95C (sub_1403BE95C.c)
 */

__int64 __fastcall sub_140522FB0(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ~(*((_DWORD *)CurrentPrcb + 38) * *((_DWORD *)CurrentPrcb + 39) - 1);
  if ( sub_1403BE95C((__int64)&v5) && (v3 & a1[2]) == 0 && *a1 == (_DWORD)v5 && a1[1] == HIDWORD(v5) )
    sub_1403B3120((__int64)a1, 0, 0);
  else
    byte_140C4E4A8 = 0;
  return 0LL;
}
