/*
 * XREFs of sub_140997EE0 @ 0x140997EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B69DC @ 0x1403B69DC (sub_1403B69DC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

struct _KTHREAD *__fastcall sub_140997EE0(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  struct _KTHREAD *result; // rax

  v2 = _InterlockedExchange(&dword_140C22394, 0);
  if ( v2 )
    sub_1403B69DC(1, v2);
  if ( qword_140C5AD40 )
    sub_14042A5E0(a1, a2);
  result = KeGetCurrentThread();
  if ( *((_DWORD *)result + 121) )
    __fastfail(0x20u);
  return result;
}
