/*
 * XREFs of sub_140230B44 @ 0x140230B44
 * Callers:
 *     sub_14023EE78 @ 0x14023EE78 (sub_14023EE78.c)
 *     sub_1402AD610 @ 0x1402AD610 (sub_1402AD610.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 * Callees:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 */

_BOOL8 __fastcall sub_140230B44(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _BYTE *v2; // rax
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 586) == 1 )
    return 0LL;
  v2 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
  {
    v3 = (unsigned __int8)sub_140230BA0(a1, 0LL) == 0;
    goto LABEL_4;
  }
  if ( *v2 == 1 || *v2 == 3 || *v2 == 6 )
  {
    v3 = *v2 == 6;
LABEL_4:
    if ( !v3 )
      return 0LL;
  }
  return (*((_DWORD *)CurrentThread + 29) & 0x20) == 0;
}
