/*
 * XREFs of sub_140A6FF8C @ 0x140A6FF8C
 * Callers:
 *     sub_140A6FA44 @ 0x140A6FA44 (sub_140A6FA44.c)
 *     sub_140A7328C @ 0x140A7328C (sub_140A7328C.c)
 *     sub_140A73424 @ 0x140A73424 (sub_140A73424.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A6FF8C(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 192) = *((_QWORD *)CurrentPrcb + 40);
  *(_QWORD *)(a1 + 200) = *((_QWORD *)CurrentPrcb + 41);
  *(_WORD *)(a1 + 232) = *(_WORD *)(a2 + 56);
  *(_WORD *)(a1 + 234) = *(_WORD *)(a2 + 58);
  *(_WORD *)(a1 + 236) = *(_WORD *)(a2 + 60);
  *(_WORD *)(a1 + 238) = *(_WORD *)(a2 + 62);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 68);
  *(_WORD *)(a1 + 214) = 1;
  result = *(unsigned __int16 *)(a2 + 56);
  if ( (_WORD)result == 16 || (_WORD)result == 51 )
  {
    result = 3LL;
    *(_WORD *)(a1 + 214) = 3;
  }
  return result;
}
