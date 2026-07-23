/*
 * XREFs of sub_1406598AC @ 0x1406598AC
 * Callers:
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 * Callees:
 *     sub_140258A0C @ 0x140258A0C (sub_140258A0C.c)
 *     sub_14025A668 @ 0x14025A668 (sub_14025A668.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1406595AC @ 0x1406595AC (sub_1406595AC.c)
 */

__int64 __fastcall sub_1406598AC(_QWORD *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // r15d

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 2896);
  v3 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    sub_14025A668(a2, (__int64)CurrentThread);
    v7 = *(_DWORD *)(a2 + 2920);
    sub_140258A0C(a2, (__int64)CurrentThread);
    if ( sub_140347810(v2 + 7) )
    {
      sub_1406595AC(a1, (__int64)v2, v7);
      sub_1402AD030(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}
