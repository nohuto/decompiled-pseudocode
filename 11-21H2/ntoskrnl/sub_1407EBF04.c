/*
 * XREFs of sub_1407EBF04 @ 0x1407EBF04
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1407EBF04(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax
  __int64 Pool2; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24580);
    if ( qword_140C24570 != &qword_140C24570 || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1346587472LL);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = dword_140C24560;
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_140C24578;
        if ( *(PVOID **)qword_140C24578 != &qword_140C24570 )
          __fastfail(3u);
        *v6 = &qword_140C24570;
        v6[1] = v7;
        *v7 = v6;
        qword_140C24578 = (__int64)v6;
      }
      dword_140C245EC = dword_140C24560++;
      dword_140C245E4 = a1;
      dword_140C245E0 = a2;
    }
    sub_1402935D0((ULONG_PTR)&qword_140C24580);
  }
}
