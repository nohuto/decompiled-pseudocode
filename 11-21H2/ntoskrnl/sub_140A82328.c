/*
 * XREFs of sub_140A82328 @ 0x140A82328
 * Callers:
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 *     sub_140A9C820 @ 0x140A9C820 (sub_140A9C820.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 *     sub_14063E374 @ 0x14063E374 (sub_14063E374.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 *     sub_140A7FDC0 @ 0x140A7FDC0 (sub_140A7FDC0.c)
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 *     sub_140A90ED8 @ 0x140A90ED8 (sub_140A90ED8.c)
 *     sub_140A9697C @ 0x140A9697C (sub_140A9697C.c)
 *     sub_140A9A2E8 @ 0x140A9A2E8 (sub_140A9A2E8.c)
 *     sub_140A9B0C8 @ 0x140A9B0C8 (sub_140A9B0C8.c)
 */

void __fastcall sub_140A82328(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // eax

  v5 = dword_140C1ACA4;
  if ( !dword_140C1AD14 )
  {
    if ( !a2 )
    {
      dword_140C1AD3C = 1;
      qword_140C1AD08 = (PVOID)MmLockPagableImageSection((ULONG_PTR)sub_140A82480);
      qword_140C1AD00 = (PVOID)MmLockPagableImageSection((ULONG_PTR)&dword_140D4E018);
      MmLockPagableImageSection((ULONG_PTR)&stru_140A75030);
    }
    if ( v5 || !a2 )
      sub_14063E374();
    dword_140C1AD38 = 0x1FFF;
    v6 = dword_140C0C848;
    if ( dword_140C0C848 == -1 )
      v6 = 2491;
    dword_140C29FC0 = v6;
    if ( v5 == 1 )
    {
      dword_140C1AA70 = 1;
      dword_140C0C848 &= ~0x20u;
      dword_140C29FC0 = v6 & 0xFFFFFFDF;
      sub_14063B338(8u);
    }
    *((_QWORD *)&xmmword_140C1B2B0 + 1) = &xmmword_140C1B2B0;
    *(_QWORD *)&xmmword_140C1B2B0 = &xmmword_140C1B2B0;
    *(&xmmword_140C1B1F0 + 1) = &xmmword_140C1B1F0;
    xmmword_140C1B1F0 = &xmmword_140C1B1F0;
    if ( !a2 )
    {
      LOBYTE(a4) = 1;
      sub_140A82480((unsigned int)dword_140C29FC0, (unsigned int)dword_140C1AA70, (unsigned int)dword_140C1ACA4, a4);
      sub_140A9697C();
      sub_140A9A2E8();
      sub_140A9B0C8();
      sub_140A90ED8();
      sub_140A7FDC0(dword_140C29FC0);
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)sub_14045F6A0, 0);
      dword_140D575F8 = 1;
    }
    dword_140C1AD14 = 1;
  }
}
