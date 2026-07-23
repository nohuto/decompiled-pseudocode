/*
 * XREFs of sub_1405D01F0 @ 0x1405D01F0
 * Callers:
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C6658 @ 0x1405C6658 (sub_1405C6658.c)
 */

void __noreturn sub_1405D01F0()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C22964 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C22964 == 2 )
      v0 = 241LL;
  }
  sub_1405C6658(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)qword_140C22C90;
  if ( !qword_140C22C90 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C22970;
    if ( !qword_140C22970 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C22978;
      if ( !qword_140C22978 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C22980;
        if ( !qword_140C22980 )
        {
          BugCheckParameter4 = (struct _KTHREAD *)qword_140C20728;
          if ( !qword_140C20728 )
          {
            BugCheckParameter4 = (struct _KTHREAD *)qword_140C223A0;
            if ( !qword_140C223A0 )
              BugCheckParameter4 = KeGetCurrentThread();
          }
        }
      }
    }
  }
  KeBugCheckEx(0xA0u, v0, dword_140C227E0, dword_140C22398, (ULONG_PTR)BugCheckParameter4);
}
