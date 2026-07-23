/*
 * XREFs of sub_1403B60E0 @ 0x1403B60E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14038D400 @ 0x14038D400 (sub_14038D400.c)
 *     sub_1403989A4 @ 0x1403989A4 (sub_1403989A4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     sub_140A52CF4 @ 0x140A52CF4 (sub_140A52CF4.c)
 *     sub_140A52D84 @ 0x140A52D84 (sub_140A52D84.c)
 */

void __fastcall sub_1403B60E0(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ecx

  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        sub_1402FD820((ULONG_PTR)qword_140C4C440, 0LL);
        sub_140A52D84();
        sub_14038D400(v4, v3);
        v5 = qword_140C4E390;
        dword_140C4BFCC = 0;
        if ( *(_DWORD *)(qword_140C4E390 + 228) == 5
          && (*(_DWORD *)(qword_140C4E390 + 184) & 0x20) == 0
          && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
        {
          v8 = -1;
          if ( qword_140C4C760 < 0xFFFFFFFF )
            v8 = qword_140C4C760;
          KeBugCheckEx(0x5Cu, 0x110uLL, v5, 0x2AuLL, v8);
        }
      }
    }
    else
    {
      dword_140C4BFCC = 1;
      sub_14042A5E0(0LL, Argument1);
      MmLockPagableSectionByHandle(qword_140C4C440);
      sub_140A52CF4();
      sub_1403989A4(v7, v6);
    }
  }
}
