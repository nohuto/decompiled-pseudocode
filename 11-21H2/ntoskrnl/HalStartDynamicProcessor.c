/*
 * XREFs of HalStartDynamicProcessor @ 0x140508D60
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140A505D4 @ 0x140A505D4 (sub_140A505D4.c)
 * Callees:
 *     sub_1403989A4 @ 0x1403989A4 (sub_1403989A4.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_14051E118 @ 0x14051E118 (sub_14051E118.c)
 *     sub_14051E7B4 @ 0x14051E7B4 (sub_14051E7B4.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 */

__int64 __fastcall HalStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( dword_140D014BC && dword_140C0BB30 >= (unsigned int)dword_140D014BC )
    return 2LL;
  if ( a2 >= (unsigned int)sub_1403B3BA0() || !byte_140C4ADB4 && !byte_140D011A0 && a2 >= dword_140C0C694 )
    return 2LL;
  if ( !byte_140C4C448 )
  {
    MmLockPagableSectionByHandle(qword_140C4C440);
    sub_1403989A4(v9, v8);
    if ( !(unsigned __int8)sub_14051E118(a3, a4) )
      return 2LL;
  }
  v10 = sub_140A53F54(a2, a3, 1LL, a1);
  if ( v10 != 4 && !byte_140C4C448 )
    sub_14051E7B4(a3, a4);
  return v10;
}
