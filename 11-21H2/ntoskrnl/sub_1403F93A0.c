/*
 * XREFs of sub_1403F93A0 @ 0x1403F93A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403F93A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rdi
  __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx

  sub_14024B6F8(a1, a2, a3);
  KeAcquireSpinLockAtDpcLevel(&qword_140C0E968);
  KeReleaseSpinLockFromDpcLevel(&qword_140C0E968);
  v4 = *(unsigned int **)(a1 + 32);
  result = *v4;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v4 = result;
    if ( !(_DWORD)result )
    {
      memset(v4 + 2, 0, 0x40uLL);
      v6 = (_QWORD *)*((_QWORD *)v4 + 9);
      sub_14042A590(v6[3]);
      result = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))v6[3])(v6, v6[4], v6[5], v6[6]);
    }
  }
  v7 = *((_QWORD *)v4 + 4);
  if ( v7 )
  {
    sub_14042A590(v7);
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v4 + 4))(
             v4 + 2,
             *((_QWORD *)v4 + 5),
             *((_QWORD *)v4 + 6),
             *((_QWORD *)v4 + 7));
  }
  return result;
}
