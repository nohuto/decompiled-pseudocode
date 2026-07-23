/*
 * XREFs of sub_14053F590 @ 0x14053F590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403B63D0 @ 0x1403B63D0 (sub_1403B63D0.c)
 *     sub_140881450 @ 0x140881450 (sub_140881450.c)
 */

void __fastcall sub_14053F590(int a1)
{
  int v1; // ecx
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        sub_140881450();
        sub_1402F9540((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      sub_1403B63D0(8);
    }
  }
  else
  {
    _InterlockedOr(&dword_140C0B8C0, 8u);
  }
}
